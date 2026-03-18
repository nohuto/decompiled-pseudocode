/*
 * XREFs of ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C0279E60
 * Callers:
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C027A0C0 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0278A3C (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C0278BA4 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0279FFC (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x1C027AE40 (-RectsOverlap@@YA-AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessMoveAgainstMoveList(
        DDAMetaData *this,
        struct _D3DKMT_MOVE_RECT *a2,
        struct tagRECT *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r14
  RECT *p_DestRect; // r12
  UINT v8; // r8d
  int v9; // ecx
  UINT v10; // ecx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r13d
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _D3DKMT_PRESENT_RGNS v31; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v6 = **((_QWORD **)this + 6);
  if ( *((_DWORD *)this + 11) )
  {
    p_DestRect = &a2->DestRect;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v6 + 4);
      v9 = *(_DWORD *)v6 + *(_DWORD *)(v6 + 16) - *(_DWORD *)(v6 + 8);
      v31.DirtyRectCount = *(_DWORD *)v6;
      LODWORD(v31.pDirtyRects) = v9;
      v10 = v8 + *(_DWORD *)(v6 + 20) - *(_DWORD *)(v6 + 12);
      *(&v31.DirtyRectCount + 1) = v8;
      HIDWORD(v31.pDirtyRects) = v10;
      v11 = RectsOverlap(p_DestRect, v6 + 8, 0LL);
      v14 = RectsOverlap(v12, &v31, v13);
      v16 = RectsOverlap(a3, v6 + 8, v15);
      if ( v11 || v14 || v16 )
        break;
      ++v3;
      v6 += 24LL;
      if ( v3 >= *((_DWORD *)this + 11) )
        goto LABEL_7;
    }
    if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, (struct tagRECT *)(v6 + 8)) )
    {
      v20 = WdLogNewEntry5_WdError(v22, v21, v23);
      *(_QWORD *)(v20 + 24) = 897LL;
      goto LABEL_11;
    }
    v25 = (__int64 *)*((_QWORD *)this + 6);
    *(&v31.DirtyRectCount + 1) = 0;
    v31.pDirtyRects = p_DestRect;
    v31.DirtyRectCount = 1;
    v26 = *v25;
    v27 = (unsigned int)--*((_DWORD *)this + 11);
    *(_OWORD *)v6 = *(_OWORD *)(v26 + 24 * v27);
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(v26 + 24 * v27 + 16);
    *(_OWORD *)&v31.MoveRectCount = 0LL;
    if ( !(unsigned int)DDAMetaData::ProcessNewDirtyRects(this, &v31) )
    {
      v20 = WdLogNewEntry5_WdError(v29, v28, v30);
      *(_QWORD *)(v20 + 24) = 905LL;
      goto LABEL_11;
    }
  }
  else
  {
LABEL_7:
    if ( !(unsigned int)DDAMetaData::AddToMoveList(this, a2) )
    {
      v20 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = 922LL;
LABEL_11:
      WdLogEvent5_WdError(v20);
      return 0LL;
    }
  }
  return 1LL;
}
