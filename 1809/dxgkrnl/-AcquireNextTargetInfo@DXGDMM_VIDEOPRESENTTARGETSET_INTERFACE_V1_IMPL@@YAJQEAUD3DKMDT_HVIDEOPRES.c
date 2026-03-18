/*
 * XREFs of ?AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@PEAPEBU3@@Z @ 0x1C027FB40
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000A6D0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C001FA88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0282BDC (--$AcquireDdiEnumeratorCachedTargetInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const GUID *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a4)
{
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  const struct DMMVIDEOPRESENTTARGET *(__fastcall *v34)(DMMVIDEOPRESENTTARGETSET *, const struct DMMVIDEOPRESENTTARGET *const); // [rsp+20h] [rbp-50h] BYREF
  int v35; // [rsp+28h] [rbp-48h]
  __int64 v36; // [rsp+30h] [rbp-40h]
  int v37; // [rsp+40h] [rbp-30h] BYREF
  __int64 v38; // [rsp+48h] [rbp-28h]
  char v39; // [rsp+50h] [rbp-20h]
  __int64 v40; // [rsp+68h] [rbp-8h]
  __int64 v41; // [rsp+A0h] [rbp+30h] BYREF

  v37 = -1;
  v38 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 6046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6046);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 6046);
  if ( !a3 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v8[3] = 0LL;
    v8[4] = a2;
    v8[5] = this;
    WdLogEvent5_WdError(v8);
    v9 = -1073741811;
LABEL_25:
    v20 = v9;
    goto LABEL_26;
  }
  *(_QWORD *)&a3->Data1 = 0LL;
  v11 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    v9 = -1071774954;
    goto LABEL_25;
  }
  v13 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v13 || *(_DWORD *)v13 != 305419896 )
  {
    v30 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v30 + 24) = v13;
    WdLogEvent5_WdError(v30);
    v9 = -1071774971;
    goto LABEL_25;
  }
  v14 = *(_QWORD *)(v13 + 8);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
          v11 + 8,
          v14) )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = v13;
    *(_QWORD *)(v17 + 32) = v11;
    WdLogEvent5_WdError(v17);
    v9 = -1071774928;
    goto LABEL_25;
  }
  v35 = 0;
  v41 = 0LL;
  v34 = DMMVIDEOPRESENTTARGETSET::GetNextTarget;
  v40 = v14;
  v36 = v14;
  v20 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET,DMMVIDEOPRESENTTARGET const *>>>(
          v11,
          &v34,
          &v41);
  if ( v20 == -1071774971 )
  {
    v23 = WdLogNewEntry5_WdTrace(v19, v18, v21, v22);
    v25 = v41 == 0;
    *(_QWORD *)(v23 + 24) = v11;
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v26);
    }
    v9 = 1075708748;
    goto LABEL_25;
  }
  if ( v20 >= 0 )
  {
    v28 = v41;
    if ( !v41 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v29);
    }
    *(_QWORD *)&a3->Data1 = v28;
    v20 = 0;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v27 + 24) = v13;
    *(_QWORD *)(v27 + 32) = v11;
    WdLogEvent5_WdError(v27);
  }
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v37);
  return (unsigned int)v20;
}
