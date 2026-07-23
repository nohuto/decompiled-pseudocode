/*
 * XREFs of CmpFindRedirectedDriverServiceStateNode @ 0x1409CDD50
 * Callers:
 *     CmpFindDrivers @ 0x1409CF508 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByName @ 0x14073E2CC (CmpFindSubKeyByName.c)
 *     CmpFindValueByName @ 0x14073EA48 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x14073EA78 (CmpValueToData.c)
 *     CmpFindHiveSubKey @ 0x1409CDDF4 (CmpFindHiveSubKey.c)
 *     CmpGetKnownHivePathNode @ 0x1409F4CE4 (CmpGetKnownHivePathNode.c)
 */

char __fastcall CmpFindRedirectedDriverServiceStateNode(
        ULONG_PTR BugCheckParameter3,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int SubKeyByName; // ebx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  unsigned int ValueByName; // ebx
  ULONG_PTR v17; // rax
  _WORD *v18; // rbx
  unsigned __int16 v19; // cx
  char KnownHivePathNode; // bl
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v24[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v25[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h] BYREF
  _WORD v27[4]; // [rsp+70h] [rbp-10h] BYREF
  _WORD *v28; // [rsp+78h] [rbp-8h]

  v23[1] = 0;
  v24[1] = 0;
  v25[1] = 0;
  v22[1] = 0;
  v26 = 0xFFFFFFFFLL;
  v23[0] = -1;
  v24[0] = -1;
  v25[0] = -1;
  v22[0] = -1;
  if ( !(unsigned __int8)CmpFindHiveSubKey(
                           BugCheckParameter3,
                           a2,
                           (unsigned int)L"pr",
                           (unsigned int)&v21,
                           (__int64)v22) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v21, (__int64)L"\b\n");
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v22);
  if ( SubKeyByName == -1 )
    return 0;
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
          BugCheckParameter3,
          SubKeyByName,
          v23);
  if ( !v13 )
    return 0;
  v14 = CmpFindSubKeyByName(BugCheckParameter3, v13, (__int64)&CmpDriverStateSourceIdName);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v23);
  if ( v14 == -1 )
    return 0;
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v14, v24);
  if ( !v15 )
    return 0;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v15, (int)&CmpTargetNtPathString);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v24);
  if ( ValueByName == -1 )
    return 0;
  v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
          BugCheckParameter3,
          ValueByName,
          v25);
  if ( !v17 )
    return 0;
  v18 = CmpValueToData(BugCheckParameter3, ValueByName, v17, (unsigned int *)&v21, (__int64)&v26);
  v28 = v18;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v25);
  if ( !v18 )
    return 0;
  v19 = 0;
  v27[0] = 0;
  v27[1] = v21;
  if ( (_WORD)v21 )
  {
    do
    {
      if ( !v18[(unsigned __int64)v19 >> 1] )
        break;
      v19 += 2;
    }
    while ( v19 < (unsigned __int16)v21 );
    v27[0] = v19;
  }
  KnownHivePathNode = CmpGetKnownHivePathNode(BugCheckParameter3, a2, a3, a4, (__int64)v27, a5, a6, a7);
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v26);
  return KnownHivePathNode;
}
