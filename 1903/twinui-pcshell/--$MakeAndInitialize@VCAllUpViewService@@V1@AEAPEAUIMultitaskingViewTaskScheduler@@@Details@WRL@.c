/*
 * XREFs of ??$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x180342D88
 * Callers:
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1803432B4 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??0CAllUpViewService@@QEAA@XZ @ 0x180342FE4 (--0CAllUpViewService@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x1803433BC (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAllUpViewService,CAllUpViewService,IMultitaskingViewTaskScheduler * &>(
        CAllUpViewService **a1,
        __int64 *a2)
{
  unsigned int v2; // edi
  CAllUpViewService *v5; // rax
  CAllUpViewService *v6; // rax
  __int64 v7; // rdx
  CAllUpViewService *v8; // rbx
  CAllUpViewService *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (CAllUpViewService *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CAllUpViewService::CAllUpViewService(v5);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v6 + 7, v7);
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)v8 + 13);
    *a1 = v8;
    Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
