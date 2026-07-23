/*
 * XREFs of MiPrefetchJumpVad @ 0x1402AF3B4
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUpdatePrefetchPriority @ 0x1400B7100 (MiUpdatePrefetchPriority.c)
 *     MiLeapPrefetch @ 0x1402AECD8 (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  int v7; // edx
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 result; // rax

  v3 = *(unsigned __int8 *)(a2 + 33);
  v5 = *(unsigned int *)(a2 + 28);
  v6 = a3;
  v7 = *(_DWORD *)(a2 + 48);
  v9 = ((v5 | (v3 << 32)) << 12) + 4096;
  if ( (v7 & 0x20000000) == 0 )
  {
    v10 = v7 & 7;
    if ( v10 != 1 )
    {
      if ( (v7 & 0x4000) != 0 )
      {
        if ( ((v10 - 3) & 0xFFFFFFFD) != 0 )
        {
          v11 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v12 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v12 > (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
            v12 = ((((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
          while ( v11 < v12 )
          {
            v13 = MI_READ_PTE_LOCK_FREE(v11);
            v11 += 8LL;
            if ( v13 )
            {
              if ( (v13 & 1) != 0 )
                goto LABEL_14;
              if ( (v13 & 0x400) != 0 )
                break;
              if ( (v13 & 0x800) != 0 )
              {
LABEL_14:
                MiUpdatePrefetchPriority(a1, v6, a2);
              }
              else if ( IS_PTE_NOT_DEMAND_ZERO(v13) )
              {
                break;
              }
            }
            v6 += 4096LL;
          }
          v9 = (__int64)(v11 << 25) >> 16;
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
