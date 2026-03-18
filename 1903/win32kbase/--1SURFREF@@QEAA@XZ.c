/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C0017D40
 * Callers:
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     bMigrateSurfaceForConversion @ 0x1C0058D60 (bMigrateSurfaceForConversion.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF2DC (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall SURFREF::~SURFREF(struct OBJECT **this)
{
  struct OBJECT *v1; // rcx

  v1 = *this;
  if ( v1 )
    HmgDecrementShareReferenceCountEx(v1);
}
