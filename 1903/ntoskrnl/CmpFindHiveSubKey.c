/*
 * XREFs of CmpFindHiveSubKey @ 0x140A13288
 * Callers:
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140A12108 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpGetKnownHivePathNode @ 0x140A39128 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x1407655F8 (CmpWalkUnicodeStringPath.c)
 *     CmpGetNextName @ 0x1407656A0 (CmpGetNextName.c)
 */

bool __fastcall CmpFindHiveSubKey(__int64 a1, unsigned int a2, __int128 *a3, __int64 *a4, __int64 a5)
{
  char v5; // bl
  unsigned int v10; // edi
  __int128 *v11; // r8
  unsigned int v12; // edx
  __int64 v14; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  __int16 v16[20]; // [rsp+30h] [rbp-28h] BYREF
  bool v17; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL);
  if ( a3 && *(_WORD *)a3 )
  {
    *(_OWORD *)v16 = *a3;
    if ( !CmpGetNextName(v16, (__int64)&String2, &v17) )
      return v5;
    if ( RtlEqualUnicodeString(&CmpCCSString, &String2, 1u) )
    {
      v11 = (__int128 *)v16;
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
