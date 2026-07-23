/*
 * XREFs of PspCombineSecurityDomains @ 0x14061204C
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     KeSynchronizeSecurityDomain @ 0x14013853C (KeSynchronizeSecurityDomain.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     SeCreateAccessStateEx @ 0x140613280 (SeCreateAccessStateEx.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall PspCombineSecurityDomains(PVOID Object, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int AccessState; // ebx
  NTSTATUS v7; // eax
  signed __int64 v9; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-100h] BYREF
  HANDLE v11; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[224]; // [rsp+F0h] [rbp-10h] BYREF

  if ( (*((_DWORD *)Object + 435) & 0x400000) == 0 || (a2[435] & 0x400000) == 0 )
    return 3221225596LL;
  _InterlockedOr(v10, 0);
  v4 = *((_QWORD *)Object + 262);
  v5 = *((_QWORD *)a2 + 262);
  if ( v4 == v5 )
    return 0LL;
  if ( !v4 || !v5 || *((int *)Object + 520) < 0 || (int)a2[520] < 0 )
    return 3221226597LL;
  Handle = 0LL;
  v11 = 0LL;
  AccessState = SeCreateAccessStateEx(
                  0,
                  (_DWORD)a2,
                  (unsigned int)&PassedAccessState,
                  (unsigned int)v14,
                  40,
                  (__int64)PsProcessType + 76);
  if ( AccessState >= 0 )
  {
    v7 = ObOpenObjectByPointer(Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle);
    AccessState = v7;
    if ( v7 >= 0 )
    {
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      AccessState = SeCreateAccessStateEx(
                      0,
                      (_DWORD)Object,
                      (unsigned int)&PassedAccessState,
                      (unsigned int)v14,
                      40,
                      (__int64)PsProcessType + 76);
      if ( AccessState < 0 )
        goto LABEL_14;
      v7 = ObOpenObjectByPointer(a2, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &v11);
      AccessState = v7;
      if ( v7 >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)Object + 435, 0x200000u);
        *((_QWORD *)Object + 262) = *((_QWORD *)a2 + 262);
        if ( (*((_DWORD *)Object + 520) | a2[520]) < 0 )
        {
          v9 = _InterlockedIncrement64(&PsNextSecurityDomain);
          AccessState = -1073740699;
          *((_QWORD *)Object + 262) = v9;
          *((_QWORD *)Object + 263) = v9;
        }
        KeSynchronizeSecurityDomain((_KPROCESS *)Object);
        goto LABEL_13;
      }
      v11 = 0LL;
    }
    else
    {
      Handle = 0LL;
    }
    if ( v7 == -1073741790 )
      AccessState = -1073740699;
LABEL_13:
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_14:
  if ( v11 )
    ObCloseHandle(v11, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)AccessState;
}
