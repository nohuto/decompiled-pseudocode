/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00D9B0C
 * Callers:
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C00D9990 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00D9CA0 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0285250 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ?GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000B224 (-GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000B254 (-GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000B284 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C004E568 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00D3E48 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v16; // rcx
  _QWORD *Instance; // rbx
  _DWORD *v18; // rsi
  int ContentRotationHw; // eax
  int v20; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  SIZE_T v28; // rbp
  PVOID v29; // rax
  __int64 v30; // rcx
  PVOID v31; // r14

  v4 = 0;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v25);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v14 = v9;
    if ( !v9 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = a2;
      return 3223192359LL;
    }
    Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(v9);
    if ( Instance )
    {
      operator delete(0LL);
      v18 = Instance + 2;
      *((_DWORD *)Instance + 7) = *(_DWORD *)(v14 + 112);
      if ( a4 )
        ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v14);
      else
        ContentRotationHw = *(_DWORD *)(v14 + 116);
      *((_DWORD *)Instance + 9) = ContentRotationHw;
      *((_DWORD *)Instance + 6) = *(_DWORD *)(v14 + 104);
      *v18 = *(_DWORD *)(*(_QWORD *)(v14 + 88) + 24LL);
      *((_DWORD *)Instance + 5) = *(_DWORD *)(*(_QWORD *)(v14 + 96) + 24LL);
      *((_DWORD *)Instance + 20) = *(_DWORD *)(v14 + 164);
      v20 = *(_DWORD *)(v14 + 172);
      *((_DWORD *)Instance + 21) = v20;
      *((_DWORD *)Instance + 87) = *(_DWORD *)(v14 + 168);
      if ( v20 == 2 )
        MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v14);
      else
        MacroVisionTriggerBits = 0;
      *((_DWORD *)Instance + 22) = MacroVisionTriggerBits;
      DMMVIDPNPRESENTPATH::GetScalingSupport(
        (DMMVIDPNPRESENTPATH *)v14,
        (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *const)Instance + 8);
      DMMVIDPNPRESENTPATH::GetRotationSupport(
        (DMMVIDPNPRESENTPATH *)v14,
        (struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *const)Instance + 10);
      v22 = *(_QWORD *)(v14 + 184);
      if ( v22 )
      {
        v23 = *(_OWORD *)(v22 + 16);
        v24 = *(_QWORD *)(v22 + 32);
      }
      else
      {
        v23 = *(_OWORD *)&g_DefaultGammaRamp.Type;
        v24 = 0LL;
      }
      *((_OWORD *)Instance + 22) = v23;
      Instance[46] = v24;
      if ( !Instance[46] )
        goto LABEL_14;
      v28 = Instance[45];
      v29 = operator new(v28, 0x4E506456u, PagedPool);
      v31 = v29;
      if ( v29 )
      {
        memmove(v29, (const void *)Instance[46], v28);
        Instance[46] = v31;
LABEL_14:
        *a3 = v18;
        Instance = 0LL;
LABEL_15:
        operator delete(Instance);
        return v4;
      }
      v27 = WdLogNewEntry5_WdLowResource(v30);
      *(_QWORD *)(v27 + 24) = v28;
    }
    else
    {
      v27 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v27 + 24) = a1;
    }
    WdLogEvent5_WdLowResource(v27);
    v4 = -1073741801;
    goto LABEL_15;
  }
  v26 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v26 + 24) = a1;
  WdLogEvent5_WdError(v26);
  return 3223192375LL;
}
