/*
 * XREFs of ObReferenceObjectByName @ 0x1405C6D50
 * Callers:
 *     IopGetDriverPathInformation @ 0x140293620 (IopGetDriverPathInformation.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C6694 (IopGetLegacyVetoListDrivers.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     AlpcpCreateClientPort @ 0x14065CA48 (AlpcpCreateClientPort.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 *     ObShutdownSystem @ 0x14089CFBC (ObShutdownSystem.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140003F54 (ObpReleaseLookupContext.c)
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x14003B450 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14003B480 (SeClearLearningModeObjectInformation.c)
 *     PsGetCurrentSilo @ 0x140043C50 (PsGetCurrentSilo.c)
 *     PsDereferenceSiloContext @ 0x14012E7D0 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C6F90 (ObpFreeObjectNameBuffer.c)
 *     ObpCheckObjectReference @ 0x1405C7008 (ObpCheckObjectReference.c)
 *     SeCreateAccessState @ 0x1405D3E00 (SeCreateAccessState.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObpCaptureObjectName @ 0x1405F5600 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v12; // rcx
  int AccessState; // ebx
  struct _LIST_ENTRY *CurrentSilo; // rax
  void *v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  int v19[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v22[7]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23[5]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v24[20]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v25[224]; // [rsp+190h] [rbp+90h] BYREF

  v18 = a7;
  memset(v25, 0, sizeof(v25));
  *(_QWORD *)v19 = 0LL;
  v20 = 0LL;
  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  memset(v22, 0, sizeof(v22));
  if ( a1 )
  {
    LOBYTE(v12) = a6;
    AccessState = ObpCaptureObjectName(v12, a1, v19, 1LL);
    if ( AccessState < 0 )
      return (unsigned int)AccessState;
    if ( LOWORD(v19[0]) )
    {
      if ( a3 || (a3 = v24, AccessState = SeCreateAccessState(v24, v25, a4, a5 + 76), AccessState >= 0) )
      {
        CurrentSilo = PsGetCurrentSilo();
        LODWORD(v18) = ObpLookupObjectName(
                         0,
                         (int)v19,
                         a2,
                         a5,
                         a6,
                         v18,
                         0LL,
                         0LL,
                         (__int64)CurrentSilo,
                         (__int64)a3,
                         (__int64)v23,
                         0LL,
                         (__int64)&v21);
        AccessState = v18;
        ObpReleaseLookupContext((__int64)v23);
        *a8 = 0LL;
        if ( AccessState >= 0 )
        {
          v15 = (void *)v21;
          v16 = *(unsigned __int8 *)(v21 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v21 - 48) >> 8);
          v22[4] = 0LL;
          v22[2] = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v16] + 16;
          v22[3] = v19;
          SeSetLearningModeObjectInformation((__int64)v22);
          if ( (unsigned __int8)ObpCheckObjectReference((_DWORD)v15, (PNTSTATUS)&v18) )
            *a8 = v15;
          else
            PsDereferenceSiloContext(v15);
          SeClearLearningModeObjectInformation();
          AccessState = v18;
        }
        if ( a3 == v24 )
        {
          SepDeleteAccessState((__int64)a3);
          SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
        }
      }
      ObpFreeObjectNameBuffer(v19);
      return (unsigned int)AccessState;
    }
  }
  return 3221225523LL;
}
