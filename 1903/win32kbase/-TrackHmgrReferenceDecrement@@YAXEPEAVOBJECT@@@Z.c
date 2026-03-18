/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020070
 * Callers:
 *     GreSetBitmapOwner @ 0x1C0016160 (GreSetBitmapOwner.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00170E0 (--1SURFMEM@@QEAA@XZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001CBC0 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C007AB1C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00919C0 (HmgShareUnlockRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BE02C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022748 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C013348C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackHmgrReferenceDecrement(char a1, struct OBJECT *a2)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v2; // rdx

  if ( a1 == 5 )
  {
    v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a2 + 85);
    if ( v2 )
    {
      if ( qword_1C0210538 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C0210538, v2, 0);
    }
  }
  else if ( a1 == 16 )
  {
    TrackObjectReferenceDecrement(2LL, *((_QWORD *)a2 + 17));
  }
}
