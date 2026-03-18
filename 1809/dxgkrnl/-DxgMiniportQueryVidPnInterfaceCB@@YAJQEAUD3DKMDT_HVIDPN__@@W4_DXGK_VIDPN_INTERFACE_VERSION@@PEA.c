/*
 * XREFs of ?DxgMiniportQueryVidPnInterfaceCB@@YAJQEAUD3DKMDT_HVIDPN__@@W4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C012AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(
        struct D3DKMDT_HVIDPN__ *const a1,
        enum _DXGK_VIDPN_INTERFACE_VERSION a2,
        const struct _DXGK_VIDPN_INTERFACE **a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct D3DKMDT_HVIDPN__ *v9; // rax
  __int64 v10; // rbx
  const struct _DXGK_VIDPN_INTERFACE *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  const GUID *v14; // r8
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+28h] [rbp-20h]
  char v27; // [rsp+30h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp+18h] BYREF

  v25 = -1;
  v26 = 0LL;
  v5 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 7056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 7056);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 7056);
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a1 && *((_DWORD *)a1 + 16) == 1833172997 )
      v9 = a1;
    else
      v9 = 0LL;
    if ( v9 )
    {
      v10 = *((_QWORD *)v9 + 6);
      if ( KeGetCurrentIrql() )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, v10);
        v19 = *(_QWORD *)(v10 + 8);
        if ( !v19 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v18);
          WdLogEvent5_WdAssertion(v20);
          v19 = *(_QWORD *)(v10 + 8);
        }
        v21 = *(_QWORD *)(v19 + 16);
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)(v22 + 40) + 28LL) >= 0x2003u )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22);
          v23[3] = 275LL;
          v23[4] = 20LL;
          v23[5] = v21;
          v23[6] = 0LL;
          v23[7] = 0LL;
          WdLogEvent5_WdCriticalError(v23);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
      }
      if ( (_DWORD)v5 == 1 )
      {
        v11 = *(const struct _DXGK_VIDPN_INTERFACE **)(v10 + 368);
        v12 = 0;
        *a3 = v11;
      }
      else
      {
        *a3 = 0LL;
        v24 = WdLogNewEntry5_WdWarning(v7, v6, v8);
        *(_QWORD *)(v24 + 24) = v5;
        WdLogEvent5_WdWarning(v24);
        v12 = -1073741637;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdError(v17);
      v12 = -1071774973;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v16[3] = 0LL;
    v16[4] = v5;
    v16[5] = a1;
    WdLogEvent5_WdError(v16);
    v12 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v25);
  return v12;
}
