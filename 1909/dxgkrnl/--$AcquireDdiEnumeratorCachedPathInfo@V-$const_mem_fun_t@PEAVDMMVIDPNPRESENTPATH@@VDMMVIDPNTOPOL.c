/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C013CEDC
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C013CDC0 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0055778 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00F6060 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rbx
  __int64 v16; // rdx
  _DWORD *v17; // r12
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rcx
  int MacroVisionTriggerBits; // eax
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  SIZE_T v32; // rsi
  PVOID v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID v38; // rbp

  v3 = 0;
  if ( !a3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v9 )
    {
      v10 = (char *)operator new[](0x178uLL, 0x4E506456u, PagedPool);
      v15 = v10;
      if ( v10 )
      {
        *(_DWORD *)v10 = 305419896;
        *((_QWORD *)v10 + 1) = v9;
        memset(v10 + 16, 0, 0x168uLL);
      }
      else
      {
        v15 = 0LL;
      }
      if ( v15 )
      {
        operator delete(0LL);
        v17 = v15 + 16;
        *((_DWORD *)v15 + 7) = *(_DWORD *)(v9 + 112);
        v18 = *(_DWORD *)(v9 + 116);
        if ( (unsigned int)(v18 - 254) <= 1
          || !v18
          || (v26 = !DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode((DMMVIDPNPRESENTPATH *)v9, v16), v19 = 1, v26) )
        {
          v19 = *(_DWORD *)(v9 + 116);
        }
        *((_DWORD *)v15 + 9) = v19;
        *((_DWORD *)v15 + 6) = *(_DWORD *)(v9 + 104);
        *v17 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL);
        *((_DWORD *)v15 + 5) = *(_DWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
        *((_DWORD *)v15 + 20) = *(_DWORD *)(v9 + 164);
        v20 = *(unsigned int *)(v9 + 172);
        *((_DWORD *)v15 + 21) = v20;
        *((_DWORD *)v15 + 87) = *(_DWORD *)(v9 + 168);
        if ( (_DWORD)v20 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v9, v16);
        else
          MacroVisionTriggerBits = 0;
        *((_DWORD *)v15 + 22) = MacroVisionTriggerBits;
        if ( v15 == (char *)-32LL )
        {
          v30 = WdLogNewEntry5_WdAssertion(v20, v16);
          WdLogEvent5_WdAssertion(v30);
        }
        *((_DWORD *)v15 + 8) = *(_DWORD *)(v9 + 120);
        if ( v15 == (char *)-40LL )
        {
          v31 = WdLogNewEntry5_WdAssertion(v20, v16);
          WdLogEvent5_WdAssertion(v31);
        }
        *((_DWORD *)v15 + 10) = *(_DWORD *)(v9 + 124);
        v22 = *(_QWORD *)(v9 + 184);
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
        *((_OWORD *)v15 + 22) = v23;
        *((_QWORD *)v15 + 46) = v24;
        if ( !*((_QWORD *)v15 + 46) )
          goto LABEL_19;
        v32 = *((_QWORD *)v15 + 45);
        v33 = operator new[](v32, 0x4E506456u, PagedPool);
        v38 = v33;
        if ( v33 )
        {
          memmove(v33, *((const void **)v15 + 46), v32);
          *((_QWORD *)v15 + 46) = v38;
LABEL_19:
          *a3 = v17;
          v15 = 0LL;
LABEL_20:
          operator delete(v15);
          return v3;
        }
        v29 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
        *(_QWORD *)(v29 + 24) = v32;
      }
      else
      {
        v29 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
        *(_QWORD *)(v29 + 24) = a1;
      }
      WdLogEvent5_WdLowResource(v29);
      v3 = -1073741801;
      goto LABEL_20;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = a2;
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
