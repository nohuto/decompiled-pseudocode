/*
 * XREFs of sub_1405B3A44 @ 0x1405B3A44
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405B342C (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405B3558 @ 0x1405B3558 (sub_1405B3558.c)
 *     WbDecryptEncryptionSegment @ 0x1405B35EC (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405B36BC (WbReEncryptEncryptionSegment.c)
 *     sub_1405B378C @ 0x1405B378C (sub_1405B378C.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B390C (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D5BE0 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x1405B42E8 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_1405B3A44(volatile signed __int64 *a1)
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
