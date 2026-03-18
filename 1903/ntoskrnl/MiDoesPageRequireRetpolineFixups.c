/*
 * XREFs of MiDoesPageRequireRetpolineFixups @ 0x14065CD58
 * Callers:
 *     MiPageHasRelocations @ 0x14065CBF4 (MiPageHasRelocations.c)
 *     MiInitializePrivateFixupBitmap @ 0x14065CC50 (MiInitializePrivateFixupBitmap.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesPageRequireRetpolineFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 24);
  return v2 && *(_QWORD *)(v2 + 8LL * a2 + 56);
}
