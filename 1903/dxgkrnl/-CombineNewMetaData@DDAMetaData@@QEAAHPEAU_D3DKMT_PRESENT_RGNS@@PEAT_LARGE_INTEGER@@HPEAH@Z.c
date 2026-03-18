/*
 * XREFs of ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0278554
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C027A31C (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C027880C (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C027989C (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0279960 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::CombineNewMetaData(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        const GUID *a3,
        int a4,
        int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  const GUID *v18; // r8
  int v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  char v22; // [rsp+30h] [rbp-18h]

  v20 = -1;
  v21 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 11000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 11000);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 11000LL);
  v11 = DDAMetaData::ProcessNewMoveRegions(this, a2);
  if ( !v11 )
    goto LABEL_6;
  v11 = DDAMetaData::ProcessNewDirtyRects(this, a2);
  if ( !v11 )
    goto LABEL_6;
  if ( !*((_QWORD *)this + 8) )
  {
    v14 = 0;
    goto LABEL_12;
  }
  v11 = DDAMetaData::ConvertGdiRgnToRects(this);
  if ( !v11 )
  {
LABEL_6:
    v13 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    goto LABEL_15;
  }
  v14 = 1;
LABEL_12:
  *a5 = v14;
  *((_QWORD *)this + 1) = *(_QWORD *)&a3->Data1;
  if ( a4 )
    *(_DWORD *)this = 1;
  ++*((_DWORD *)this + 1);
LABEL_15:
  v15 = *((_QWORD *)this + 8);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)this + 7) + 128LL))(v15, v9);
    *((_QWORD *)this + 8) = 0LL;
  }
  v16 = *((_QWORD *)this + 9);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)this + 7) + 128LL))(v16, v9);
    *((_QWORD *)this + 9) = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20, v9);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v20);
  return v11;
}
