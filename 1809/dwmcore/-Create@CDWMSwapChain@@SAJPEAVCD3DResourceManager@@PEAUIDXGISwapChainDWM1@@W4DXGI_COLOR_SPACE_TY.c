/*
 * XREFs of ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N4PEAPEAV1@@Z @ 0x18007D1B4
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007C95C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N5@Z @ 0x18007D3E8 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
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
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // ebx
  CDWMSwapChain *v14; // rcx
  struct CDWMSwapChain *v15; // rax
  enum DXGI_COLOR_SPACE_TYPE v17; // [rsp+20h] [rbp-C8h]
  struct _LUID v18; // [rsp+28h] [rbp-C0h]
  struct IDXGIOutput *v19; // [rsp+50h] [rbp-98h] BYREF
  DXGI_SWAP_CHAIN_DESC v20; // [rsp+60h] [rbp-88h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v19 = 0LL;
  v10 = (int)a3;
  *a8 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, DXGI_SWAP_CHAIN_DESC *, __int64, struct _LUID))(*(_QWORD *)a2 + 80LL))(
          a2,
          &v20,
          a3,
          a4);
  v13 = v11;
  if ( v11 < 0 )
  {
    v17 = DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P2020|0x20;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, struct IDXGIOutput **))(*(_QWORD *)a2 + 104LL))(
            a2,
            &v19);
    v13 = v11;
    if ( v11 < 0 )
    {
      v17 = DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020|0x20;
    }
    else
    {
      v14 = (CDWMSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x2F0uLL);
      if ( !v14 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v15 = CDWMSwapChain::CDWMSwapChain(v14, a2, v19, &v20, v10, v18, a5, a6, a7);
      *a8 = v15;
      if ( !v15 )
      {
        v13 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x39u);
        goto LABEL_6;
      }
      (**(void (__fastcall ***)(struct CDWMSwapChain *))v15)(v15);
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a8 + 288LL))(*a8, a1);
      v13 = v11;
      if ( v11 >= 0 )
        goto LABEL_6;
      v17 = DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_TOPLEFT_P2020|DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P601|0x20;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v17);
LABEL_6:
  if ( v19 )
  {
    ((void (__fastcall *)(struct IDXGIOutput *))v19->lpVtbl->Release)(v19);
    v19 = 0LL;
  }
  if ( v13 < 0 && *a8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a8 + 8LL))(*a8);
    *a8 = 0LL;
  }
  return (unsigned int)v13;
}
