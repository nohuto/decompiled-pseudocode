/*
 * XREFs of PdcPortSendMessage @ 0x18039E620
 * Callers:
 *     PdcpNotificationClientCallback @ 0x18039E0B0 (PdcpNotificationClientCallback.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
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
