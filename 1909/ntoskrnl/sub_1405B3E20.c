/*
 * XREFs of sub_1405B3E20 @ 0x1405B3E20
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405B3808 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405B3934 @ 0x1405B3934 (sub_1405B3934.c)
 *     WbDecryptEncryptionSegment @ 0x1405B39C8 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405B3A98 (WbReEncryptEncryptionSegment.c)
 *     sub_1405B3B68 @ 0x1405B3B68 (sub_1405B3B68.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B3CE8 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D5414 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x1405B46C4 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_1405B3E20(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      WbFreeWarbirdEncryptionSegment((PVOID)a1);
  }
  return v1;
}
