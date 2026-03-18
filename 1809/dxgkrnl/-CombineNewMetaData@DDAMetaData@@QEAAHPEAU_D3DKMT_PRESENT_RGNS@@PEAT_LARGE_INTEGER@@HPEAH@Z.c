/*
 * XREFs of ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0243140
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C0244EA0 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C02433F8 (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0244470 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0244534 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::CombineNewMetaData(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        const GUID *a3,
        int a4,
        int *a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  const GUID *v17; // r8
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h]

  v19 = -1;
  v20 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v21 = 1;
    v19 = 11000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 11000);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 11000);
  v10 = DDAMetaData::ProcessNewMoveRegions(this, a2);
  if ( !v10 )
    goto LABEL_6;
  v10 = DDAMetaData::ProcessNewDirtyRects(this, a2);
  if ( !v10 )
    goto LABEL_6;
  if ( !*((_QWORD *)this + 8) )
  {
    v13 = 0;
    goto LABEL_12;
  }
  v10 = DDAMetaData::ConvertGdiRgnToRects(this);
  if ( !v10 )
  {
LABEL_6:
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    goto LABEL_15;
  }
  v13 = 1;
LABEL_12:
  *a5 = v13;
  *((_QWORD *)this + 1) = *(_QWORD *)&a3->Data1;
  if ( a4 )
    *(_DWORD *)this = 1;
  ++*((_DWORD *)this + 1);
LABEL_15:
  v14 = *((_QWORD *)this + 8);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)this + 7) + 128LL))(v14, v12);
    *((_QWORD *)this + 8) = 0LL;
  }
  v15 = *((_QWORD *)this + 9);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)this + 7) + 128LL))(v15, v12);
    *((_QWORD *)this + 9) = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v19);
  return v10;
}
