/*
 * XREFs of PsAssignImpersonationToken @ 0x1405DEA00
 * Callers:
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall PsAssignImpersonationToken(PETHREAD Thread, HANDLE Token)
{
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  PVOID v6; // rsi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !Token )
  {
    PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
    return 0;
  }
  result = ObReferenceObjectByHandle(
             Token,
             4u,
             (POBJECT_TYPE)SeTokenObjectType,
             CurrentThread->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v6 = Object;
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      ObfDereferenceObject(Object);
      return -1073741656;
    }
    v4 = PsImpersonateClient(Thread, Object, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Object + 49));
    ObfDereferenceObject(v6);
    return v4;
  }
  return result;
}
