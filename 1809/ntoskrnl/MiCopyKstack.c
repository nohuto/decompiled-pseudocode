/*
 * XREFs of MiCopyKstack @ 0x14015EBE0
 * Callers:
 *     MiSwapStackPage @ 0x14012D160 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x14015E8F0 (MiJumpStackTarget.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewPage @ 0x1400EEB0C (MiWriteValidPteNewPage.c)
 *     KeCopyPage @ 0x1401C09B0 (KeCopyPage.c)
 */

__int64 __fastcall MiCopyKstack(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax
  char v7; // cl
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  KeCopyPage(a3 << 25 >> 16, (__int64)(v3 << 25) >> 16);
  v6 = MI_READ_PTE_LOCK_FREE(v3);
  MiWriteValidPteNewPage(
    (__int64 *)v3,
    v6 & 0xFFFF000000000FFFuLL | ((((a1 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12),
    0);
  v7 = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  result = (__int64)(v3 << 25) >> 16;
  *(_BYTE *)(a2 + 34) = v7;
  return result;
}
