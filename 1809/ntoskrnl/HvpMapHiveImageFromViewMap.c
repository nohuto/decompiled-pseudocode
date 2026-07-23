/*
 * XREFs of HvpMapHiveImageFromViewMap @ 0x1405FAC30
 * Callers:
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmpClaimGlobalQuota @ 0x1405A8334 (CmpClaimGlobalQuota.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1405FACD0 (HvpViewMapFindViewForFileOffset.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMapHiveImageFromViewMap(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edi
  char v6; // al
  __int64 v7; // r11
  bool v8; // zf
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int64 ViewForFileOffset; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r10

  v5 = a2;
  v6 = CmpClaimGlobalQuota(a3, a2);
  LODWORD(v7) = 0;
  if ( v6 )
  {
    v8 = v5 + a3 == 0;
    v9 = v5 + a3;
    v10 = 0;
    if ( !v8 )
    {
      do
      {
        HvpGetCellMap(a1, v10);
        v10 += 4096;
        ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1 + 216, v10);
        v13 = v12 + *(_QWORD *)(ViewForFileOffset + 56) - *(_QWORD *)(ViewForFileOffset + 24);
        *(_QWORD *)v14 = v7;
        *(_DWORD *)(v14 + 16) = 4096;
        *(_QWORD *)(v14 + 8) = v13 | 1;
      }
      while ( v10 < v9 );
    }
  }
  else
  {
    LODWORD(v7) = -1073741670;
  }
  return (unsigned int)v7;
}
