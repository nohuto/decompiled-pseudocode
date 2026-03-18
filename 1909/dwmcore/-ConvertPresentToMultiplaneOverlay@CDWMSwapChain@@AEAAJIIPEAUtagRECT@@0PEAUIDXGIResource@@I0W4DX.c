/*
 * XREFs of ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180162940
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18006C6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18015EF40 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180162AC4 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
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
  struct IDXGISwapChainDWM1 *v15; // rdx
  CD2DContext *v16; // rcx
  enum DXGI_HDR_METADATA_TYPE v17; // eax
  __int64 v18; // r8
  unsigned int v19; // r9d
  signed int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  void *v24; // [rsp+28h] [rbp-B9h]
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
  unsigned int v38; // [rsp+C0h] [rbp-21h]

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
  v38 = ConvertSDRBoostToSDRWhiteLevel(v14, a9);
  v15 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)this + 53);
  v16 = *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL);
  v24 = (void *)*((_QWORD *)this + 71);
  v17 = *((_DWORD *)this + 140);
  *((_QWORD *)this + 71) = v18;
  v20 = CD2DContext::D2DPresentMultiplaneOverlay(
          v16,
          v15,
          a2,
          a3,
          v17,
          v24,
          v19,
          (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)v25);
  v22 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x11Bu, 0LL);
  return v22;
}
