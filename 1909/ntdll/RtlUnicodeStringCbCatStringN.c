/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x18006AFC4
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180027B70 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1800298C4 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x18006B0E4 (RtlWideCharArrayCopyStringWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCbCatStringN(_WORD *a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int16 v8; // bx
  unsigned __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  result = RtlUnicodeStringValidateDestWorker((__int64)a1, v11, &v9, &v10);
  if ( (int)result >= 0 )
  {
    v7 = a3 >> 1;
    if ( v7 > 0x7FFF )
    {
      return 3221225485LL;
    }
    else
    {
      v8 = v10;
      v12 = 0LL;
      result = RtlWideCharArrayCopyStringWorker(
                 LODWORD(v11[0]) + 2 * (int)v10,
                 (int)v9 - (int)v10,
                 (unsigned int)&v12,
                 a2,
                 v7);
      *a1 = 2 * (v12 + v8);
    }
  }
  return result;
}
