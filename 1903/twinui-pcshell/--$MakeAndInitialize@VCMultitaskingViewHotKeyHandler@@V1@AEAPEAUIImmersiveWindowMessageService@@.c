/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x180347EDC
 * Callers:
 *     ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803484CC (-CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImme.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CMultitaskingViewHotKeyHandler@@QEAA@XZ @ 0x180348094 (--0CMultitaskingViewHotKeyHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x180348834 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x180348A40 (-RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IApplicationTargetingTracker * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
        volatile signed __int32 **a1,
        struct IImmersiveWindowMessageService **a2,
        struct IImmersiveMonitorManager **a3,
        struct IApplicationTargetingTracker **a4,
        struct IMultitaskingViewTaskScheduler **a5,
        struct IApplicationViewCollection **a6)
{
  CMultitaskingViewHotKeyHandler *v10; // rax
  int v11; // edi
  volatile signed __int32 *v12; // rbx
  struct IApplicationTargetingTracker *v13; // r9
  struct IImmersiveMonitorManager *v14; // r8
  volatile signed __int32 *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CMultitaskingViewHotKeyHandler *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = (volatile signed __int32 *)CMultitaskingViewHotKeyHandler::CMultitaskingViewHotKeyHandler(v10);
    v13 = *a4;
    v14 = *a3;
    v16 = v12;
    v11 = CMultitaskingViewHotKeyHandler::RuntimeClassInitialize(
            (CMultitaskingViewHotKeyHandler *)v12,
            *a2,
            v14,
            v13,
            *a5,
            *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        _InterlockedIncrement(v12 + 5);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
