/*
 * XREFs of KiVerifyPdata @ 0x140A152B0
 * Callers:
 *     KiVerifyScopesExecute @ 0x140A14BD0 (KiVerifyScopesExecute.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14001B800 (RtlpxLookupFunctionTable.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall KiVerifyPdata(ULONG_PTR BugCheckParameter2)
{
  unsigned int *v2; // r9
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned int *v5; // rdx
  unsigned int *BugCheckParameter4; // rcx
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-18h]
  unsigned int v9; // [rsp+60h] [rbp+8h]

  v7[0] = 0LL;
  v7[1] = 0LL;
  BugCheckParameter3 = 0LL;
  if ( BugCheckParameter2 < *((_QWORD *)&xmmword_140589020 + 1)
    || BugCheckParameter2 >= *((_QWORD *)&xmmword_140589020 + 1) + (unsigned __int64)(unsigned int)qword_140589030 )
  {
    v2 = (unsigned int *)RtlpxLookupFunctionTable(BugCheckParameter2, (__int64)v7);
  }
  else
  {
    v2 = (unsigned int *)xmmword_140589020;
    BugCheckParameter3 = qword_140589030;
  }
  result = v9;
  if ( v2 )
  {
    v4 = HIDWORD(BugCheckParameter3) / 0xC;
    if ( HIDWORD(BugCheckParameter3) % 0xCuLL )
      KeBugCheckEx(0x14Du, 0xFFFFFFFDuLL, BugCheckParameter2, HIDWORD(BugCheckParameter3), 0LL);
    result = v4;
    v5 = &v2[3 * v4];
    BugCheckParameter4 = 0LL;
    while ( v2 != v5 )
    {
      if ( BugCheckParameter4 )
      {
        result = *v2;
        if ( *BugCheckParameter4 >= (unsigned int)result )
          KeBugCheckEx(0x14Du, 0xFFFFFFFEuLL, BugCheckParameter2, (ULONG_PTR)v2, (ULONG_PTR)BugCheckParameter4);
      }
      BugCheckParameter4 = v2;
      v2 += 3;
    }
  }
  return result;
}
