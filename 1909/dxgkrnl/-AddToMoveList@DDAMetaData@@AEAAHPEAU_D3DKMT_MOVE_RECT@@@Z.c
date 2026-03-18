/*
 * XREFs of ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C0278BA4
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C0279E60 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014F718 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0279FFC (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToMoveList(DDAMetaData *this, struct _D3DKMT_MOVE_RECT *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  unsigned int v6; // ebx
  _QWORD *Buffer; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _D3DKMT_PRESENT_RGNS v16; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 11);
  v4 = *((_DWORD *)this + 10);
  if ( v2 >= v4 )
  {
    *(&v16.DirtyRectCount + 1) = 0;
    v16.pDirtyRects = &a2->DestRect;
    v16.DirtyRectCount = 1;
    *(_OWORD *)&v16.MoveRectCount = 0LL;
    if ( !(unsigned int)DDAMetaData::ProcessNewDirtyRects(this, &v16) )
    {
      v10 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v10 + 24) = 1013LL;
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) / 0x18u == v2 )
    {
      v6 = v2 + 4;
      if ( v6 >= v4 )
        v6 = v4;
    }
    else
    {
      v6 = v2 + 1;
    }
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)this + 6), 24 * v6, 1);
    if ( !Buffer )
    {
      v10 = WdLogNewEntry5_WdError(v8, 0LL, v9);
      *(_QWORD *)(v10 + 24) = v6;
LABEL_9:
      WdLogEvent5_WdError(v10);
      return 0LL;
    }
    v12 = 3LL * *((unsigned int *)this + 11);
    *(_OWORD *)&Buffer[v12] = *(_OWORD *)&a2->SourcePoint.x;
    Buffer[v12 + 2] = *(_QWORD *)&a2->DestRect.right;
    ++*((_DWORD *)this + 11);
  }
  return 1LL;
}
