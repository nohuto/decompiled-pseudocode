/*
 * XREFs of MiAddPageToHeatRanges @ 0x1402CECC0
 * Callers:
 *     MmSetPfnListInfo @ 0x14013FD90 (MmSetPfnListInfo.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402C3F8C (MiMakeUnusedImageExtentsCold.c)
 *     MiAddColdPagesToHotRanges @ 0x1402CEC3C (MiAddColdPagesToHotRanges.c)
 *     MiMakeTransitionHeatBatch @ 0x1402CEE04 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAddPageToHeatRanges(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r10d
  __int64 *v5; // rcx
  unsigned __int64 v6; // r11
  __int64 v7; // r8

  v2 = *(unsigned int *)(a1 + 4);
  v3 = 0;
  if ( (_DWORD)v2 )
    v5 = (__int64 *)(a1 + 8 * ((unsigned int)(v2 - 1) + 2LL));
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = *v5;
    if ( (*v5 & 0xC00) == 0 && (*v5 & 0x3FF) != 0x3FF )
    {
      v7 = (*v5 & 0x3FF) + 1;
      if ( a2 == (v6 >> 12) + v7 )
      {
        *v5 = v6 ^ (v7 ^ v6) & 0x3FF;
        return 0LL;
      }
      if ( a2 == (v6 >> 12) - 1 )
      {
        *v5 = v7 & 0x3FF | (a2 << 12);
        return 0LL;
      }
    }
  }
  *(_QWORD *)(a1 + 8 * v2 + 16) = a2 << 12;
  LOBYTE(v3) = ++*(_DWORD *)(a1 + 4) == *(_DWORD *)(a1 + 8);
  return v3;
}
