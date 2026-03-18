/*
 * XREFs of KiOpFetchNextByte @ 0x1400A37A8
 * Callers:
 *     KiOpDecode @ 0x1400A3648 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x1400A3870 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x140193290 (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x14029C4A0 (KiOpFetchBytes.c)
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
