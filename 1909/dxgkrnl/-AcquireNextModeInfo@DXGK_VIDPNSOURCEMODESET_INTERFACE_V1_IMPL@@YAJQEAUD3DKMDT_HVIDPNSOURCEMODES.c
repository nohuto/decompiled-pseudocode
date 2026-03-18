/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C02BD3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0003FB8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0016CF8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C017AC48 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v5; // rbx
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v22; // rcx
  _DWORD *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  bool v35; // zf
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int128 v43; // [rsp+20h] [rbp-50h]
  int v44; // [rsp+38h] [rbp-38h] BYREF
  __int64 v45; // [rsp+40h] [rbp-30h]
  char v46; // [rsp+48h] [rbp-28h]
  __int128 v47; // [rsp+50h] [rbp-20h] BYREF
  __int64 v48; // [rsp+60h] [rbp-10h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v49; // [rsp+90h] [rbp+20h] BYREF

  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 13);
  v44 = -1;
  v45 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v46 = 1;
    v44 = 7002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v7, &EventProfilerEnter, v8, 7002);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 7002LL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = v5;
  v11[4] = this;
  v11[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v19 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v19 )
    {
      v22 = v5 - 4;
      v23 = (_DWORD *)((unsigned __int64)(v5 - 4) & -(__int64)(v5 != 0LL));
      if ( v23 && *v23 == 305419896 )
      {
        v24 = *(_QWORD *)(((unsigned __int64)(v5 - 4) & -(__int64)(v5 != 0LL)) + 8);
        if ( !v24 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v22, v17);
          WdLogEvent5_WdAssertion(v25);
        }
        if ( DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
               v19 + 32,
               v24) )
        {
          DWORD2(v43) = 0;
          v49 = 0LL;
          *(_QWORD *)&v43 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v47 = v43;
          v48 = v24;
          v30 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
                  v19,
                  (__int64)&v47,
                  &v49);
          v5 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v30;
          if ( v30 == -1071774902 )
          {
            v33 = WdLogNewEntry5_WdTrace(v31, v16);
            v35 = v49 == 0LL;
            *(_QWORD *)(v33 + 24) = v19;
            if ( !v35 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v34, v16);
              WdLogEvent5_WdAssertion(v36);
            }
            LODWORD(v5) = 1075708748;
          }
          else if ( v30 >= 0 )
          {
            v5 = v49;
            if ( !v49 )
            {
              v38 = WdLogNewEntry5_WdAssertion(v31, v16);
              WdLogEvent5_WdAssertion(v38);
            }
            *(_QWORD *)&a3->Id = v5;
            LODWORD(v5) = 0;
          }
          else
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v31, v16, v32);
            v37[3] = v23;
            v37[4] = v19;
            v37[5] = v5;
            WdLogEvent5_WdError(v37);
          }
        }
        else
        {
          v29 = WdLogNewEntry5_WdError(v27, v26, v28);
          *(_QWORD *)(v29 + 24) = v23;
          *(_QWORD *)(v29 + 32) = v19;
          WdLogEvent5_WdError(v29);
          LODWORD(v5) = -1071774928;
        }
      }
      else
      {
        v39 = WdLogNewEntry5_WdError(v22, v17, v20);
        *(_QWORD *)(v39 + 24) = v5;
        WdLogEvent5_WdError(v39);
        LODWORD(v5) = -1071774960;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v18, v17, v20);
      *(_QWORD *)(v21 + 24) = this;
      WdLogEvent5_WdError(v21);
      LODWORD(v5) = -1071774968;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v15[3] = 0LL;
    v15[4] = v5;
    v15[5] = this;
    WdLogEvent5_WdError(v15);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v16);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v44);
  return (unsigned int)v5;
}
