/*
 * XREFs of ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C02B8A00
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E364C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnCopy(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        GUID *a3,
        struct D3DKMDT_HVIDPN__ **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  const struct DMMVIDPN *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rbx
  struct D3DKMDT_HVIDPN__ *v25; // rdi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  __int64 v34; // [rsp+20h] [rbp-20h] BYREF
  int v35; // [rsp+28h] [rbp-18h] BYREF
  __int64 v36; // [rsp+30h] [rbp-10h]
  char v37; // [rsp+38h] [rbp-8h]
  __int64 v38; // [rsp+70h] [rbp+30h] BYREF

  v35 = -1;
  v36 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v37 = 1;
    v35 = 6054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6054);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 6054LL);
  if ( a3 && a4 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    *a4 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v16, v15);
        WdLogEvent5_WdAssertion(v18);
      }
      if ( *((_QWORD *)this + 319) )
      {
        v22 = (const struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
        if ( v22 )
        {
          v24 = *(_QWORD *)(v19 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v34, v24);
          v25 = *(struct D3DKMDT_HVIDPN__ **)(v24 + 424);
          v38 = 0LL;
          v26 = VIDPN_MGR::CreateVidPnCopyForClient(v24, v22, &v38);
          v13 = v26;
          if ( v26 >= 0 )
          {
            v30 = v38;
            v38 = 0LL;
            *(_QWORD *)&a3->Data1 = v30 & -(__int64)(v30 != -88);
            LODWORD(v13) = 0;
            *a4 = v25;
          }
          else
          {
            v29 = WdLogNewEntry5_WdDmmEvent(v28, v27);
            *(_QWORD *)(v29 + 24) = v13;
            WdLogEvent5_WdDmmEvent(v29);
          }
          auto_rc<DMMVIDPN>::reset(&v38, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v34 + 40));
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v20, v19, v21);
          *(_QWORD *)(v23 + 24) = a2;
          WdLogEvent5_WdError(v23);
          LODWORD(v13) = -1071774973;
        }
        goto LABEL_21;
      }
      v14 = WdLogNewEntry5_WdError(v16, 0LL, v17);
      *(_QWORD *)(v14 + 24) = this;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v14);
    LODWORD(v13) = -1071775742;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = a2;
    WdLogEvent5_WdError(v11);
    LODWORD(v13) = -1073741811;
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v12);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v35);
  return (unsigned int)v13;
}
