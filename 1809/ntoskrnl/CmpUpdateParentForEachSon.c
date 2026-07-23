/*
 * XREFs of CmpUpdateParentForEachSon @ 0x1408015F8
 * Callers:
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140804C84 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1406B3F28 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpUpdateParentForEachSon(__int64 a1, __int64 a2, char a3)
{
  int v3; // r15d
  __int64 v5; // rax
  char v6; // bl
  _DWORD *v7; // r14
  unsigned int v8; // ebp
  unsigned int v9; // esi
  __int64 v10; // rax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF
  int v16; // [rsp+6Ch] [rbp+24h]

  LOBYTE(v14) = a3;
  v15 = -1;
  v12 = -1;
  v16 = 0;
  v3 = a2;
  v13 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v15);
  v6 = 0;
  v7 = (_DWORD *)v5;
  if ( v5 )
  {
    v8 = 0;
    v9 = *(_DWORD *)(v5 + 20) + *(_DWORD *)(v5 + 24);
    if ( v9 )
    {
      while ( 1 )
      {
        CmpFindSubKeyByNumber(a1, v7, v8, &v14);
        if ( v14 == -1 )
          break;
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v14, &v12);
        if ( !v10 )
          break;
        *(_DWORD *)(v10 + 16) = v3;
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
        if ( ++v8 >= v9 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = 1;
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v15);
  }
  return v6;
}
