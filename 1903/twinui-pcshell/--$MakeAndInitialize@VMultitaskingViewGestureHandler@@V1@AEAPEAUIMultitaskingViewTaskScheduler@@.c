/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1803444A4
 * Callers:
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x180345324 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0MultitaskingViewGestureHandler@@QEAA@XZ @ 0x180344798 (--0MultitaskingViewGestureHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1803452B0 (-InternalRelease@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180345880 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureHandler,MultitaskingViewGestureHandler,IMultitaskingViewTaskScheduler * &,IMultitaskingViewVisibilityService * &>(
        MultitaskingViewGestureHandler **a1,
        struct IMultitaskingViewTaskScheduler **a2,
        struct IMultitaskingViewVisibilityService **a3)
{
  MultitaskingViewGestureHandler *v6; // rax
  int v7; // edi
  MultitaskingViewGestureHandler *v8; // rax
  struct IMultitaskingViewVisibilityService *v9; // r8
  struct IMultitaskingViewTaskScheduler *v10; // rdx
  MultitaskingViewGestureHandler *v11; // rbx
  MultitaskingViewGestureHandler *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (MultitaskingViewGestureHandler *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = MultitaskingViewGestureHandler::MultitaskingViewGestureHandler(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v13 = v8;
    v7 = MultitaskingViewGestureHandler::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)v11 + 5);
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
