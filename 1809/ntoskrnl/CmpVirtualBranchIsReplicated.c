/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x1407F4FBC
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F4BE8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F4DB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpBlockTwoHiveWrites @ 0x1407F1954 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x1407F1BF0 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x1407F40A4 (CmpFindPathByName.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1407F4544 (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualBranchIsReplicated(__int64 a1, __m128i *a2, char *a3)
{
  char *v6; // r15
  _QWORD *v7; // r14
  char PathByName; // al
  __int64 v11; // rsi
  char v12; // di
  __int64 v13; // rax
  bool v14; // zf
  char v15; // al
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // dx
  UNICODE_STRING v18; // [rsp+30h] [rbp-10h] BYREF
  PVOID v19; // [rsp+80h] [rbp+40h] BYREF
  int v20; // [rsp+90h] [rbp+50h] BYREF
  int v21; // [rsp+94h] [rbp+54h]
  __int64 v22; // [rsp+98h] [rbp+58h] BYREF

  v20 = -1;
  v21 = 0;
  *(_QWORD *)&v18.Length = 0LL;
  v18.Buffer = 0LL;
  v19 = 0LL;
  *a3 = 0;
  v6 = 0LL;
  if ( a1 )
  {
    if ( !a2->m128i_i16[0] )
      return CmpVEEnabled && (*(_DWORD *)(a1 + 176) & 0x1000000) != 0;
    v7 = *(_QWORD **)(a1 + 24);
  }
  else
  {
    if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a2, (__int64)&v19) < 0 )
      return 0;
    v6 = (char *)CmpMasterHive;
    v7 = v19;
  }
  if ( (int)CmpBlockTwoHiveWrites((__int64)v6, (__int64)v7, 1) < 0 )
    return 0;
  PathByName = CmpFindPathByName(a1, a2, &v18, (unsigned int *)&v19, &v22);
  v11 = v22;
  v12 = PathByName;
  if ( v22 && (v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v22 + 8))(v22, (unsigned int)v19, &v20)) != 0 )
  {
    if ( v12 )
    {
      if ( !CmpVEEnabled || (*(_WORD *)(v13 + 2) & 0x100) == 0 )
        v12 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v14 = (*(_WORD *)(v13 + 2) & 0x100) == 0, v15 = 1, v14) )
        v15 = 0;
      v16 = 0;
      v17 = v18.Length >> 1;
      *a3 = v15;
      if ( v17 )
      {
        while ( v18.Buffer[v16] != 92 )
        {
          if ( ++v16 >= v17 )
            goto LABEL_28;
        }
        *a3 = 0;
      }
    }
LABEL_28:
    (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v20);
  }
  else
  {
    v12 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v7);
  return v12;
}
