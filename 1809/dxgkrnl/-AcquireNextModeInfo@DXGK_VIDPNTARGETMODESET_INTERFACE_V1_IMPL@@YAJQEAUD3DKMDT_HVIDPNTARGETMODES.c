/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D8A60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000A58C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000A6D0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D8FA0 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  _DWORD *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v32; // zf
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int128 v41; // [rsp+20h] [rbp-50h]
  int v42; // [rsp+38h] [rbp-38h] BYREF
  __int64 v43; // [rsp+40h] [rbp-30h]
  char v44; // [rsp+48h] [rbp-28h]
  __int128 v45; // [rsp+50h] [rbp-20h] BYREF
  __int64 v46; // [rsp+60h] [rbp-10h]
  __int64 v47; // [rsp+90h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 17);
  v42 = -1;
  v43 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v44 = 1;
    v42 = 7010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v7, &EventProfilerEnter, v8, 7010);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 7010);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = a2;
  v13[4] = this;
  v13[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v16 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v16 )
    {
      v17 = a2 - 16;
      v18 = -a2;
      v19 = (_DWORD *)(v17 & -(__int64)(v18 != 0));
      if ( v19 && *v19 == 305419896 )
      {
        v20 = *(_QWORD *)((v17 & -(__int64)(v18 != 0)) + 8);
        if ( !v20 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v35);
        }
        if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
               v16 + 32,
               v20) )
        {
          DWORD2(v41) = 0;
          v47 = 0LL;
          *(_QWORD *)&v41 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v45 = v41;
          v46 = v20;
          v22 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  v16,
                  &v45,
                  &v47);
          a2 = v22;
          if ( v22 == -1071774902 )
          {
            v30 = WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
            v32 = v47 == 0;
            *(_QWORD *)(v30 + 24) = v16;
            if ( !v32 )
            {
              v37 = WdLogNewEntry5_WdAssertion(v31);
              WdLogEvent5_WdAssertion(v37);
            }
            LODWORD(a2) = 1075708748;
          }
          else if ( v22 < 0 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdError(v24);
            v38[3] = v19;
            v38[4] = v16;
            v38[5] = a2;
            WdLogEvent5_WdError(v38);
          }
          else
          {
            a2 = v47;
            if ( !v47 )
            {
              v39 = WdLogNewEntry5_WdAssertion(v24);
              WdLogEvent5_WdAssertion(v39);
            }
            *(_QWORD *)&a3->Id = a2;
            LODWORD(a2) = 0;
          }
        }
        else
        {
          v36 = WdLogNewEntry5_WdError(v21);
          *(_QWORD *)(v36 + 24) = v19;
          *(_QWORD *)(v36 + 32) = v16;
          WdLogEvent5_WdError(v36);
          LODWORD(a2) = -1071774928;
        }
      }
      else
      {
        v40 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v40 + 24) = v19;
        WdLogEvent5_WdError(v40);
        LODWORD(a2) = -1071774959;
      }
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v34 + 24) = this;
      WdLogEvent5_WdError(v34);
      LODWORD(a2) = -1071774967;
    }
  }
  else
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v33[3] = 0LL;
    v33[4] = a2;
    v33[5] = this;
    WdLogEvent5_WdError(v33);
    LODWORD(a2) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v42);
  return (unsigned int)a2;
}
