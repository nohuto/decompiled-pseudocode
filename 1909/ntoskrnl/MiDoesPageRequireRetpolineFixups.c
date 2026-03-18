/*
 * XREFs of MiDoesPageRequireRetpolineFixups @ 0x140642248
 * Callers:
 *     MiPageHasRelocations @ 0x1406420F0 (MiPageHasRelocations.c)
 *     MiInitializePrivateFixupBitmap @ 0x140642140 (MiInitializePrivateFixupBitmap.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesPageRequireRetpolineFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 24);
  return v2 && *(_QWORD *)(v2 + 8LL * a2 + 56);
}
