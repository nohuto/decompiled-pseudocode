/*
 * XREFs of ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180153F48
 * Callers:
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x1800A9C9C (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800B0044 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800B2744 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180153834 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B45D0 (-Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x1801B5C5C (-Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z.c)
 *     FlushAndWait @ 0x18021AB14 (FlushAndWait.c)
 *     ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x180246E34 (-Initialize@CHolographicInteropTaskQueue@@AEAAJXZ.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180153EDC (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

signed int __fastcall wil::details::GetLastErrorFailHr(wil::details *this, __int64 a2, __int64 a3, const char *a4)
{
  signed int result; // eax
  const char *v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  result = wil::details::GetLastErrorFail(0LL, 0LL, 0LL, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
