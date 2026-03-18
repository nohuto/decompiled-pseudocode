/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0023880
 * Callers:
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareUnlockRemoveObject @ 0x1C007E680 (HmgShareUnlockRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00AA958 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023928 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0109608 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackHmgrReferenceDecrement(char a1, struct OBJECT *a2)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v2; // rdx

  if ( a1 == 5 )
  {
    v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a2 + 85);
    if ( v2 && qword_1C01C8828 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C01C8828, v2, 0);
  }
  else if ( a1 == 16 )
  {
    TrackObjectReferenceDecrement(2LL, *((_QWORD *)a2 + 17));
  }
}
