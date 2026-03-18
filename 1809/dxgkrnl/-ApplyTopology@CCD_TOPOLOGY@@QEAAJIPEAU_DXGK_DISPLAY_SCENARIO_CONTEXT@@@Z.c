/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01372F4
 * Callers:
 *     DxgkApplyPathsModality @ 0x1C0137200 (DxgkApplyPathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C013EC74 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C00AEF34 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C0288084 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C0288AD0 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(CCD_TOPOLOGY *this, DWORD a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v6; // r8
  bool v7; // di
  int active; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 v14; // dx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int16 v22; // ax
  __int64 v23; // rax
  unsigned int i; // r9d
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  _BYTE v29[64]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v30; // [rsp+60h] [rbp-20h]
  unsigned __int8 v31; // [rsp+B0h] [rbp+30h] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v29, 8u, 0);
  v7 = (*((_BYTE *)this + 84) & 1) == 0;
  if ( (*((_BYTE *)this + 84) & 1) == 0 )
  {
    active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)v29, v6);
    v10 = active;
    if ( active < 0 )
      goto LABEL_30;
    if ( active == 255 )
      v7 = 0;
  }
  if ( !v7 )
  {
    LODWORD(v10) = CCD_TOPOLOGY::ApplyTopologyWorker(this, a2, a3);
    goto LABEL_7;
  }
  if ( v30 )
    v12 = *(unsigned __int16 *)(v30 + 20);
  else
    v12 = 0LL;
  v13 = *((_QWORD *)this + 8);
  if ( v13 )
    v14 = *(_WORD *)(v13 + 20);
  else
    v14 = 0;
  if ( (unsigned __int16)v12 <= v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = CCD_TOPOLOGY::ApplyTopologyWorker((CCD_TOPOLOGY *)v29, a2, a3);
  v10 = v16;
  if ( v16 < 0 )
    goto LABEL_30;
  v31 = 0;
  CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v29, &v31);
  if ( !v31 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = *((_QWORD *)this + 8);
  if ( v19 )
    v20 = *(unsigned __int16 *)(v19 + 20);
  else
    v20 = 0LL;
  v21 = v30;
  if ( v30 )
    v22 = *(_WORD *)(v30 + 20);
  else
    v22 = 0;
  if ( (_WORD)v20 != v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v23);
    v21 = v30;
  }
  for ( i = 0;
        i < *(_DWORD *)(v21 + 36);
        *(_DWORD *)(*(_QWORD *)(v21 + 40) + v26 + 76) &= ~*(_DWORD *)(*(_QWORD *)(v21 + 40) + 324 * v25 + 220) )
  {
    v25 = i++;
    v26 = 324 * v25;
    *(_DWORD *)(*(_QWORD *)(v21 + 40) + v26 + 80) &= ~*(_DWORD *)(*(_QWORD *)(v21 + 40) + 324 * v25 + 220);
  }
  v27 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v29);
  v10 = v27;
  if ( v27 < 0 )
  {
LABEL_30:
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = v10;
    WdLogEvent5_WdError(v28);
  }
LABEL_7:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v29);
  return (unsigned int)v10;
}
