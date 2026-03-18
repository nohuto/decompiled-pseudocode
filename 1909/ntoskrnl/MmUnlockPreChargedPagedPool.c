/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x14072BA30
 * Callers:
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x1400B9BA0 (MiUnlockCodePage.c)
 */

void __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  MiUnlockCodePage(PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1));
}
