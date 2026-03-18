/*
 * XREFs of KiOpFetchNextByte @ 0x140015FE4
 * Callers:
 *     KiOpDecode @ 0x140015E84 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x1400160AC (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x14019E0E4 (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x1402B3608 (KiOpFetchBytes.c)
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
