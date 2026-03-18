/*
 * XREFs of ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C0278E2C
 * Callers:
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0278A3C (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0279B2C (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C02792A0 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(DDAMetaData *this)
{
  __int64 v2; // rax
  bool v3; // zf
  struct tagRECT *DirtyRectData; // rax
  int v5; // esi
  LONG *i; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax

  *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(
                            0LL,
                            0LL,
                            0LL,
                            0LL);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(0LL, 0LL, 0LL, 0LL);
  v3 = *((_QWORD *)this + 8) == 0LL;
  *((_QWORD *)this + 9) = v2;
  if ( !v3 && v2 )
  {
    DirtyRectData = DDAMetaData::GetDirtyRectData(this, *((_DWORD *)this + 6));
    v5 = 0;
    if ( !*((_DWORD *)this + 6) )
      return 1LL;
    for ( i = &DirtyRectData->right; ; i += 4 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
             *((_QWORD *)this + 9),
             (unsigned int)*(i - 2),
             (unsigned int)*(i - 1),
             (unsigned int)*i,
             i[1]);
      if ( !v9 )
        break;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 9),
              2LL) )
      {
        v15 = WdLogNewEntry5_WdError(v12, v11, v13);
        *(_QWORD *)(v15 + 24) = 636LL;
        WdLogEvent5_WdError(v15);
        return v9;
      }
      if ( (unsigned int)++v5 >= *((_DWORD *)this + 6) )
        return 1LL;
    }
    v16 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v16 + 24) = 630LL;
    WdLogEvent5_WdError(v16);
  }
  return 0LL;
}
