/*
 * XREFs of ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0081AAC
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0020440 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0081998 (HmgShareLockIgnoreStockBit.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022730 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceIncrement(char a1, struct OBJECT *a2)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v2; // rdx
  unsigned int v3; // ecx

  if ( a1 == 5 )
  {
    v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a2 + 85);
    v3 = 0;
LABEL_5:
    TrackObjectReferenceIncrement(v3, v2);
    return;
  }
  if ( a1 == 16 )
  {
    v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a2 + 17);
    v3 = 2;
    goto LABEL_5;
  }
}
