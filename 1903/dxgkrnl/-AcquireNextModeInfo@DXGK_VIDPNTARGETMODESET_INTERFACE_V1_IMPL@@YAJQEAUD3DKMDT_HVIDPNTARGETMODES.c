/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C014F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0005D18 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00060BC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C015380C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbx
  _DWORD *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  bool v35; // zf
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int128 v44; // [rsp+20h] [rbp-50h]
  int v45; // [rsp+38h] [rbp-38h] BYREF
  __int64 v46; // [rsp+40h] [rbp-30h]
  char v47; // [rsp+48h] [rbp-28h]
  __int128 v48; // [rsp+50h] [rbp-20h] BYREF
  __int64 v49; // [rsp+60h] [rbp-10h]
  __int64 v50; // [rsp+90h] [rbp+20h] BYREF

  v5 = (__int64)a2;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 17);
  v45 = -1;
  v46 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v47 = 1;
    v45 = 7010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v7, &EventProfilerEnter, v8, 7010);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 7010LL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = v5;
  v11[4] = this;
  v11[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v17 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v17 )
    {
      v19 = v5 - 16;
      v20 = -v5;
      v21 = (_DWORD *)(v19 & -(__int64)(v20 != 0));
      if ( v21 && *v21 == 305419896 )
      {
        v22 = *(_QWORD *)((v19 & -(__int64)(v20 != 0)) + 8);
        if ( !v22 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v16, v15);
          WdLogEvent5_WdAssertion(v38);
        }
        if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
               v17 + 32,
               v22) )
        {
          DWORD2(v44) = 0;
          v50 = 0LL;
          *(_QWORD *)&v44 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v48 = v44;
          v49 = v22;
          v26 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  v17,
                  &v48,
                  &v50);
          v5 = v26;
          if ( v26 == -1071774902 )
          {
            v33 = WdLogNewEntry5_WdTrace(v28, v27);
            v35 = v50 == 0;
            *(_QWORD *)(v33 + 24) = v17;
            if ( !v35 )
            {
              v40 = WdLogNewEntry5_WdAssertion(v34, v27);
              WdLogEvent5_WdAssertion(v40);
            }
            LODWORD(v5) = 1075708748;
          }
          else if ( v26 < 0 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
            v41[3] = v21;
            v41[4] = v17;
            v41[5] = v5;
            WdLogEvent5_WdError(v41);
          }
          else
          {
            v5 = v50;
            if ( !v50 )
            {
              v42 = WdLogNewEntry5_WdAssertion(v28, v27);
              WdLogEvent5_WdAssertion(v42);
            }
            *(_QWORD *)&a3->Id = v5;
            LODWORD(v5) = 0;
          }
        }
        else
        {
          v39 = WdLogNewEntry5_WdError(v24, v23, v25);
          *(_QWORD *)(v39 + 24) = v21;
          *(_QWORD *)(v39 + 32) = v17;
          WdLogEvent5_WdError(v39);
          LODWORD(v5) = -1071774928;
        }
      }
      else
      {
        v43 = WdLogNewEntry5_WdError(v16, v15, v18);
        *(_QWORD *)(v43 + 24) = v21;
        WdLogEvent5_WdError(v43);
        LODWORD(v5) = -1071774959;
      }
    }
    else
    {
      v37 = WdLogNewEntry5_WdError(v16, v15, v18);
      *(_QWORD *)(v37 + 24) = this;
      WdLogEvent5_WdError(v37);
      LODWORD(v5) = -1071774967;
    }
  }
  else
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v36[3] = 0LL;
    v36[4] = v5;
    v36[5] = this;
    WdLogEvent5_WdError(v36);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v27);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v45);
  return (unsigned int)v5;
}
