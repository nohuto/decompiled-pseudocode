/*
 * XREFs of ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C01091C4
 * Callers:
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C001D634 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0060C7C (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 * Callees:
 *     ?ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAXPEAUSCircularBuffer@123@@Z @ 0x1C0109904 (-ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAX.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C010A400 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall ReleaseReferenceCountedObjectHandle(unsigned int a1, void *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v3; // rbx
  NSInstrumentation::CPointerHashTable *v4; // rcx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(&qword_1C01C8828 + 2 * a1);
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
