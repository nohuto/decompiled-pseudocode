/*
 * XREFs of ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C01309D8
 * Callers:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0012D70 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00684F0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAXPEAUSCircularBuffer@123@@Z @ 0x1C0131118 (-ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAX.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C0131C14 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall ReleaseReferenceCountedObjectHandle(unsigned int a1, void *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v3; // rbx
  NSInstrumentation::CPointerHashTable *v4; // rcx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(&qword_1C020D538 + 2 * a1);
  if ( v3 )
  {
    v4 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)v3 + 3);
    v5 = 0LL;
    NSInstrumentation::CPointerHashTable::Remove(v4, a2, &v5);
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReleaseToMostRecentlyFreedList(
      v3,
      v5,
      (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)a2);
  }
}
