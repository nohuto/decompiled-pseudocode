/*
 * XREFs of NtRemoveProcessDebug @ 0x140849930
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14067222C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkClearProcessDebugObject @ 0x140728374 (DbgkClearProcessDebugObject.c)
 *     PsRequestDebugSecureProcess @ 0x1408CB3B4 (PsRequestDebugSecureProcess.c)
 */

NTSTATUS __stdcall NtRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v5; // rcx
  _BYTE *v6; // rdi
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v9; // [rsp+78h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandleWithTag(
             Process,
             0x800u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &v9,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v5) = PreviousMode;
    v6 = v9;
    if ( PsTestProtectedProcessIncompatibility(v5, (__int64)KeGetCurrentThread()->ApcState.Process, (__int64)v9) )
    {
      v7 = -1073740014;
    }
    else if ( (v6[728] & 1) == 0 || (v7 = PsRequestDebugSecureProcess(v6, 0LL), v7 >= 0) )
    {
      v7 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
      if ( v7 >= 0 )
      {
        v7 = DbgkClearProcessDebugObject((ULONG_PTR)v6, (__int64)Object);
        ObfDereferenceObject(Object);
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v7;
  }
  return result;
}
