/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C017AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0003FB8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0016CF8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C017AC48 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const GUID *a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  _DWORD *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rbx
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  bool v31; // zf
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v40)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const); // [rsp+20h] [rbp-50h] BYREF
  int v41; // [rsp+28h] [rbp-48h]
  __int64 v42; // [rsp+30h] [rbp-40h]
  int v43; // [rsp+40h] [rbp-30h] BYREF
  __int64 v44; // [rsp+48h] [rbp-28h]
  char v45; // [rsp+50h] [rbp-20h]
  __int64 v46; // [rsp+68h] [rbp-8h]
  __int64 v47; // [rsp+A0h] [rbp+30h] BYREF

  v43 = -1;
  v44 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 6004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6004);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 6004LL);
  if ( a3 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    v12 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v12 )
    {
      v14 = a2 - 16;
      v15 = -a2;
      v16 = (_DWORD *)(v14 & -(__int64)(v15 != 0));
      if ( v16 && *v16 == 305419896 )
      {
        v17 = *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 8);
        if ( !v17 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v11, v10);
          WdLogEvent5_WdAssertion(v34);
        }
        if ( DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
               v12 + 32,
               v17) )
        {
          v41 = 0;
          v47 = 0LL;
          v40 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v46 = v17;
          v42 = v17;
          v21 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
                  v12,
                  &v40,
                  &v47);
          v24 = v21;
          if ( v21 == -1071774902 )
          {
            v29 = WdLogNewEntry5_WdTrace(v23, v22);
            v31 = v47 == 0;
            *(_QWORD *)(v29 + 24) = v12;
            if ( !v31 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v30, v22);
              WdLogEvent5_WdAssertion(v36);
            }
            v24 = 1075708748;
          }
          else if ( v21 < 0 )
          {
            v37 = WdLogNewEntry5_WdDmmEvent(v23, v22);
            *(_QWORD *)(v37 + 24) = v16;
            *(_QWORD *)(v37 + 32) = v12;
            WdLogEvent5_WdDmmEvent(v37);
          }
          else
          {
            v25 = v47;
            if ( !v47 )
            {
              v38 = WdLogNewEntry5_WdAssertion(v23, v22);
              WdLogEvent5_WdAssertion(v38);
            }
            *(_QWORD *)&a3->Data1 = v25;
            v24 = 0;
          }
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v19, v18, v20);
          *(_QWORD *)(v35 + 24) = v16;
          *(_QWORD *)(v35 + 32) = v12;
          WdLogEvent5_WdError(v35);
          v24 = -1071774928;
        }
      }
      else
      {
        v39 = WdLogNewEntry5_WdError(v11, v10, v13);
        *(_QWORD *)(v39 + 24) = v16;
        WdLogEvent5_WdError(v39);
        v24 = -1071774960;
      }
    }
    else
    {
      v33 = WdLogNewEntry5_WdError(v11, v10, v13);
      *(_QWORD *)(v33 + 24) = this;
      WdLogEvent5_WdError(v33);
      v24 = -1071774968;
    }
  }
  else
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v32[3] = 0LL;
    v32[4] = a2;
    v32[5] = this;
    WdLogEvent5_WdError(v32);
    v24 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v22);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v43);
  return v24;
}
