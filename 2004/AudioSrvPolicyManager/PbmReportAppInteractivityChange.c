/*
 * XREFs of PbmReportAppInteractivityChange @ 0x1800230D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020668 @ 0x180020668 (sub_180020668.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 */

__int64 __fastcall PbmReportAppInteractivityChange(void *a1, const WCHAR *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int v8; // ecx
  unsigned int v9; // [rsp+30h] [rbp-18h]

  result = 2147549183LL;
  if ( qword_18004FE78 )
  {
    v8 = sub_18002633C(a1);
    if ( v8 )
    {
      result = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        return (unsigned int)v8;
    }
    else
    {
      return sub_180020668(qword_18004FE78, a2, a3, a4, v9);
    }
  }
  return result;
}
