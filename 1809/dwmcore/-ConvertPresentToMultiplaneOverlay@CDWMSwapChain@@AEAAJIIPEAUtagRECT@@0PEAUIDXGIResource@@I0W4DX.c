/*
 * XREFs of ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180203EDC
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800AAF20 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18016A7E4 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801FE310 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
 */

__int64 __fastcall CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
        CDWMSwapChain *this,
        unsigned int a2,
        unsigned int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct IDXGIResource *a6,
        unsigned int a7,
        struct tagRECT *a8,
        enum DXGI_COLOR_SPACE_TYPE a9)
{
  __int128 v13; // xmm0
  float v14; // xmm0_4
  int v15; // eax
  const void *v16; // r10
  struct IDXGISwapChainDWM1 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r9d
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  _BYTE v25[4]; // [rsp+40h] [rbp-A1h] BYREF
  int v26; // [rsp+44h] [rbp-9Dh]
  struct IDXGIResource *v27; // [rsp+48h] [rbp-99h]
  int v28; // [rsp+58h] [rbp-89h]
  __int128 v29; // [rsp+5Ch] [rbp-85h]
  __int128 v30; // [rsp+6Ch] [rbp-75h]
  __int128 v31; // [rsp+7Ch] [rbp-65h]
  int v32; // [rsp+8Ch] [rbp-55h]
  unsigned int v33; // [rsp+94h] [rbp-4Dh]
  struct tagRECT *v34; // [rsp+98h] [rbp-49h]
  enum DXGI_COLOR_SPACE_TYPE v35; // [rsp+A4h] [rbp-3Dh]
  int v36; // [rsp+A8h] [rbp-39h]
  int v37; // [rsp+B8h] [rbp-29h]
  int v38; // [rsp+C0h] [rbp-21h]

  memset_0(v25, 0, 0x88uLL);
  v27 = a6;
  v26 = 1;
  if ( (a4 || a5) && (v28 = 4, a4) )
  {
    v29 = (__int128)*a4;
  }
  else
  {
    *((_QWORD *)&v29 + 1) = *((_QWORD *)this + 15);
    *(_QWORD *)&v29 = 0LL;
  }
  if ( a5 )
  {
    v13 = (__int128)*a5;
    v30 = (__int128)*a5;
  }
  else
  {
    *((_QWORD *)&v30 + 1) = *((_QWORD *)this + 15);
    *(_QWORD *)&v30 = 0LL;
    v13 = v30;
  }
  v31 = v13;
  v32 = 1;
  v14 = *((float *)this + 49);
  v33 = a7;
  v34 = a8;
  v35 = a9;
  v36 = 0;
  v37 = 2;
  v15 = ConvertSDRBoostToSDRWhiteLevel(v14, a9);
  v16 = (const void *)*((_QWORD *)this + 70);
  v17 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)this + 53);
  v38 = v15;
  v18 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 70) = v19;
  v21 = CD2DContext::D2DPresentMultiplaneOverlay(
          *(CD2DContext **)(v18 + 80),
          v17,
          a2,
          a3,
          (enum DXGI_HDR_METADATA_TYPE)*((_DWORD *)this + 138),
          v16,
          v20,
          (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)v25);
  v23 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x11Bu);
  return v23;
}
