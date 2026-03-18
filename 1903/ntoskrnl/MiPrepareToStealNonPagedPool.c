/*
 * XREFs of MiPrepareToStealNonPagedPool @ 0x14013BFF4
 * Callers:
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
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
