/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0129B6C
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0129A50 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C004E568 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00E29EC (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rbx
  _DWORD *v15; // r12
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  int MacroVisionTriggerBits; // eax
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  SIZE_T v30; // rsi
  PVOID v31; // rax
  __int64 v32; // rcx
  PVOID v33; // rbp

  v3 = 0;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v25);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v9 )
    {
      v12 = (char *)operator new(0x178uLL, 0x4E506456u, PagedPool);
      v14 = v12;
      if ( v12 )
      {
        *(_DWORD *)v12 = 305419896;
        *((_QWORD *)v12 + 1) = v9;
        memset(v12 + 16, 0, 0x168uLL);
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        operator delete(0LL);
        v15 = v14 + 16;
        *((_DWORD *)v14 + 7) = *(_DWORD *)(v9 + 112);
        v16 = *(_DWORD *)(v9 + 116);
        if ( (unsigned int)(v16 - 254) <= 1
          || !v16
          || (v24 = !DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode((DMMVIDPNPRESENTPATH *)v9), v17 = 1, v24) )
        {
          v17 = *(_DWORD *)(v9 + 116);
        }
        *((_DWORD *)v14 + 9) = v17;
        *((_DWORD *)v14 + 6) = *(_DWORD *)(v9 + 104);
        *v15 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL);
        *((_DWORD *)v14 + 5) = *(_DWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
        *((_DWORD *)v14 + 20) = *(_DWORD *)(v9 + 164);
        v18 = *(unsigned int *)(v9 + 172);
        *((_DWORD *)v14 + 21) = v18;
        *((_DWORD *)v14 + 87) = *(_DWORD *)(v9 + 168);
        if ( (_DWORD)v18 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v9);
        else
          MacroVisionTriggerBits = 0;
        *((_DWORD *)v14 + 22) = MacroVisionTriggerBits;
        if ( v14 == (char *)-32LL )
        {
          v28 = WdLogNewEntry5_WdAssertion(v18);
          WdLogEvent5_WdAssertion(v28);
        }
        *((_DWORD *)v14 + 8) = *(_DWORD *)(v9 + 120);
        if ( v14 == (char *)-40LL )
        {
          v29 = WdLogNewEntry5_WdAssertion(v18);
          WdLogEvent5_WdAssertion(v29);
        }
        *((_DWORD *)v14 + 10) = *(_DWORD *)(v9 + 124);
        v20 = *(_QWORD *)(v9 + 184);
        if ( v20 )
        {
          v21 = *(_OWORD *)(v20 + 16);
          v22 = *(_QWORD *)(v20 + 32);
        }
        else
        {
          v21 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v22 = 0LL;
        }
        *((_OWORD *)v14 + 22) = v21;
        *((_QWORD *)v14 + 46) = v22;
        if ( !*((_QWORD *)v14 + 46) )
          goto LABEL_19;
        v30 = *((_QWORD *)v14 + 45);
        v31 = operator new(v30, 0x4E506456u, PagedPool);
        v33 = v31;
        if ( v31 )
        {
          memmove(v31, *((const void **)v14 + 46), v30);
          *((_QWORD *)v14 + 46) = v33;
LABEL_19:
          *a3 = v15;
          v14 = 0LL;
LABEL_20:
          operator delete(v14);
          return v3;
        }
        v27 = WdLogNewEntry5_WdLowResource(v32);
        *(_QWORD *)(v27 + 24) = v30;
      }
      else
      {
        v27 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v27 + 24) = a1;
      }
      WdLogEvent5_WdLowResource(v27);
      v3 = -1073741801;
      goto LABEL_20;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v11) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3223192375LL;
  }
}
