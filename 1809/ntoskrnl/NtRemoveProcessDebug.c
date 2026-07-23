/*
 * XREFs of NtRemoveProcessDebug @ 0x140811230
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14060A21C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkClearProcessDebugObject @ 0x1406E2614 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __stdcall NtRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  char PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  NTSTATUS v7; // ebx
  __int64 v8; // rax
  PVOID Object; // [rsp+40h] [rbp-A8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v10; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v11[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v12; // [rsp+58h] [rbp-90h]
  __int64 v13; // [rsp+60h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Process,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &v10,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v5) = PreviousMode;
    v6 = (_QWORD *)v10;
    if ( PsTestProtectedProcessIncompatibility(v5, (__int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)&v10) )
    {
      v7 = -1073740014;
    }
    else
    {
      v8 = v6[90];
      if ( (v8 & 1) == 0 || (v13 = 0LL, v12 = v8, v7 = VslpEnterIumSecureMode(2u, 12LL, 0, (__int64)v11), v7 >= 0) )
      {
        v7 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject((ULONG_PTR)v6, (__int64)Object);
          ObfDereferenceObject(Object);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v7;
  }
  return result;
}
