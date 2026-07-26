/*
 * XREFs of EthQueryOpenFilterAddresses @ 0x1C006743C
 * Callers:
 *     ndisQueryOpenEthMulticastList @ 0x1C00E4C6C (ndisQueryOpenEthMulticastList.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005E40 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

void __fastcall EthQueryOpenFilterAddresses(
        int *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6)
{
  unsigned int v10; // r9d
  char *v11; // rsi
  int v12; // ebx
  unsigned int i; // edi
  unsigned int *v14; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+58h] [rbp+20h] BYREF

  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(a2 + 288), &LockState, 0);
  v10 = *(_DWORD *)(a3 + 456);
  if ( a4 < 6 * v10 )
  {
    v10 = 0;
    v12 = -1073741823;
  }
  else
  {
    v11 = a6;
    v12 = 0;
    for ( i = 0; i < v10; ++i )
    {
      memmove(v11, (const void *)(*(_QWORD *)(a3 + 448) + 4 * (3LL * i + 1)), 6uLL);
      v10 = *(_DWORD *)(a3 + 456);
      v11 += 6;
    }
  }
  v14 = a5;
  *a1 = v12;
  *v14 = v10;
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(a2 + 288), &LockState);
}
