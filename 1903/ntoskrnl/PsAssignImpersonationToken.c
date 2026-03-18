/*
 * XREFs of PsAssignImpersonationToken @ 0x1405DE260
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsImpersonateClient @ 0x1405DE340 (PsImpersonateClient.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
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
