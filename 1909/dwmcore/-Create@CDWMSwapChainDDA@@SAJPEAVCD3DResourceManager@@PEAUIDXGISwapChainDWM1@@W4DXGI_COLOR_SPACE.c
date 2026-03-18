/*
 * XREFs of ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x1801635E8
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E3AFC (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N5@Z @ 0x1800E3FA4 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDWMSwapChainDDA::Create(
        struct CD3DResourceManager *a1,
        struct IDXGISwapChainDWM1 *a2,
        __int64 a3,
        struct _LUID a4,
        unsigned int a5,
        struct CDWMSwapChainDDA **a6)
{
  enum DXGI_COLOR_SPACE_TYPE v8; // ebp
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  CDWMSwapChain *v12; // rbx
  signed int v13; // eax
  __int64 v14; // rcx
  struct _LUID v16; // [rsp+28h] [rbp-B0h]
  struct DXGI_SWAP_CHAIN_DESC v17; // [rsp+50h] [rbp-88h] BYREF
  const void *retaddr; // [rsp+D8h] [rbp+0h]

  v8 = (int)a3;
  *a6 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, struct DXGI_SWAP_CHAIN_DESC *, __int64, struct _LUID))(*(_QWORD *)a2 + 80LL))(
         a2,
         &v17,
         a3,
         a4);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x17u, 0LL);
LABEL_7:
    if ( *a6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a6 + 8LL))(*a6);
      *a6 = 0LL;
    }
    return v11;
  }
  v12 = (CDWMSwapChain *)DefaultHeap::AllocClear(0x2F0uLL);
  if ( !v12 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CDWMSwapChain::CDWMSwapChain(v12, a2, 0LL, &v17, v8, v16, a5, 1, 0);
  *(_QWORD *)v12 = &CDWMSwapChainDDA::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)v12 + 3) = &CDWMSwapChainDDA::`vftable'{for `IDeviceResource'};
  *a6 = v12;
  (**(void (__fastcall ***)(CDWMSwapChain *))v12)(v12);
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a6 + 312LL))(*a6, a1);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x25u, 0LL);
    goto LABEL_7;
  }
  return v11;
}
