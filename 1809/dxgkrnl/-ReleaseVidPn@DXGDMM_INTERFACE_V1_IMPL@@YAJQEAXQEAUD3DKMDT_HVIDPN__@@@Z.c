/*
 * XREFs of ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0134ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn(DXGDMM_INTERFACE_V1_IMPL *this, __int64 a2, const GUID *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  char v22; // [rsp+30h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 6055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6055);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 6055);
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v17);
    }
    v7 = *((_QWORD *)this + 315);
    if ( v7 )
    {
      v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v7 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, v10);
        if ( *(_QWORD *)(v9 + 48) == v10 )
        {
          ReferenceCounted::Release((ReferenceCounted *)(v9 + 24));
        }
        else
        {
          v19 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v19 + 24) = v9;
          *(_QWORD *)(v19 + 32) = v10;
          WdLogEvent5_WdError(v19);
        }
        v12 = 0;
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v18 + 24) = a2;
        WdLogEvent5_WdError(v18);
        v12 = -1071774973;
      }
      goto LABEL_11;
    }
    v16 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v16 + 24) = this;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v16 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v16);
  v12 = -1071775742;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v20);
  return v12;
}
