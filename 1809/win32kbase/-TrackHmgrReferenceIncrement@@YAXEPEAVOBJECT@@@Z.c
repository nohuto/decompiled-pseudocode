/*
 * XREFs of ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00238D0
 * Callers:
 *     HmgIncrementShareReferenceCount @ 0x1C0021480 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0081F54 (HmgShareLockIgnoreStockBit.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023910 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceIncrement(char a1, struct OBJECT *a2)
{
  if ( a1 == 5 )
  {
    TrackObjectReferenceIncrement(0LL, *((_QWORD *)a2 + 85));
  }
  else if ( a1 == 16 )
  {
    TrackObjectReferenceIncrement(2LL, *((_QWORD *)a2 + 17));
  }
}
