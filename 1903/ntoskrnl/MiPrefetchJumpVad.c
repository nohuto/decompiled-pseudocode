/*
 * XREFs of MiPrefetchJumpVad @ 0x1402C701C
 * Callers:
 *     MiZeroFault @ 0x1400C99E0 (MiZeroFault.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x140072F8C (MiIsVadLargePrivate.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUpdatePrefetchPriority @ 0x14010A9B0 (MiUpdatePrefetchPriority.c)
 *     MiLeapPrefetch @ 0x1402C6928 (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  int v7; // edx
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 result; // rax

  v3 = *(unsigned __int8 *)(a2 + 33);
  v5 = *(unsigned int *)(a2 + 28);
  v7 = *(_DWORD *)(a2 + 48);
  v9 = ((v5 | (v3 << 32)) << 12) + 4096;
  if ( (v7 & 4) == 0 )
  {
    v10 = v7 & 0x70;
    if ( v10 != 16 )
    {
      if ( (v7 & 0x100000) != 0 )
      {
        if ( v10 != 48 && !MiIsVadLargePrivate(a2) )
        {
          v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v13 > (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
            v13 = ((((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
          while ( v12 < v13 )
          {
            v14 = MI_READ_PTE_LOCK_FREE(v12);
            v12 += 8LL;
            if ( v14 )
            {
              if ( (v14 & 1) != 0 )
                goto LABEL_15;
              if ( (v14 & 0x400) != 0 )
                break;
              if ( (v14 & 0x800) != 0 )
              {
LABEL_15:
                MiUpdatePrefetchPriority(a1, a3);
              }
              else if ( IS_PTE_NOT_DEMAND_ZERO(v14) )
              {
                break;
              }
            }
            a3 += 4096LL;
          }
          v9 = (__int64)(v12 << 25) >> 16;
        }
      }
      else
      {
        result = *(unsigned int *)(a2 + 64);
        if ( (result & 0x1000000) == 0 )
          return result;
      }
    }
  }
  result = MiLeapPrefetch((_QWORD *)a1, v9);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
