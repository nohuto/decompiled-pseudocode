/*
 * XREFs of ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00AA328
 * Callers:
 *     bDeletePalette @ 0x1C00713D0 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC938 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 */

void __fastcall XEPALOBJ2::~XEPALOBJ2(struct OBJECT **this)
{
  struct OBJECT *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 1);
}
