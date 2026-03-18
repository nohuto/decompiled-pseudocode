/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E67F4
 * Callers:
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E5CA0 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C01527B0 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02BD680 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ?GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005CA4 (-GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0005CD4 (-GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C0005D04 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0005D3C (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0055778 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C014F1C8 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD *Instance; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rbx
  _DWORD *v19; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  int v21; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  SIZE_T v30; // rbp
  PVOID v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  PVOID v36; // r14
  _DWORD *v37; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v12 = v9;
    if ( v9 )
    {
      v37 = 0LL;
      Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(v9);
      auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v37, Instance);
      v18 = v37;
      if ( v37 )
      {
        v19 = v37 + 4;
        v37[7] = *(_DWORD *)(v12 + 112);
        if ( a4 )
          ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v12);
        else
          ContentRotationHw = *(_DWORD *)(v12 + 116);
        *((_DWORD *)v18 + 9) = ContentRotationHw;
        *((_DWORD *)v18 + 6) = *(_DWORD *)(v12 + 104);
        *v19 = *(_DWORD *)(*(_QWORD *)(v12 + 88) + 24LL);
        *((_DWORD *)v18 + 5) = *(_DWORD *)(*(_QWORD *)(v12 + 96) + 24LL);
        *((_DWORD *)v18 + 20) = *(_DWORD *)(v12 + 164);
        v21 = *(_DWORD *)(v12 + 172);
        *((_DWORD *)v18 + 21) = v21;
        *((_DWORD *)v18 + 87) = *(_DWORD *)(v12 + 168);
        if ( v21 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v12, v14);
        else
          MacroVisionTriggerBits = 0;
        *((_DWORD *)v18 + 22) = MacroVisionTriggerBits;
        DMMVIDPNPRESENTPATH::GetScalingSupport(
          (DMMVIDPNPRESENTPATH *)v12,
          (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *const)v18 + 8);
        DMMVIDPNPRESENTPATH::GetRotationSupport(
          (DMMVIDPNPRESENTPATH *)v12,
          (struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *const)v18 + 10);
        v23 = *(_QWORD *)(v12 + 184);
        if ( v23 )
        {
          v24 = *(_OWORD *)(v23 + 16);
          v25 = *(_QWORD *)(v23 + 32);
        }
        else
        {
          v24 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v25 = 0LL;
        }
        *((_OWORD *)v18 + 22) = v24;
        *((_QWORD *)v18 + 46) = v25;
        if ( !*((_QWORD *)v18 + 46) )
          goto LABEL_13;
        v30 = *((_QWORD *)v18 + 45);
        v31 = operator new[](v30, 0x4E506456u, PagedPool);
        v36 = v31;
        if ( v31 )
        {
          memmove(v31, *((const void **)v18 + 46), v30);
          *((_QWORD *)v18 + 46) = v36;
LABEL_13:
          *a3 = v19;
          v18 = 0LL;
LABEL_14:
          operator delete(v18);
          return v4;
        }
        v29 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
        *(_QWORD *)(v29 + 24) = v30;
      }
      else
      {
        v29 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
        *(_QWORD *)(v29 + 24) = a1;
      }
      WdLogEvent5_WdLowResource(v29);
      v4 = -1073741801;
      goto LABEL_14;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdError(v28);
    return 3223192375LL;
  }
}
