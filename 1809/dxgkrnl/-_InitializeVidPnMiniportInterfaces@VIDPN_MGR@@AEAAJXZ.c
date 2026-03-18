/*
 * XREFs of ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0153124
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0153240 (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C01532B8 (-InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0153330 (-InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C01533D4 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeVidPnMiniportInterfaces(VIDPN_MGR *this)
{
  DXGK_VIDPN_INTERFACE_V1_IMPL *v2; // rax
  struct _DXGK_VIDPN_INTERFACE *v3; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v4; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v5; // rdi
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v6; // rax
  struct _DXGK_VIDPNTOPOLOGY_INTERFACE *v7; // rdx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v8; // rdi
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v9; // rax
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v10; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // rdi
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v12; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v13; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v14; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax

  v2 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)operator new(0x58uLL, 0x4E506456u, PagedPool);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 46);
  v5 = v2;
  if ( v2 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 46) = v5;
  if ( !v5 )
    goto LABEL_14;
  DXGK_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v5, v3);
  v6 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)operator new(0x60uLL, 0x4E506456u, PagedPool);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 47);
  v8 = v6;
  if ( v6 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 47) = v8;
  if ( !v8 )
    goto LABEL_14;
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v8, v7);
  v9 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)operator new(0x40uLL, 0x4E506456u, PagedPool);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 48);
  v11 = v9;
  if ( v9 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 48) = v11;
  if ( !v11 )
    goto LABEL_14;
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v11, v10);
  v12 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)operator new(0x40uLL, 0x4E506456u, PagedPool);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 49);
  v14 = v12;
  if ( v12 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 49) = v14;
  if ( v14 )
  {
    DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v14, v13);
    return 0LL;
  }
  else
  {
LABEL_14:
    v17 = WdLogNewEntry5_WdLowResource(v4);
    v18 = *((_QWORD *)this + 1);
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v19);
      v18 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v18 + 16);
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
