/*
 * XREFs of MiPteNeedsCommitCharge @ 0x14010B164
 * Callers:
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 */

_BOOL8 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  if ( (v2 & 7) == 2 && (v2 & 0xF8) != 8 )
  {
    MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 4, &v5);
    if ( v5 )
      return (*(_BYTE *)(v5 + 32) & 0xA) != 0xA;
  }
  return (*(_BYTE *)(a1 + 48) & 0x28) != 0x28;
}
