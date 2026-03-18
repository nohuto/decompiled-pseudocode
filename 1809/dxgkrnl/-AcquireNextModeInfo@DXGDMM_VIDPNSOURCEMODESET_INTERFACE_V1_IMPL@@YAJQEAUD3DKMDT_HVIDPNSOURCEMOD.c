/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C00D84D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007094 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000BAA0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00D8628 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const GUID *a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  _DWORD *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // rbx
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  bool v27; // zf
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v36)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const); // [rsp+20h] [rbp-50h] BYREF
  int v37; // [rsp+28h] [rbp-48h]
  __int64 v38; // [rsp+30h] [rbp-40h]
  int v39; // [rsp+40h] [rbp-30h] BYREF
  __int64 v40; // [rsp+48h] [rbp-28h]
  char v41; // [rsp+50h] [rbp-20h]
  __int64 v42; // [rsp+68h] [rbp-8h]
  __int64 v43; // [rsp+A0h] [rbp+30h] BYREF

  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 6004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6004);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 6004);
  if ( a3 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    v9 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      v10 = a2 - 16;
      v11 = -a2;
      v12 = (_DWORD *)(v10 & -(__int64)(v11 != 0));
      if ( v12 && *v12 == 305419896 )
      {
        v13 = *(_QWORD *)((v10 & -(__int64)(v11 != 0)) + 8);
        if ( !v13 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v8);
          WdLogEvent5_WdAssertion(v30);
        }
        if ( DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
               v9 + 32,
               v13) )
        {
          v37 = 0;
          v43 = 0LL;
          v36 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v42 = v13;
          v38 = v13;
          v15 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
                  v9,
                  &v36,
                  &v43);
          v20 = v15;
          if ( v15 == -1071774902 )
          {
            v25 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
            v27 = v43 == 0;
            *(_QWORD *)(v25 + 24) = v9;
            if ( !v27 )
            {
              v32 = WdLogNewEntry5_WdAssertion(v26);
              WdLogEvent5_WdAssertion(v32);
            }
            v20 = 1075708748;
          }
          else if ( v15 < 0 )
          {
            v33 = WdLogNewEntry5_WdDmmEvent(v17, v16, v18, v19);
            *(_QWORD *)(v33 + 24) = v12;
            *(_QWORD *)(v33 + 32) = v9;
            WdLogEvent5_WdDmmEvent(v33);
          }
          else
          {
            v21 = v43;
            if ( !v43 )
            {
              v34 = WdLogNewEntry5_WdAssertion(v17);
              WdLogEvent5_WdAssertion(v34);
            }
            *(_QWORD *)&a3->Data1 = v21;
            v20 = 0;
          }
        }
        else
        {
          v31 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v31 + 24) = v12;
          *(_QWORD *)(v31 + 32) = v9;
          WdLogEvent5_WdError(v31);
          v20 = -1071774928;
        }
      }
      else
      {
        v35 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v35 + 24) = v12;
        WdLogEvent5_WdError(v35);
        v20 = -1071774960;
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v29 + 24) = this;
      WdLogEvent5_WdError(v29);
      v20 = -1071774968;
    }
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v28[3] = 0LL;
    v28[4] = a2;
    v28[5] = this;
    WdLogEvent5_WdError(v28);
    v20 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v39);
  return v20;
}
