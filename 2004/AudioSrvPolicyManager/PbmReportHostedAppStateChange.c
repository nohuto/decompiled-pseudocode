/*
 * XREFs of PbmReportHostedAppStateChange @ 0x1800231A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021710 @ 0x180021710 (sub_180021710.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 */

__int64 __fastcall PbmReportHostedAppStateChange(void *a1, int a2, int a3, int a4, _QWORD *a5)
{
  __int64 result; // rax
  int v9; // ecx

  if ( !a5 )
    return 2147942487LL;
  v9 = sub_18002633C(a1);
  if ( !v9 )
    return sub_180021710(a2, a3, (int)a5, a4, a5);
  result = (unsigned __int16)v9 | 0x80070000;
  if ( v9 <= 0 )
    return (unsigned int)v9;
  return result;
}
