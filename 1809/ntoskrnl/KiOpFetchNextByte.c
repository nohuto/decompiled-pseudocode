/*
 * XREFs of KiOpFetchNextByte @ 0x1400A36E8
 * Callers:
 *     KiOpDecode @ 0x1400A3588 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x1400A37B0 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x1401933F0 (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x14029C790 (KiOpFetchBytes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpFetchNextByte(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(a1 + 16);
  if ( v2 == *(_BYTE **)(a1 + 8) )
    return 3221225473LL;
  *a2 = *v2;
  ++*(_QWORD *)(a1 + 16);
  return 0LL;
}
