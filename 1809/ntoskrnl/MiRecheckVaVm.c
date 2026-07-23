/*
 * XREFs of MiRecheckVaVm @ 0x140085560
 * Callers:
 *     MiCrcStillIntact @ 0x140082C44 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRecheckVaVm(__int64 a1, unsigned __int64 a2)
{
  __int16 v2; // ax
  unsigned int v3; // r9d

  v2 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( ((unsigned __int8)v2 & (unsigned __int8)v3) == 0 && (v2 & 0xC00) != 0x800LL )
    return 0;
  return v3;
}
