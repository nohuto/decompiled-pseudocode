/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x140837D64
 * Callers:
 *     CmpCopySyncTree2 @ 0x140836060 (CmpCopySyncTree2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x1406D8E24 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407122F0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x140836C3C (CmpInitializeKeyNameString.c)
 *     CmpDeleteTree @ 0x14083C8B4 (CmpDeleteTree.c)
 */

bool __fastcall CmpSyncSubKeysAfterDelete(__int64 a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, unsigned __int64 a5)
{
  unsigned int v5; // r15d
  int SubKeyByNumber; // ebx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int BugCheckParameter3; // [rsp+20h] [rbp-20h] BYREF
  int BugCheckParameter3_4; // [rsp+24h] [rbp-1Ch] BYREF
  _DWORD v15[2]; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF

  v15[0] = -1;
  v5 = 0;
  v15[1] = 0;
  v16[0] = 0LL;
  v16[1] = 0LL;
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v5, &BugCheckParameter3);
    if ( SubKeyByNumber < 0 || BugCheckParameter3 == -1 )
      return SubKeyByNumber >= 0;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, BugCheckParameter3, v15);
    v11 = v10;
    if ( !v10 )
    {
      SubKeyByNumber = -1073741670;
LABEL_13:
      if ( v11 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v15);
      return SubKeyByNumber >= 0;
    }
    CmpInitializeKeyNameString(v10, (__int64)v16, a5);
    CmpFindSubKeyByNameWithStatus(a1, a2, (unsigned __int16 *)v16, &BugCheckParameter3_4);
    if ( BugCheckParameter3_4 == -1 )
    {
      if ( *(_DWORD *)(v11 + 20) + *(_DWORD *)(v11 + 24) )
        CmpDeleteTree(a3);
      SubKeyByNumber = CmpFreeKeyByCell(a3, BugCheckParameter3, 1);
      if ( SubKeyByNumber < 0 )
        goto LABEL_13;
    }
    else
    {
      ++v5;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v15);
  }
}
