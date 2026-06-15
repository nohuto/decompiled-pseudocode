/*
 * XREFs of PbmReportAppClosing @ 0x180023230
 * Callers:
 *     <none>
 * Callees:
 *     sub_180022DBC @ 0x180022DBC (sub_180022DBC.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 */

__int64 __fastcall PbmReportAppClosing(void *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // eax
  int v7; // ecx
  int v8; // [rsp+58h] [rbp+20h]

  result = 2147549183LL;
  if ( qword_18004FE70 )
  {
    v6 = sub_18002633C(a1);
    v7 = v6;
    if ( v6 )
    {
      result = (unsigned __int16)v6 | 0x80070000;
      if ( v7 <= 0 )
        return (unsigned int)v7;
    }
    else
    {
      return sub_180022DBC(0LL, a2, a3, v8);
    }
  }
  return result;
}
