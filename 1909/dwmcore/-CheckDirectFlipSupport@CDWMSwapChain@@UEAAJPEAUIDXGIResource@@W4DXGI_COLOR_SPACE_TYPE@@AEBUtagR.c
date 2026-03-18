/*
 * XREFs of ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x1801625C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180162AC4 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z @ 0x180162BB4 (-DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z.c)
 *     ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x18016306C (-ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ.c)
 */

__int64 __fastcall CDWMSwapChain::CheckDirectFlipSupport(
        CDWMSwapChain *this,
        struct IDXGIResource *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        bool *a6)
{
  float v6; // xmm0_4
  unsigned int v9; // ebx
  char v10; // r14
  unsigned int v11; // r13d
  CDWMSwapChain *v12; // rcx
  const struct tagRECT *v13; // r10
  CDWMSwapChain *v14; // rcx
  char v15; // r9
  __int64 v16; // r11
  signed int v17; // eax
  __int64 v18; // rcx
  struct tagRECT v19; // xmm1
  struct tagRECT v20; // xmm0
  int v21; // eax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(CDWMSwapChain *, __int64, char *, bool *, char *); // rax
  signed int v24; // eax
  __int64 v25; // rcx
  char v27[8]; // [rsp+30h] [rbp-B9h] BYREF
  struct IDXGIResource *v28; // [rsp+38h] [rbp-B1h] BYREF
  const struct tagRECT *v29; // [rsp+40h] [rbp-A9h]
  char v30[8]; // [rsp+50h] [rbp-99h] BYREF
  struct IDXGIResource *v31; // [rsp+58h] [rbp-91h]
  int v32; // [rsp+60h] [rbp-89h]
  int v33; // [rsp+6Ch] [rbp-7Dh]
  int v34; // [rsp+70h] [rbp-79h]
  struct tagRECT v35; // [rsp+74h] [rbp-75h]
  struct tagRECT v36; // [rsp+84h] [rbp-65h]
  struct tagRECT v37; // [rsp+94h] [rbp-55h]
  __int64 v38; // [rsp+A4h] [rbp-45h]
  int v39; // [rsp+ACh] [rbp-3Dh]
  __int64 v40; // [rsp+B0h] [rbp-39h]
  int v41; // [rsp+B8h] [rbp-31h]
  enum DXGI_COLOR_SPACE_TYPE v42; // [rsp+BCh] [rbp-2Dh]
  int v43; // [rsp+C0h] [rbp-29h]
  int v44; // [rsp+D0h] [rbp-19h]
  unsigned int v45; // [rsp+D8h] [rbp-11h]

  v6 = *((float *)this + 49);
  v28 = a2;
  v29 = a4;
  v9 = 0;
  v10 = 0;
  v11 = ConvertSDRBoostToSDRWhiteLevel(v6, a3);
  CDWMSwapChain::ShouldConvertPresentToMPO(this);
  if ( CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v12, v13)
    || CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v14, a5) )
  {
    v10 = 1;
  }
  *a6 = 0;
  if ( v15 || v10 )
  {
    memset_0(v30, 0, 0x90uLL);
    v19 = *a5;
    v31 = v28;
    v32 = *((_DWORD *)this + 112);
    v27[0] = 0;
    v33 = 0;
    v39 = 0;
    v20 = *v29;
    v21 = v34;
    if ( v10 )
      v21 = 4;
    v40 = 0LL;
    v34 = v21;
    v22 = *(_QWORD *)this;
    v41 = 0;
    v43 = 0;
    v23 = *(__int64 (__fastcall **)(CDWMSwapChain *, __int64, char *, bool *, char *))(v22 + 216);
    v35 = v20;
    v38 = 1LL;
    v36 = v19;
    v42 = a3;
    v37 = v19;
    v44 = 2;
    v45 = v11;
    v24 = v23(this, 1LL, v30, a6, v27);
    v9 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x34Cu, 0LL);
  }
  else if ( (unsigned int)a3 <= DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct IDXGIResource **))(**((_QWORD **)this + 53) + 144LL))(
            *((_QWORD *)this + 53),
            0LL,
            v16,
            &v28);
    v9 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x354u, 0LL);
    else
      *a6 = (_DWORD)v28 != 0;
  }
  return v9;
}
