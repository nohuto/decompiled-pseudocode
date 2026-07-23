/*
 * XREFs of SepAddTokenLogonSession @ 0x1408A39A0
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     SepSetServerSiloToken @ 0x14089D240 (SepSetServerSiloToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepAddTokenLogonSession(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edx
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *v6; // rbx
  __int64 *PoolWithTag; // rax
  __int64 *v8; // rbx
  __int64 **v9; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 24) & 0xF;
  --CurrentThread->KernelApcDisable;
  v4 = v3;
  v5 = &SepRmDbLock + (v3 & 3);
  ExAcquireResourceExclusiveLite(v5, 1u);
  v6 = *(__int64 **)(SepLogonSessions + 8 * v4);
  if ( v6 )
  {
    while ( *(_DWORD *)(a1 + 24) != *((_DWORD *)v6 + 2)
         || *(_DWORD *)(a1 + 28) != *((_DWORD *)v6 + 3)
         || *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL) != v6[20] )
    {
      v6 = (__int64 *)*v6;
      if ( !v6 )
        goto LABEL_11;
    }
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x734C6553u);
    if ( PoolWithTag )
    {
      v8 = v6 + 22;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = a1;
      v9 = (__int64 **)v8[1];
      if ( *v9 != v8 )
        __fastfail(3u);
      *PoolWithTag = (__int64)v8;
      PoolWithTag[1] = (__int64)v9;
      *v9 = PoolWithTag;
      v8[1] = (__int64)PoolWithTag;
    }
  }
LABEL_11:
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
}
