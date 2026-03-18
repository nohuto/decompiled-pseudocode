/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C00D9990
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002EE0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00D9B0C (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v15; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rcx
  const GUID *v28; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int128 v38; // [rsp+20h] [rbp-50h]
  int v39; // [rsp+38h] [rbp-38h] BYREF
  __int64 v40; // [rsp+40h] [rbp-30h]
  char v41; // [rsp+48h] [rbp-28h]
  __int128 v42; // [rsp+50h] [rbp-20h] BYREF
  __int64 v43; // [rsp+60h] [rbp-10h]
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v44; // [rsp+90h] [rbp+20h] BYREF

  v6 = this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 19);
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 7037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v7, &EventProfilerEnter, v8, 7037);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 7037);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = a2;
  v13[4] = v6;
  v13[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->VidPnSourceId = 0LL;
    if ( v6 && *((_DWORD *)v6 + 46) == 1833173002 )
      v15 = v6;
    else
      v15 = 0LL;
    if ( v15 )
    {
      v16 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
      if ( v16 && *(_DWORD *)v16 == 305419896 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        if ( !v17 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v32);
        }
        if ( DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
               (__int64)v15 + 8,
               v17) )
        {
          DWORD2(v38) = 0;
          v44 = 0LL;
          *(_QWORD *)&v38 = DMMVIDPNTOPOLOGY::GetNextPath;
          v42 = v38;
          v43 = v17;
          v19 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
                  v15,
                  &v42,
                  &v44,
                  1LL,
                  DMMVIDPNTOPOLOGY::GetNextPath,
                  0,
                  v17,
                  v39,
                  v40);
          v6 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v19;
          if ( v19 == -1071774937 )
          {
            v24 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
            v26 = v44 == 0LL;
            *(_QWORD *)(v24 + 24) = v15;
            if ( !v26 )
            {
              v34 = WdLogNewEntry5_WdAssertion(v25);
              WdLogEvent5_WdAssertion(v34);
            }
            LODWORD(v6) = 1075708748;
          }
          else if ( v19 >= 0 )
          {
            v6 = v44;
            if ( !v44 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v21);
              WdLogEvent5_WdAssertion(v36);
            }
            *(_QWORD *)&a3->VidPnSourceId = v6;
            LODWORD(v6) = 0;
          }
          else
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdError(v21);
            v35[3] = v16;
            v35[4] = v15;
            v35[5] = v6;
            WdLogEvent5_WdError(v35);
          }
        }
        else
        {
          v33 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v33 + 24) = v16;
          *(_QWORD *)(v33 + 32) = v15;
          WdLogEvent5_WdError(v33);
          LODWORD(v6) = -1071774928;
        }
      }
      else
      {
        v37 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v37 + 24) = v16;
        WdLogEvent5_WdError(v37);
        LODWORD(v6) = -1071774951;
      }
    }
    else
    {
      v31 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v31 + 24) = v6;
      WdLogEvent5_WdError(v31);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v30[3] = 0LL;
    v30[4] = a2;
    v30[5] = v6;
    WdLogEvent5_WdError(v30);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v39);
  return (unsigned int)v6;
}
