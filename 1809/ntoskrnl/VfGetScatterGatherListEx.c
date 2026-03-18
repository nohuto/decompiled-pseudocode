/*
 * XREFs of VfGetScatterGatherListEx @ 0x14092B6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409293B8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140929614 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140929720 (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckMdlLength @ 0x14092CDBC (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x14092D868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092DB34 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfGetScatterGatherListEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 AdapterInformationInternal; // rdi
  unsigned int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, ULONG_PTR, __int64, unsigned int, int, __int64, __int64, char, __int64, __int64, __int64); // [rsp+70h] [rbp-38h]

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, __int64, unsigned int, int, __int64, __int64, char, __int64, __int64, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 164));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 168));
    VERIFY_BUFFER_LOCKED(a4);
    v18 = ViCheckMdlLength(a4, a5, a6);
    if ( v18 )
    {
      v19 = v18;
      ViHalPreprocessOptions(
        byte_14040544C,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v18,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v19, 0LL, 0LL, byte_14040544C);
    }
  }
  v20 = RealDmaOperation(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  v21 = v20;
  if ( AdapterInformationInternal && v20 < 0 )
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  return v21;
}
