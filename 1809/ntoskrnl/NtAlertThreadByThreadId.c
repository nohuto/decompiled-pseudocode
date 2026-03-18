/*
 * XREFs of NtAlertThreadByThreadId @ 0x140649FC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeAlertThreadByThreadId @ 0x1400CCD8C (KeAlertThreadByThreadId.c)
 *     PsLookupThreadByThreadId @ 0x1406487C0 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall NtAlertThreadByThreadId(void *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // edi
  _KPROCESS *Process; // rax
  PETHREAD v7; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = PsLookupThreadByThreadId(a1, &Thread);
  v5 = 0;
  if ( result >= 0 )
  {
    Process = CurrentThread->Process;
    v7 = Thread;
    if ( Thread->Process == Process )
      KeAlertThreadByThreadId((__int64)Thread, v3, v4);
    else
      v5 = -1073741790;
    ObfDereferenceObject(v7);
    return v5;
  }
  return result;
}
