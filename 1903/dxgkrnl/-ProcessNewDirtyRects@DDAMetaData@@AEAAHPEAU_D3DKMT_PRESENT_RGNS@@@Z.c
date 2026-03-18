/*
 * XREFs of ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C027989C
 * Callers:
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C0278444 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0278554 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C0279658 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C0279700 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C02793CC (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0279574 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewDirtyRects(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  UINT DirtyRectCount; // eax
  UINT v3; // edi
  struct tagRECT *pDirtyRects; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  UINT v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax

  DirtyRectCount = a2->DirtyRectCount;
  v3 = 0;
  pDirtyRects = (struct tagRECT *)a2->pDirtyRects;
  if ( a2->DirtyRectCount )
  {
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstMoveList(this, pDirtyRects) )
    {
      DirtyRectCount = a2->DirtyRectCount;
      ++v3;
      ++pDirtyRects;
      if ( v3 >= a2->DirtyRectCount )
      {
        pDirtyRects = (struct tagRECT *)a2->pDirtyRects;
        goto LABEL_5;
      }
    }
    v15 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v15 + 24) = 701LL;
  }
  else
  {
LABEL_5:
    v10 = 0;
    if ( !DirtyRectCount )
      return 1LL;
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstDirtyList(this, pDirtyRects) )
    {
      ++v10;
      ++pDirtyRects;
      if ( v10 >= a2->DirtyRectCount )
        return 1LL;
    }
    v15 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v10;
    *(_QWORD *)(v15 + 32) = pDirtyRects;
  }
  WdLogEvent5_WdError(v15);
  return 0LL;
}
