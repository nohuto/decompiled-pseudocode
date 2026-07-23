/*
 * XREFs of FsRtlFindInTunnelCacheEx @ 0x140582D00
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x1405C0E70 (FsRtlFindInTunnelCache.c)
 * Callees:
 *     FsRtlCompareNodeAndKey @ 0x140014750 (FsRtlCompareNodeAndKey.c)
 *     FsRtlEmptyFreePoolList @ 0x1400147C8 (FsRtlEmptyFreePoolList.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     FsRtlPruneTunnelCache @ 0x1405C107C (FsRtlPruneTunnelCache.c)
 */

char __fastcall FsRtlFindInTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PUNICODE_STRING DestinationString,
        char a6,
        _DWORD *a7,
        void *a8)
{
  PKGUARDED_MUTEX v10; // r14
  char v11; // bl
  __int64 v12; // rsi
  __int64 v14; // rdi
  LONG v15; // eax
  unsigned __int16 *v16; // rdi
  unsigned __int16 v17; // ax
  wchar_t *PoolWithTag; // rcx
  unsigned __int16 v19; // ax
  _QWORD *v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v10 = Mutex;
  v11 = 0;
  v12 = 0LL;
  if ( !TunnelMaxEntries )
    return 0;
  v20[1] = v20;
  v20[0] = v20;
  ExAcquireFastMutex(Mutex);
  FsRtlPruneTunnelCache(v10, v20);
  v14 = *(_QWORD *)&v10[1].Count;
  if ( v14 )
  {
    do
    {
      v12 = v14;
      v15 = FsRtlCompareNodeAndKey(v14, a2, a3, a6 & 1);
      if ( v15 <= 0 )
      {
        if ( v15 >= 0 )
          break;
        v14 = *(_QWORD *)(v14 + 16);
      }
      else
      {
        v14 = *(_QWORD *)(v14 + 8);
      }
    }
    while ( v14 );
    v10 = Mutex;
  }
  if ( v14 )
  {
    RtlCopyUnicodeString(a4, (PCUNICODE_STRING)(v12 + 80));
    v16 = (unsigned __int16 *)(v12 + 64);
    v17 = *(_WORD *)(v12 + 64);
    if ( DestinationString->MaximumLength < v17 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)17, v17, 0x346E7554u);
      DestinationString->Buffer = PoolWithTag;
      v19 = *v16;
      DestinationString->MaximumLength = *v16;
      DestinationString->Length = v19;
      memmove(PoolWithTag, *(const void **)(v12 + 72), *v16);
    }
    else
    {
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(v12 + 64));
    }
    memmove(a8, *(const void **)(v12 + 96), *(unsigned int *)(v12 + 104));
    *a7 = *(_DWORD *)(v12 + 104);
    v11 = 1;
  }
  KeReleaseGuardedMutex(v10);
  FsRtlEmptyFreePoolList(v20);
  return v11;
}
