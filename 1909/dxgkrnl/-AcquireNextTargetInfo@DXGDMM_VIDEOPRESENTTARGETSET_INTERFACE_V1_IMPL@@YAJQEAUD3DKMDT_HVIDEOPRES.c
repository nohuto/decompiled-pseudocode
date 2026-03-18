/*
 * XREFs of ?AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@PEAPEBU3@@Z @ 0x1C02B7F90
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0006080 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C00220BC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C02BAF50 (--$AcquireDdiEnumeratorCachedTargetInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const GUID *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  const GUID *v37; // r8
  const struct DMMVIDEOPRESENTTARGET *(__fastcall *v39)(DMMVIDEOPRESENTTARGETSET *, const struct DMMVIDEOPRESENTTARGET *const); // [rsp+20h] [rbp-50h] BYREF
  int v40; // [rsp+28h] [rbp-48h]
  __int64 v41; // [rsp+30h] [rbp-40h]
  int v42; // [rsp+40h] [rbp-30h] BYREF
  __int64 v43; // [rsp+48h] [rbp-28h]
  char v44; // [rsp+50h] [rbp-20h]
  __int64 v45; // [rsp+68h] [rbp-8h]
  __int64 v46; // [rsp+A0h] [rbp+30h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v44 = 1;
    v42 = 6046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6046);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 6046LL);
  if ( !a3 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v10[3] = 0LL;
    v10[4] = a2;
    v10[5] = this;
    WdLogEvent5_WdError(v10);
    v12 = -1073741811;
LABEL_25:
    v26 = v12;
    goto LABEL_26;
  }
  *(_QWORD *)&a3->Data1 = 0LL;
  v15 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
  if ( !v15 )
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v16);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    v12 = -1071774954;
    goto LABEL_25;
  }
  v18 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v18 || *(_DWORD *)v18 != 305419896 )
  {
    v35 = WdLogNewEntry5_WdError(v14, v13, v16);
    *(_QWORD *)(v35 + 24) = v18;
    WdLogEvent5_WdError(v35);
    v12 = -1071774971;
    goto LABEL_25;
  }
  v19 = *(_QWORD *)(v18 + 8);
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
          v15 + 8,
          v19) )
  {
    v24 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v24 + 24) = v18;
    *(_QWORD *)(v24 + 32) = v15;
    WdLogEvent5_WdError(v24);
    v12 = -1071774928;
    goto LABEL_25;
  }
  v40 = 0;
  v46 = 0LL;
  v39 = DMMVIDEOPRESENTTARGETSET::GetNextTarget;
  v45 = v19;
  v41 = v19;
  v26 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET,DMMVIDEOPRESENTTARGET const *>>>(
          v15,
          &v39,
          &v46);
  if ( v26 == -1071774971 )
  {
    v28 = WdLogNewEntry5_WdTrace(v25, v11);
    v30 = v46 == 0;
    *(_QWORD *)(v28 + 24) = v15;
    if ( !v30 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29, v11);
      WdLogEvent5_WdAssertion(v31);
    }
    v12 = 1075708748;
    goto LABEL_25;
  }
  if ( v26 >= 0 )
  {
    v33 = v46;
    if ( !v46 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v25, v11);
      WdLogEvent5_WdAssertion(v34);
    }
    *(_QWORD *)&a3->Data1 = v33;
    v26 = 0;
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v25, v11, v27);
    *(_QWORD *)(v32 + 24) = v18;
    *(_QWORD *)(v32 + 32) = v15;
    WdLogEvent5_WdError(v32);
  }
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v11);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v42);
  return (unsigned int)v26;
}
