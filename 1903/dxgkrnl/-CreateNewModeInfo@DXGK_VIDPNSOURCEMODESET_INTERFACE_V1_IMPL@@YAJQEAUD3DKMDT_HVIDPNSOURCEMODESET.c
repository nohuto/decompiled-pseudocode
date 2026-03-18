/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0138D00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v13; // rdi
  _DWORD *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rbx
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+28h] [rbp-20h]
  char v35; // [rsp+30h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 11);
  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 7005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v5, &EventProfilerEnter, v6, 7005);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 7005LL);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
      v13 = this;
    else
      v13 = 0LL;
    if ( v13 )
    {
      v14 = 0LL;
      v15 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
      v20 = v15;
      if ( v15 )
      {
        v15[1] = 0LL;
        *(_DWORD *)v15 = 305419896;
        memset(v15 + 2, 0, 0x28uLL);
      }
      else
      {
        v20 = 0LL;
      }
      if ( v20 )
      {
        operator delete(0LL);
        ++*((_DWORD *)v13 + 20);
        v14 = v20 + 2;
        v21 = *((_DWORD *)v13 + 20);
        *((_DWORD *)v20 + 5) = 0;
        v22 = 0;
        *v14 = v21;
      }
      else
      {
        v31 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
        WdLogEvent5_WdLowResource(v31);
        v22 = -1073741801;
      }
      operator delete(0LL);
      if ( v22 < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v24, v23, v25);
        *(_QWORD *)(v32 + 24) = v22;
        WdLogEvent5_WdError(v32);
      }
      else
      {
        *(_QWORD *)a2 = v14;
        v22 = 0;
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v30 + 24) = this;
      WdLogEvent5_WdError(v30);
      v22 = -1071774968;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v29 + 24) = 0LL;
    WdLogEvent5_WdError(v29);
    v22 = -1071774960;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v23);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v33);
  return (unsigned int)v22;
}
