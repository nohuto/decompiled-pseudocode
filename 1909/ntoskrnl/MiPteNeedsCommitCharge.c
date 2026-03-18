/*
 * XREFs of MiPteNeedsCommitCharge @ 0x14010632C
 * Callers:
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiCountSharedPages @ 0x140105ED0 (MiCountSharedPages.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 */

_BOOL8 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  int v2; // r8d
  bool v4; // zf
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  if ( (v2 & 0x70) == 0x20
    && (v2 & 0xF80) != 0x80
    && (MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 4, &v6), v6) )
  {
    v4 = (*(_BYTE *)(v6 + 32) & 0xA) == 10;
  }
  else
  {
    v4 = (*(_DWORD *)(a1 + 48) & 0x280) == 640;
  }
  return !v4;
}
