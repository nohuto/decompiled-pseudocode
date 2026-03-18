/*
 * XREFs of ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C014C040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0003FB8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0009E30 (-ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const GUID *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DMMVIDPNSOURCEMODESET *v14; // rsi
  DMMVIDPNSOURCE *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rbp
  __int64 v35; // rax
  int v36; // [rsp+20h] [rbp-28h] BYREF
  __int64 v37; // [rsp+28h] [rbp-20h]
  char v38; // [rsp+30h] [rbp-18h]
  __int64 v39; // [rsp+60h] [rbp+18h] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 6035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6035);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 6035LL);
  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v9 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 88LL) == v5 )
    {
      v27 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v27 + 24) = v9;
      WdLogEvent5_WdError(v27);
      v22 = -1071774909;
    }
    else
    {
      v10 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)a2);
      v14 = (struct DMMVIDPNSOURCEMODESET *)v10;
      if ( v10 )
      {
        v15 = *(DMMVIDPNSOURCE **)(v10 + 112);
        if ( !v15 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v12, v11);
          WdLogEvent5_WdAssertion(v29);
        }
        v16 = *((_QWORD *)v15 + 5);
        if ( !v16 )
        {
          v30 = WdLogNewEntry5_WdAssertion(0LL, v11);
          WdLogEvent5_WdAssertion(v30);
          v16 = *((_QWORD *)v15 + 5);
        }
        if ( ContainedBy<DMMVIDPN>::GetContainer(v16 + 64, v11) == v9 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v39, *(_QWORD *)(v9 + 48));
          DMMVIDPNSOURCE::ReleaseModeSet(v15, v14, v20);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v39 + 40));
          v22 = 0;
        }
        else
        {
          v31 = WdLogNewEntry5_WdError(v18, v17, v19);
          v33 = *((_QWORD *)v15 + 5);
          v34 = (_QWORD *)v31;
          if ( !v33 )
          {
            v35 = WdLogNewEntry5_WdAssertion(0LL, v32);
            WdLogEvent5_WdAssertion(v35);
            v33 = *((_QWORD *)v15 + 5);
          }
          v34[3] = ContainedBy<DMMVIDPN>::GetContainer(v33 + 64, v32);
          v34[4] = v14;
          v34[5] = v9;
          WdLogEvent5_WdError(v34);
          v22 = -1071774928;
        }
      }
      else
      {
        v28 = WdLogNewEntry5_WdError(v12, v11, v13);
        *(_QWORD *)(v28 + 24) = a2;
        WdLogEvent5_WdError(v28);
        v22 = -1071774968;
      }
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    v22 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v21);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v36);
  return v22;
}
