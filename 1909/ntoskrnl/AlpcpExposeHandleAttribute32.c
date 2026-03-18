/*
 * XREFs of AlpcpExposeHandleAttribute32 @ 0x1406CCD4C
 * Callers:
 *     AlpcpExposeAttributes @ 0x1405DFFB0 (AlpcpExposeAttributes.c)
 * Callees:
 *     AlpcpExposeHandleAttribute @ 0x1405E0630 (AlpcpExposeHandleAttribute.c)
 */

__int64 __fastcall AlpcpExposeHandleAttribute32(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = AlpcpExposeHandleAttribute(a1, a2, (__int64)&v7, a4);
  if ( (*a4 & 0x10000000) != 0 )
  {
    *a3 = v7;
    a3[1] = v8;
    a3[2] = v9;
    result = HIDWORD(v9);
    a3[3] = HIDWORD(v9);
  }
  return result;
}
