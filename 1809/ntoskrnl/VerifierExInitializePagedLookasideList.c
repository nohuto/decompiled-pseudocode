/*
 * XREFs of VerifierExInitializePagedLookasideList @ 0x14093FE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140935AD4 (VfTargetDriversIsEnabled.c)
 *     ViLookasideTrackList @ 0x140940204 (ViLookasideTrackList.c)
 */

__int64 __fastcall VerifierExInitializePagedLookasideList(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        ULONG_PTR BugCheckParameter3,
        int a6,
        __int16 a7)
{
  unsigned int v11; // ebx
  int IsEnabled; // ebp
  __int16 v13; // cx
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]

  v11 = 0;
  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  if ( IsEnabled )
  {
    if ( BugCheckParameter3 < 8 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, BugCheckParameter2, BugCheckParameter3, 8LL);
    VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter2, 0x80uLL);
    v13 = 0;
  }
  else
  {
    v13 = a7;
  }
  pXdvExInitializePagedLookasideList(
    BugCheckParameter2,
    a2,
    a3,
    a4,
    BugCheckParameter3,
    a6,
    v13,
    IsEnabled,
    (__int64)ExInitializePagedLookasideListInternal);
  if ( IsEnabled || KernelVerifier )
    v11 = 1;
  return ViLookasideTrackList(BugCheckParameter2, v11);
}
