/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x1406F63B4
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406F65CC (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14082CB78 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpUnblockTwoHiveWrites @ 0x1406F6518 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x1406F67EC (CmpFindPathByName.c)
 *     CmpBlockTwoHiveWrites @ 0x1406F6B14 (CmpBlockTwoHiveWrites.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1406F6BE0 (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualBranchIsReplicated(__int64 a1, _WORD *a2, char *a3)
{
  char *v3; // r12
  PVOID v6; // r15
  PVOID v7; // r14
  char PathByName; // al
  __int64 v9; // rsi
  char v10; // di
  __int64 v11; // rax
  bool v12; // zf
  char v13; // al
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // dx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h]
  PVOID v20; // [rsp+80h] [rbp+40h] BYREF
  int v21; // [rsp+90h] [rbp+50h] BYREF
  int v22; // [rsp+94h] [rbp+54h]
  __int64 v23; // [rsp+98h] [rbp+58h] BYREF

  v21 = -1;
  v22 = 0;
  v18 = 0LL;
  v3 = a3;
  v19 = 0LL;
  v20 = 0LL;
  *a3 = 0;
  v6 = 0LL;
  if ( a1 )
  {
    if ( !*a2 )
      return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0;
    v7 = *(PVOID *)(a1 + 32);
  }
  else
  {
    if ( (int)CmpGetCmHiveFromVirtualPath(a2, &v20) < 0 )
      return 0;
    v6 = CmpMasterHive;
    v7 = v20;
  }
  LOBYTE(a3) = 1;
  if ( (int)CmpBlockTwoHiveWrites(v6, v7, a3) < 0 )
    return 0;
  PathByName = CmpFindPathByName(a1, a2, &v18, &v20, &v23);
  v9 = v23;
  v10 = PathByName;
  if ( v23 && (v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v23 + 8))(v23, (unsigned int)v20, &v21)) != 0 )
  {
    if ( v10 )
    {
      if ( !CmpVEEnabled || (*(_WORD *)(v11 + 2) & 0x100) == 0 )
        v10 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v12 = (*(_WORD *)(v11 + 2) & 0x100) == 0, v13 = 1, v12) )
        v13 = 0;
      v14 = 0;
      v15 = (unsigned __int16)v18 >> 1;
      *v3 = v13;
      if ( v15 )
      {
        while ( *(_WORD *)(v19 + 2LL * v14) != 92 )
        {
          if ( ++v14 >= v15 )
            goto LABEL_16;
        }
        *v3 = 0;
      }
    }
LABEL_16:
    (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v21);
  }
  else
  {
    v10 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v7);
  return v10;
}
