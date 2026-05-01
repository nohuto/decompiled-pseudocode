/*
 * XREFs of _RmpClientConnectionInitialize@4 @ 0x1001184F
 * Callers:
 *     _RmpClientConnectToResourceManager@8 @ 0x10011719 (_RmpClientConnectToResourceManager@8.c)
 * Callees:
 *     _HamIpcChannelInitialize@16 @ 0x1000C1C3 (_HamIpcChannelInitialize@16.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __thiscall RmpClientConnectionInitialize(char *this)
{
  char *v2; // esi
  char **v3; // eax

  *(_DWORD *)this = 0;
  v2 = this + 12;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  memset(this + 12, 0, 0x2Cu);
  HamIpcChannelInitialize(
    (int)RmpClientSubscriptionDeliverPayload,
    (int)RmpClientCallbackCompareToCallback,
    (int)RmpClientCallbackCompareToPayload,
    v2);
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v3 = (char **)dword_10018404;
  if ( *(int **)dword_10018404 != &RmpClientConnectionListHead )
    __fastfail(3u);
  *(_DWORD *)this = &RmpClientConnectionListHead;
  *((_DWORD *)this + 1) = v3;
  *v3 = this;
  dword_10018404 = (int)this;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
