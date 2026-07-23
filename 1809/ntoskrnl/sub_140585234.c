/*
 * XREFs of sub_140585234 @ 0x140585234
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140584C40 (WbAddWarbirdEncryptionSegment.c)
 *     sub_140584D70 @ 0x140584D70 (sub_140584D70.c)
 *     WbDecryptEncryptionSegment @ 0x140584E04 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x140584EC8 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140584F8C (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14058510C (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406B1D48 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x140585AE0 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_140585234(volatile signed __int64 *a1)
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
