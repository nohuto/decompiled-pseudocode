/*
 * XREFs of ?CScrollViewer_CreateInstance@@YAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x18037CAC4
 * Callers:
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x18036ADFC (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCScrollViewer@@V1@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewer@@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x18037C588 (--$MakeAndInitialize@VCScrollViewer@@V1@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMu.c)
 */

__int64 __fastcall CScrollViewer_CreateInstance(
        __int64 a1,
        double a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v8; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  double v15; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+30h] BYREF
  int v17; // [rsp+78h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v8 = a8;
  a8 = 0LL;
  *v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CScrollViewer,CScrollViewer,_MARGINS const &,double &,unsigned int &,enum ScrollViewerFlags &,IMultitaskingViewElement * &,ISwitchThumbnailFactory * &>(
          (__int64 *)&a8,
          a1,
          (__int64)&v15,
          &v16,
          &v17,
          &a5,
          &a6);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 423LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_6;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a8)(a8, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, v8);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 424LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
  return v11;
}
