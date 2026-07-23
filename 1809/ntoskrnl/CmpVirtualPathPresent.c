/*
 * XREFs of CmpVirtualPathPresent @ 0x1407F515C
 * Callers:
 *     CmpReparseToVirtualPath @ 0x1407F48FC (CmpReparseToVirtualPath.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpBlockTwoHiveWrites @ 0x1407F1954 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x1407F1BF0 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x1407F40A4 (CmpFindPathByName.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1407F4544 (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualPathPresent(__m128i *a1)
{
  char *v1; // rbp
  __int64 v3; // rdi
  char PathByName; // al
  __int64 v5; // rsi
  bool v6; // bl
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+74h] [rbp+1Ch]
  PVOID v12; // [rsp+78h] [rbp+20h] BYREF

  v10 = -1;
  v1 = (char *)CmpMasterHive;
  v12 = 0LL;
  v11 = 0;
  v3 = 0LL;
  if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a1, (__int64)&v12) < 0
    || (int)CmpBlockTwoHiveWrites((__int64)v1, (__int64)v12, 1) < 0 )
  {
    return 0;
  }
  PathByName = CmpFindPathByName(0LL, a1, 0LL, &v9, v8);
  v5 = v8[0];
  v6 = PathByName;
  if ( v8[0] )
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(v8[0] + 8LL))(v8[0], v9, &v10);
  if ( v6 )
    v6 = v3 && CmpVEEnabled && (*(_WORD *)(v3 + 2) & 0x100) != 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64, int *))(v5 + 16))(v5, &v10);
  CmpUnblockTwoHiveWrites(v1, v12);
  return v6;
}
