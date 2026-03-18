/*
 * XREFs of ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0279960
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0278554 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C0279658 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C0279700 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewMoveRegions(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  D3DKMT_MOVE_RECT *pMoveRects; // rbx
  UINT v3; // edi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v15; // [rsp+28h] [rbp-30h] BYREF

  pMoveRects = (D3DKMT_MOVE_RECT *)a2->pMoveRects;
  v3 = 0;
  *(_QWORD *)&v15.left = 0LL;
  *(_QWORD *)&v15.right = 0LL;
  result = 1LL;
  if ( a2->MoveRectCount )
  {
    while ( 1 )
    {
      v15.left = pMoveRects->SourcePoint.x;
      v15.right = pMoveRects->SourcePoint.x + pMoveRects->DestRect.right - pMoveRects->DestRect.left;
      v15.top = pMoveRects->SourcePoint.y;
      v15.bottom = pMoveRects->SourcePoint.y + pMoveRects->DestRect.bottom - pMoveRects->DestRect.top;
      result = DDAMetaData::ProcessMoveAgainstDirtyList(this, pMoveRects, &v15, &v14);
      if ( !(_DWORD)result )
        break;
      if ( v14 )
      {
        result = DDAMetaData::ProcessMoveAgainstMoveList(this, pMoveRects, &v15);
        if ( !(_DWORD)result )
        {
          v13 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v13 + 24) = 679LL;
          goto LABEL_9;
        }
      }
      ++v3;
      ++pMoveRects;
      if ( v3 >= a2->MoveRectCount )
        return result;
    }
    v13 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v13 + 24) = 666LL;
LABEL_9:
    WdLogEvent5_WdError(v13);
    return 0LL;
  }
  return result;
}
