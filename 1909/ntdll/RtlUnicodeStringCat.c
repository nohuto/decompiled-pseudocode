/*
 * XREFs of RtlUnicodeStringCat @ 0x180078298
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlWideCharArrayCopyWorker @ 0x180029824 (RtlWideCharArrayCopyWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x180029888 (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1800298C4 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCat(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // bx
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF
  _WORD *v9; // [rsp+48h] [rbp-8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  result = RtlUnicodeStringValidateDestWorker((__int64)a1, &v7, &v11, &v6);
  if ( (int)result >= 0 )
  {
    result = RtlUnicodeStringValidateSrcWorker(a2, &v9, &v8);
    if ( (int)result >= 0 )
    {
      v5 = v6;
      v10 = 0LL;
      result = RtlWideCharArrayCopyWorker(v7 + 2 * v6, v11 - v6, &v10, v9, v8);
      *a1 = 2 * (v10 + v5);
    }
  }
  return result;
}
