/*
 * XREFs of ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x18034A680
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18010E82C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x18034B1F0 (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18034B290 (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 */

__int64 __fastcall CMultitaskingViewManager::ViewDismissed(CMultitaskingViewManager *this, struct IUnknown *a2)
{
  CMultitaskingViewManager *v2; // rdi
  int MTVHost; // eax
  unsigned int v5; // ebx
  signed __int64 v7; // [rsp+30h] [rbp-10h] BYREF
  int v8; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v10; // [rsp+60h] [rbp+20h] BYREF
  struct IUnknown *v11; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  v2 = (CMultitaskingViewManager *)((char *)this - 16);
  v7 = ((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewManager *)16);
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1);
  ((void (__fastcall *)(struct IUnknown *, unsigned int *))a2->lpVtbl[1].QueryInterface)(a2, &v10);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  MTVHost = CMultitaskingViewManager::_FindMTVHost(v2, v10, 0LL, &v11, &v12);
  v5 = MTVHost;
  if ( MTVHost >= 0 )
  {
    if ( (unsigned int)SHIsSameObject(v11, a2) )
      CMultitaskingViewManager::_DestroyMTVHost(v2, v12);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)MTVHost);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v7);
  return v5;
}
