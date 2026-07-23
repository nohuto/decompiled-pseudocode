/*
 * XREFs of VerifierExInitializeLookasideListEx @ 0x14093FC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfCheckPoolType @ 0x1409285EC (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140935AD4 (VfTargetDriversIsEnabled.c)
 *     ViLookasideAdd @ 0x14094000C (ViLookasideAdd.c)
 */

__int64 __fastcall VerifierExInitializeLookasideListEx(
        _QWORD *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        ULONG_PTR BugCheckParameter3,
        int a7,
        __int16 a8)
{
  int IsEnabled; // edi
  int v13; // esi
  unsigned __int64 retaddr; // [rsp+78h] [rbp+0h]

  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  if ( IsEnabled )
  {
    VfCheckPoolType(a4, retaddr, a7);
    if ( BugCheckParameter3 < 8 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, 8LL);
    VfUtilSynchronizationObjectSanityChecks(BugCheckParameter2, 0x60uLL);
  }
  v13 = pXdvExInitializeLookasideListEx(
          (int)BugCheckParameter2,
          a2,
          a3,
          a4,
          a5,
          BugCheckParameter3,
          a7,
          a8,
          IsEnabled,
          (__int64)ExInitializeLookasideListExInternal);
  if ( v13 >= 0 )
  {
    if ( (IsEnabled || KernelVerifier)
      && (PVOID (__fastcall *)(POOL_TYPE, SIZE_T, ULONG))BugCheckParameter2[6] == CmpAllocateTransientPoolWithTag
      && (void (__stdcall *)(PPRIVILEGE_SET))BugCheckParameter2[7] == CmSiFreeMemory )
    {
      BugCheckParameter2[6] = VerifierExAllocatePoolEx;
      BugCheckParameter2[7] = VerifierExFreePoolEx;
    }
    ViLookasideAdd((ULONG_PTR)BugCheckParameter2);
  }
  return (unsigned int)v13;
}
