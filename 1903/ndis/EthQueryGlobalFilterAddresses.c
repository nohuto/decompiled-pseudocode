/*
 * XREFs of EthQueryGlobalFilterAddresses @ 0x1C00A1FD0
 * Callers:
 *     ndisQueryMiniportEthMulticastList @ 0x1C006F270 (ndisQueryMiniportEthMulticastList.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

void __fastcall EthQueryGlobalFilterAddresses(_DWORD *a1, __int64 a2, unsigned int a3, _DWORD *a4, void *a5)
{
  int v9; // ecx
  const void *v10; // rdx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+18h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(a2 + 288), &LockState, 0);
  v9 = *(_DWORD *)(a2 + 384);
  if ( a3 >= 6 * v9 )
  {
    *a1 = 0;
    v10 = *(const void **)(a2 + 376);
    *a4 = v9;
    memmove(a5, v10, (unsigned int)(6 * v9));
  }
  else
  {
    *a4 = 0;
    *a1 = -1073741823;
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(a2 + 288), &LockState);
}
