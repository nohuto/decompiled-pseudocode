/*
 * XREFs of MiSelectBitMapForImage @ 0x140650C58
 * Callers:
 *     MiSelectCfgBitMap @ 0x1405F582C (MiSelectCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x140650904 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1406509BC (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSelectBitMapForImage(__int64 a1)
{
  __int64 v1; // rdx

  if ( (*(_BYTE *)(a1 + 14) & 0x40) != 0 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v1 + 51) & 0x10) != 0 && (*(_WORD *)(v1 + 44) & 0x2000) != 0 )
    return 3LL;
  else
    return 2 - (unsigned int)(*(_QWORD *)(a1 + 32) < 0x100000000uLL);
}
