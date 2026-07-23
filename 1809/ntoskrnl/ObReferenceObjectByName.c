/*
 * XREFs of ObReferenceObjectByName @ 0x1405C9DA0
 * Callers:
 *     IopGetDriverPathInformation @ 0x14027F0E8 (IopGetDriverPathInformation.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C9B80 (IopGetLegacyVetoListDrivers.c)
 *     AlpcpCreateClientPort @ 0x14061606C (AlpcpCreateClientPort.c)
 *     ObShutdownSystem @ 0x140861F6C (ObShutdownSystem.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140016078 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14004E050 (SeClearLearningModeObjectInformation.c)
 *     PsDereferenceSiloContext @ 0x14012C170 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C9FE4 (ObpFreeObjectNameBuffer.c)
 *     ObpCheckObjectReference @ 0x1405CA050 (ObpCheckObjectReference.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObpCaptureObjectName @ 0x1405E3BF0 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        int a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        ACCESS_MASK a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        _QWORD *a8)
{
  int v11; // edi
  struct _LIST_ENTRY *CurrentSilo; // rax
  void *v13; // rdi
  unsigned __int64 v14; // rdx
  NTSTATUS v16; // [rsp+70h] [rbp-278h] BYREF
  _WORD v17[8]; // [rsp+78h] [rbp-270h] BYREF
  __int64 v18; // [rsp+88h] [rbp-260h] BYREF
  _BYTE v19[16]; // [rsp+90h] [rbp-258h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-248h]
  int *v21; // [rsp+A8h] [rbp-240h]
  __int64 v22; // [rsp+B0h] [rbp-238h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-220h] BYREF
  __int64 v24[5]; // [rsp+E8h] [rbp-200h] BYREF
  _QWORD v25[20]; // [rsp+110h] [rbp-1D8h] BYREF
  _QWORD v26[28]; // [rsp+1B0h] [rbp-138h] BYREF

  if ( a1 )
  {
    v11 = ObpCaptureObjectName(a6, a1, v17, 1LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( v17[0] )
    {
      if ( a3
        || (a3 = (struct _SECURITY_SUBJECT_CONTEXT *)v25,
            SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext),
            v11 = SepCreateAccessStateFromSubjectContext(&SubjectContext, v25, v26, a4, (PGENERIC_MAPPING)(a5 + 76)),
            v11 >= 0) )
      {
        CurrentSilo = PsGetCurrentSilo();
        v16 = ObpLookupObjectName(
                0,
                (int)v17,
                a2,
                a5,
                a6,
                a7,
                0LL,
                0LL,
                (__int64)CurrentSilo,
                (__int64)a3,
                (__int64)v24,
                0LL,
                (__int64)&v18);
        v11 = v16;
        ObpReleaseLookupContext((__int64)v24);
        *a8 = 0LL;
        if ( v11 >= 0 )
        {
          v13 = (void *)v18;
          v14 = *(unsigned __int8 *)(v18 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v18 - 48) >> 8);
          v22 = 0LL;
          v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14] + 16;
          v21 = (int *)v17;
          SeSetLearningModeObjectInformation((__int64)v19);
          if ( (unsigned __int8)ObpCheckObjectReference((_DWORD)v13, &v16) )
            *a8 = v13;
          else
            PsDereferenceSiloContext(v13);
          SeClearLearningModeObjectInformation();
          v11 = v16;
        }
        if ( a3 == (struct _SECURITY_SUBJECT_CONTEXT *)v25 )
        {
          SepDeleteAccessState((__int64)a3);
          SeReleaseSubjectContext(a3 + 1);
        }
      }
      ObpFreeObjectNameBuffer(v17);
      return (unsigned int)v11;
    }
  }
  return 3221225523LL;
}
