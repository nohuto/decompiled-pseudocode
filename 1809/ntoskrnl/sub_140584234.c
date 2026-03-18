/*
 * XREFs of sub_140584234 @ 0x140584234
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140583C40 (WbAddWarbirdEncryptionSegment.c)
 *     sub_140583D70 @ 0x140583D70 (sub_140583D70.c)
 *     WbDecryptEncryptionSegment @ 0x140583E04 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x140583EC8 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140583F8C (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14058410C (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406B0AC8 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x140584AE0 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_140584234(volatile signed __int64 *a1)
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
