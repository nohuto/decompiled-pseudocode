/*
 * XREFs of MmReadProcessPageTables @ 0x1402BBA8C
 * Callers:
 *     KiMonitorCacheErrata @ 0x14029A680 (KiMonitorCacheErrata.c)
 * Callees:
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFlushSingleCurrentTb @ 0x140156FD8 (KeFlushSingleCurrentTb.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14031C210 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MmReadProcessPageTables(__int64 a1)
{
  unsigned __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned int v5; // r14d
  unsigned __int64 v6; // r15
  volatile __int64 *v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx

  ValidPte = MiMakeValidPte(0LL, 0LL, -1610612732);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = ValidPte;
  __wbinvd();
  result = ExTryAcquireSpinLockSharedAtDpcLevel(&dword_14043DAC0);
  v5 = 0;
  if ( (_DWORD)result )
  {
    v6 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v7 = (volatile __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = _InterlockedExchange64(v7, ZeroPte);
    KeFlushSingleCurrentTb(v6, 0);
    v9 = MmPhysicalMemoryBlock;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      while ( 1 )
      {
        v10 = v9[2 * v5 + 2];
        v11 = 48 * v10 - 0x58000000000LL;
        v12 = 48 * (v10 + v9[2 * v5 + 3]) - 0x58000000000LL;
        if ( v11 < v12 )
          break;
LABEL_16:
        v9 = MmPhysicalMemoryBlock;
        if ( ++v5 >= *(_DWORD *)MmPhysicalMemoryBlock )
          goto LABEL_17;
      }
      while ( 1 )
      {
        if ( (*(_BYTE *)(v11 + 34) & 7) == 6 )
        {
          v13 = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
          if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v14 = (__int64)(v13 << 25) >> 16;
            if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              v15 = *(_QWORD *)(v11 + 40);
              if ( ((v15 >> 54) & 7) != 1
                && (v15 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
                && (*(_BYTE *)(v11 + 34) & 0xC0) == 0x40 )
              {
                v3 ^= (v3 ^ (((__int64)(v11 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
                _InterlockedExchange64(v7, v3);
                KeFlushSingleCurrentTb(v6, 0);
                v16 = v6;
                v17 = 64LL;
                do
                {
                  v16 += 64LL;
                  --v17;
                }
                while ( v17 );
                v18 = KiCacheErrataMonitor;
                v19 = CurrentPrcb->Number + 16LL;
                CurrentPrcb->ClockKeepAlive = 1;
                _InterlockedExchange64((volatile __int64 *)(v18 + 16 * v19), -1LL);
                if ( (*(_QWORD *)(v18 + 16 * (*(unsigned int *)(a1 + 36) + 16LL)) & CurrentPrcb->GroupSetMember) != 0 )
                  break;
              }
            }
          }
        }
        v11 += 48LL;
        if ( v11 >= v12 )
          goto LABEL_16;
      }
    }
LABEL_17:
    _InterlockedExchange64(v7, v8);
    KeFlushSingleCurrentTb(v6, 0);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14043DAC0);
    return 1LL;
  }
  return result;
}
