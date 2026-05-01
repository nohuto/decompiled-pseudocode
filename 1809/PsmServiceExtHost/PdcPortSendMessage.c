/*
 * XREFs of PdcPortSendMessage @ 0x180071E9C
 * Callers:
 *     PdcNotificationClientAcknowledge @ 0x1800719F4 (PdcNotificationClientAcknowledge.c)
 *     PdcpNotificationClientCallback @ 0x180071BB0 (PdcpNotificationClientCallback.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall PdcPortSendMessage(RTL_SRWLOCK *a1, _DWORD *a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // ebx

  v2 = a1 + 2;
  AcquireSRWLockShared(a1 + 2);
  if ( a1[1].Ptr )
  {
    a2[11] = 4;
    memset_0(a2, 0, 0x28uLL);
    *a2 = 52429560;
    v5 = ZwAlpcSendWaitReceivePort(a1[1].Ptr, 0x10000LL, a2, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v5 = -1073741816;
  }
  ReleaseSRWLockShared(v2);
  return v5;
}
