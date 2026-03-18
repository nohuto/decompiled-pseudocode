/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0284F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007094 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000BAA0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00D8628 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v19; // rcx
  _DWORD *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v32; // zf
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int128 v40; // [rsp+20h] [rbp-50h]
  int v41; // [rsp+38h] [rbp-38h] BYREF
  __int64 v42; // [rsp+40h] [rbp-30h]
  char v43; // [rsp+48h] [rbp-28h]
  __int128 v44; // [rsp+50h] [rbp-20h] BYREF
  __int64 v45; // [rsp+60h] [rbp-10h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v46; // [rsp+90h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 13);
  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 7002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v7, &EventProfilerEnter, v8, 7002);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 7002);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = a2;
  v13[4] = this;
  v13[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v17 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v17 )
    {
      v19 = a2 - 4;
      v20 = (_DWORD *)((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL));
      if ( v20 && *v20 == 305419896 )
      {
        v21 = *(_QWORD *)(((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL)) + 8);
        if ( !v21 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v22);
        }
        if ( DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
               v17 + 32,
               v21) )
        {
          DWORD2(v40) = 0;
          v46 = 0LL;
          *(_QWORD *)&v40 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v44 = v40;
          v45 = v21;
          v25 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
                  v17,
                  (__int64)&v44,
                  &v46);
          a2 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *const)v25;
          if ( v25 == -1071774902 )
          {
            v30 = WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
            v32 = v46 == 0LL;
            *(_QWORD *)(v30 + 24) = v17;
            if ( !v32 )
            {
              v33 = WdLogNewEntry5_WdAssertion(v31);
              WdLogEvent5_WdAssertion(v33);
            }
            LODWORD(a2) = 1075708748;
          }
          else if ( v25 >= 0 )
          {
            a2 = v46;
            if ( !v46 )
            {
              v35 = WdLogNewEntry5_WdAssertion(v27);
              WdLogEvent5_WdAssertion(v35);
            }
            *(_QWORD *)&a3->Id = a2;
            LODWORD(a2) = 0;
          }
          else
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdError(v27);
            v34[3] = v20;
            v34[4] = v17;
            v34[5] = a2;
            WdLogEvent5_WdError(v34);
          }
        }
        else
        {
          v24 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v24 + 24) = v20;
          *(_QWORD *)(v24 + 32) = v17;
          WdLogEvent5_WdError(v24);
          LODWORD(a2) = -1071774928;
        }
      }
      else
      {
        v36 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v36 + 24) = a2;
        WdLogEvent5_WdError(v36);
        LODWORD(a2) = -1071774960;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      LODWORD(a2) = -1071774968;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v15[3] = 0LL;
    v15[4] = a2;
    v15[5] = this;
    WdLogEvent5_WdError(v15);
    LODWORD(a2) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v41);
  return (unsigned int)a2;
}
