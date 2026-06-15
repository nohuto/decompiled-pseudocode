/*
 * XREFs of PbmReportApplicationState @ 0x180024200
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002461C @ 0x18002461C (sub_18002461C.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_18002D00C @ 0x18002D00C (sub_18002D00C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall PbmReportApplicationState(void *a1, int a2, int a3, unsigned int a4)
{
  int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-18h]

  v7 = 0;
  if ( qword_18004FE78 )
  {
    v8 = sub_18002633C(a1);
    if ( v8 )
    {
      v7 = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        return (unsigned int)v8;
    }
    else
    {
      v7 = sub_18002D00C(a2, a3, v11, a4);
      if ( v7 >= 0 )
        return (unsigned int)sub_18002461C(v9, 0LL);
    }
  }
  return (unsigned int)v7;
}
