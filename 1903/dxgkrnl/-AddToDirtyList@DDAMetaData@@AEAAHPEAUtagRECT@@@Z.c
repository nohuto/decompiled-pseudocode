/*
 * XREFs of ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C02782DC
 * Callers:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C02793CC (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0279574 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C0279700 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C02786CC (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C0278B40 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r8d
  unsigned int v6; // edi
  __int64 v7; // rdx
  struct tagRECT *DirtyRectData; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax

  if ( !*((_QWORD *)this + 8) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 5);
    if ( v4 < v5 )
    {
      if ( (unsigned int)(((unsigned __int64)*(unsigned int *)(*((_QWORD *)this + 4) + 12LL) - 36) >> 4) == v4 )
      {
        v6 = v4 + 8;
        if ( v6 >= v5 )
          v6 = *((_DWORD *)this + 5);
      }
      else
      {
        v6 = v4 + 1;
      }
      DirtyRectData = DDAMetaData::GetDirtyRectData(this, v6);
      if ( !DirtyRectData )
      {
        v10 = WdLogNewEntry5_WdError(0LL, v7, v9);
        *(_QWORD *)(v10 + 24) = v6;
LABEL_10:
        WdLogEvent5_WdError(v10);
        return 0LL;
      }
      DirtyRectData[(*((_DWORD *)this + 6))++] = *a2;
      return 1LL;
    }
    if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
    {
      v15 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v15 + 24) = 1071LL;
LABEL_15:
      v10 = v15;
      goto LABEL_10;
    }
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
          *((_QWORD *)this + 9),
          (unsigned int)a2->left,
          (unsigned int)a2->top,
          (unsigned int)a2->right,
          a2->bottom);
  if ( !v18 )
  {
    v15 = WdLogNewEntry5_WdError(v17, v16, v19);
    *(_QWORD *)(v15 + 24) = 1080LL;
    goto LABEL_15;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 9),
         2LL) )
  {
    return 1LL;
  }
  v23 = WdLogNewEntry5_WdError(v21, v20, v22);
  *(_QWORD *)(v23 + 24) = 1086LL;
  WdLogEvent5_WdError(v23);
  return v18;
}
