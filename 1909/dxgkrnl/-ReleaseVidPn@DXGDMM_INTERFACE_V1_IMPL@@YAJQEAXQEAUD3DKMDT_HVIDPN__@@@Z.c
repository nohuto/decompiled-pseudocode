/*
 * XREFs of ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01491C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn(DXGDMM_INTERFACE_V1_IMPL *this, __int64 a2, const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+28h] [rbp-20h]
  char v31; // [rsp+30h] [rbp-18h]
  __int64 v32; // [rsp+50h] [rbp+8h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 6055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6055);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 6055LL);
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v26);
    }
    v11 = *((_QWORD *)this + 319);
    if ( v11 )
    {
      v14 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
      if ( v14 )
      {
        v16 = *(_QWORD *)(v11 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, v16);
        if ( *(_QWORD *)(v14 + 48) == v16 )
        {
          ReferenceCounted::Release((ReferenceCounted *)(v14 + 24), v17, v19);
        }
        else
        {
          v28 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v28 + 24) = v14;
          *(_QWORD *)(v28 + 32) = v16;
          WdLogEvent5_WdError(v28);
        }
        v20 = 0;
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40));
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v13, v12, v15);
        *(_QWORD *)(v27 + 24) = a2;
        WdLogEvent5_WdError(v27);
        v20 = -1071774973;
      }
      goto LABEL_11;
    }
    v25 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v25 + 24) = this;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v25 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v25);
  v20 = -1071775742;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v21);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v29);
  return v20;
}
