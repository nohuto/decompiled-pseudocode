/*
 * XREFs of ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0279CD4
 * Callers:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0279FFC (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0278A3C (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x1C027AE40 (-RectsOverlap@@YA-AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstMoveList(DDAMetaData *this, struct tagRECT *a2)
{
  int v2; // r14d
  unsigned int v3; // r15d
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rsi
  struct tagRECT *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v16; // rax

  v2 = 0;
  v3 = *((_DWORD *)this + 11);
  v6 = 1;
  v7 = **((_QWORD **)this + 6);
  if ( !v3 )
    return v6;
  v8 = v7 + 8;
  while ( 1 )
  {
    if ( !(unsigned int)RectsOverlap(a2, v8, 0LL) )
    {
      v7 += 24LL;
      v8 += 24LL;
      goto LABEL_7;
    }
    v6 = DDAMetaData::AddToDirtyList(this, v9);
    if ( !v6 )
      break;
    v13 = **((_QWORD **)this + 6);
    v14 = (unsigned int)--*((_DWORD *)this + 11);
    *(_OWORD *)v7 = *(_OWORD *)(v13 + 24 * v14);
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(v13 + 24 * v14 + 16);
LABEL_7:
    if ( ++v2 >= v3 )
      return v6;
  }
  v16 = WdLogNewEntry5_WdError(v11, v10, v12);
  *(_QWORD *)(v16 + 24) = 844LL;
  WdLogEvent5_WdError(v16);
  return 0LL;
}
