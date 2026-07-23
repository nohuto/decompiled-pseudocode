/*
 * XREFs of CmpFindHiveSubKey @ 0x1409CDDF4
 * Callers:
 *     CmpFindRedirectedDriverServiceStateNode @ 0x1409CDD50 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpGetKnownHivePathNode @ 0x1409F4CE4 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x14073E8BC (CmpWalkUnicodeStringPath.c)
 *     CmpGetNextName @ 0x14073E95C (CmpGetNextName.c)
 */

bool __fastcall CmpFindHiveSubKey(__int64 a1, unsigned int a2, __int128 *a3, __int64 *a4, __int64 a5)
{
  char v5; // bl
  unsigned int v10; // edi
  __int128 *v11; // r8
  unsigned int v12; // edx
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF
  bool v17; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL);
  if ( a3 && *(_WORD *)a3 )
  {
    v15 = *a3;
    if ( !CmpGetNextName((__int16 *)&v15, (__int64)&String2, &v17) )
      return v5;
    if ( RtlEqualUnicodeString(&CmpCCSString, &String2, 1u) )
    {
      v11 = &v15;
      v12 = a2;
    }
    else
    {
      v11 = a3;
      v12 = v10;
    }
    v10 = CmpWalkUnicodeStringPath(a1, v12, v11);
  }
  if ( v10 != -1 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, v10, a5);
    *a4 = v14;
    return v14 != 0;
  }
  return v5;
}
