/*
 * XREFs of ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C024302C
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C02442D0 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C013B158 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0244470 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToMoveList(DDAMetaData *this, struct _D3DKMT_MOVE_RECT *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  unsigned int v6; // ebx
  _QWORD *Buffer; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _D3DKMT_PRESENT_RGNS v13; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 11);
  v4 = *((_DWORD *)this + 10);
  if ( v2 >= v4 )
  {
    memset(&v13, 0, sizeof(v13));
    v13.DirtyRectCount = 1;
    v13.pDirtyRects = &a2->DestRect;
    if ( !(unsigned int)DDAMetaData::ProcessNewDirtyRects(this, &v13) )
    {
      v9 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v9 + 24) = 1013LL;
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
      v9 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v9 + 24) = v6;
LABEL_9:
      WdLogEvent5_WdError(v9);
      return 0LL;
    }
    v11 = 3LL * *((unsigned int *)this + 11);
    *(_OWORD *)&Buffer[v11] = *(_OWORD *)&a2->SourcePoint.x;
    Buffer[v11 + 2] = *(_QWORD *)&a2->DestRect.right;
    ++*((_DWORD *)this + 11);
  }
  return 1LL;
}
