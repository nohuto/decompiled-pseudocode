/*
 * XREFs of ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0244470
 * Callers:
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C024302C (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0243140 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C0244228 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C02442D0 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0243FA8 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0244144 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewDirtyRects(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  UINT DirtyRectCount; // eax
  UINT v3; // edi
  struct tagRECT *pDirtyRects; // rbx
  __int64 v7; // rcx
  UINT v8; // edi
  __int64 v9; // rcx
  __int64 v11; // rax

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
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = 701LL;
  }
  else
  {
LABEL_5:
    v8 = 0;
    if ( !DirtyRectCount )
      return 1LL;
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstDirtyList(this, pDirtyRects) )
    {
      ++v8;
      ++pDirtyRects;
      if ( v8 >= a2->DirtyRectCount )
        return 1LL;
    }
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v8;
    *(_QWORD *)(v11 + 32) = pDirtyRects;
  }
  WdLogEvent5_WdError(v11);
  return 0LL;
}
