/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x1407FFB48
 * Callers:
 *     CmpCopySyncTree2 @ 0x1407FDE04 (CmpCopySyncTree2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x1406B3F28 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14073E2EC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x1407FE9EC (CmpInitializeKeyNameString.c)
 *     CmpDeleteTree @ 0x140804698 (CmpDeleteTree.c)
 */

bool __fastcall CmpSyncSubKeysAfterDelete(__int64 a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, _WORD *a5)
{
  unsigned int v5; // r14d
  int SubKeyByNumber; // ebx
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rsi
  unsigned int v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+24h] [rbp-34h] BYREF
  _DWORD v16[2]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int16 v17[20]; // [rsp+30h] [rbp-28h] BYREF

  v16[0] = -1;
  v5 = 0;
  v16[1] = 0;
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v5, &v14);
    if ( SubKeyByNumber < 0 || v14 == -1 )
      return SubKeyByNumber >= 0;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v14, v16);
    v12 = v11;
    if ( !v11 )
    {
      SubKeyByNumber = -1073741670;
LABEL_13:
      if ( v12 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v16);
      return SubKeyByNumber >= 0;
    }
    CmpInitializeKeyNameString(v11, (__int64)v17, a5);
    CmpFindSubKeyByNameWithStatus(a1, a2, v17, &v15);
    if ( v15 == -1 )
    {
      if ( *(_DWORD *)(v12 + 20) + *(_DWORD *)(v12 + 24) )
        CmpDeleteTree(a3, v14);
      SubKeyByNumber = CmpFreeKeyByCell(a3, v14, 1);
      if ( SubKeyByNumber < 0 )
        goto LABEL_13;
    }
    else
    {
      ++v5;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v16);
  }
}
