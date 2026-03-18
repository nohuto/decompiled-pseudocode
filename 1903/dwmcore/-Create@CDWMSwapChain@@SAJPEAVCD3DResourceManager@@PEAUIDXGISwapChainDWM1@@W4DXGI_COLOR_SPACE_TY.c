/*
 * XREFs of ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N4PEAPEAV1@@Z @ 0x1800E3528
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E31CC (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N5@Z @ 0x1800E3674 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDWMSwapChain::Create(
        struct CD3DResourceManager *a1,
        struct IDXGISwapChainDWM1 *a2,
        __int64 a3,
        struct _LUID a4,
        unsigned int a5,
        bool a6,
        bool a7,
        struct CDWMSwapChain **a8)
{
  enum DXGI_COLOR_SPACE_TYPE v10; // ebp
  signed int v11; // eax
  __int64 v12; // rcx
  int v13; // ebx
  CDWMSwapChain *v14; // rcx
  __int64 v15; // r8
  struct CDWMSwapChain *v16; // rax
  enum DXGI_COLOR_SPACE_TYPE v18; // [rsp+20h] [rbp-C8h]
  struct _LUID v19; // [rsp+28h] [rbp-C0h]
  struct IDXGIOutput *v20; // [rsp+50h] [rbp-98h] BYREF
  DXGI_SWAP_CHAIN_DESC v21; // [rsp+60h] [rbp-88h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v20 = 0LL;
  v10 = (int)a3;
  *a8 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, DXGI_SWAP_CHAIN_DESC *, __int64, struct _LUID))(*(_QWORD *)a2 + 80LL))(
          a2,
          &v21,
          a3,
          a4);
  v13 = v11;
  if ( v11 < 0 )
  {
    v18 = DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P601|0x20;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, struct IDXGIOutput **))(*(_QWORD *)a2 + 104LL))(
            a2,
            &v20);
    v13 = v11;
    if ( v11 < 0 )
    {
      v18 = DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P709|0x20;
    }
    else
    {
      v14 = (CDWMSwapChain *)DefaultHeap::AllocClear(0x2F0uLL);
      if ( !v14 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr, v15);
      v16 = CDWMSwapChain::CDWMSwapChain(v14, a2, v20, &v21, v10, v19, a5, a6, a7);
      *a8 = v16;
      if ( !v16 )
      {
        v13 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0x36u, 0LL);
        goto LABEL_6;
      }
      (**(void (__fastcall ***)(struct CDWMSwapChain *))v16)(v16);
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a8 + 312LL))(*a8, a1);
      v13 = v11;
      if ( v11 >= 0 )
        goto LABEL_6;
      v18 = DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_TOPLEFT_P2020|DXGI_COLOR_SPACE_RESERVED|0x20;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v18, 0LL);
LABEL_6:
  if ( v20 )
  {
    ((void (__fastcall *)(struct IDXGIOutput *))v20->lpVtbl->Release)(v20);
    v20 = 0LL;
  }
  if ( v13 < 0 && *a8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a8 + 8LL))(*a8);
    *a8 = 0LL;
  }
  return (unsigned int)v13;
}
