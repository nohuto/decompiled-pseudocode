/*
 * XREFs of FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400B8670
 * Callers:
 *     FsRtlCheckOplock @ 0x1400B7B10 (FsRtlCheckOplock.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     IoGetOplockKeyContextEx @ 0x140019C10 (IoGetOplockKeyContextEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1405DDDA0 (FsRtlpAllocateOplock.c)
 */

void __fastcall FsRtlpOplockStoreKeyForDeleteOperation(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r9
  __int64 Oplock; // rsi
  char v7; // bl
  int v8; // eax
  __int64 OplockKeyContext; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  _OWORD *PoolWithTag; // rax

  v5 = *(_QWORD *)(a2 + 184);
  Oplock = *a1;
  v7 = 0;
  if ( !*(_BYTE *)v5 && (*(_DWORD *)(v5 + 16) & 0x1000) != 0
    || *(_BYTE *)v5 == 6 && ((v8 = *(_DWORD *)(v5 + 16), v8 == 13) || v8 == 64) && **(_BYTE **)(a2 + 24) )
  {
    OplockKeyContext = IoGetOplockKeyContextEx(*(_QWORD *)(v5 + 48));
    v12 = OplockKeyContext;
    if ( OplockKeyContext )
    {
      if ( (*(_BYTE *)(OplockKeyContext + 2) & 1) != 0 )
      {
        if ( !Oplock )
        {
          Oplock = FsRtlpAllocateOplock(v11, v10);
          *a1 = Oplock;
        }
        if ( (a3 & 0x20000000) == 0 )
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
        v7 = 1;
        PoolWithTag = *(_OWORD **)(Oplock + 136);
        if ( !PoolWithTag )
        {
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x10uLL, 0x6F725346u);
          *(_QWORD *)(Oplock + 136) = PoolWithTag;
        }
        *PoolWithTag = *(_OWORD *)(v12 + 4);
      }
    }
  }
  if ( v7 )
  {
    if ( (a3 & 0x20000000) == 0 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  }
}
