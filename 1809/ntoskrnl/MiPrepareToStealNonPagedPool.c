/*
 * XREFs of MiPrepareToStealNonPagedPool @ 0x14016B7BC
 * Callers:
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 */

unsigned __int64 __fastcall MiPrepareToStealNonPagedPool(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  volatile signed __int64 *v3; // r9
  unsigned __int64 v4; // rbx

  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    return 0LL;
  v2 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v2 & 0x220) != 0x20 )
    return 0LL;
  v4 = v2 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( v2 != _InterlockedCompareExchange64(v3, v2 & 0xFFFFFFFFFFFFFFDFuLL, v2) )
    return 0LL;
  KeFlushSingleTb((__int64)((_QWORD)v3 << 25) >> 16, 0, 2u);
  return v4;
}
