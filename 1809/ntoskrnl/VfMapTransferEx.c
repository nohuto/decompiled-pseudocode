/*
 * XREFs of VfMapTransferEx @ 0x14092CC70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x14092A44C (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     VERIFY_BUFFER_LOCKED @ 0x14092A614 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x14092A720 (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckAdapterBuffers @ 0x14092DCBC (ViCheckAdapterBuffers.c)
 *     ViCheckMdlLength @ 0x14092DDBC (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14092ED28 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfMapTransferEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        char a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 AdapterInformationInternal; // rdi
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int64 (__fastcall *RealDmaOperation)(__int64, ULONG_PTR, __int64, __int64, int, unsigned int *, char, __int64, int, __int64, __int64); // rax
  int v19; // eax
  unsigned int v20; // ebx

  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    VERIFY_BUFFER_LOCKED(a2);
    ViCheckAdapterBuffers(AdapterInformationInternal);
    v16 = ViCheckMdlLength(a2, a4, *a6);
    if ( v16 )
    {
      v17 = v16;
      ViHalPreprocessOptions(
        byte_140406460,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v16,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v17, 0LL, 0LL, byte_140406460);
    }
  }
  RealDmaOperation = (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64, __int64, int, unsigned int *, char, __int64, int, __int64, __int64))ViGetRealDmaOperation(a1);
  v19 = RealDmaOperation(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  v20 = v19;
  if ( AdapterInformationInternal && v19 >= 0 )
    INCREASE_MAPPED_TRANSFER_BYTE_COUNT(AdapterInformationInternal, *a6, 1);
  return v20;
}
