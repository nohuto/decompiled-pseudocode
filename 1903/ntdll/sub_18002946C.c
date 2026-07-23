/*
 * XREFs of sub_18002946C @ 0x18002946C
 * Callers:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_18002C944 @ 0x18002C944 (sub_18002C944.c)
 *     sub_18007CDAC @ 0x18007CDAC (sub_18007CDAC.c)
 *     sub_1800CF490 @ 0x1800CF490 (sub_1800CF490.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x180092520 (wcsrchr.c)
 *     ZwApphelpCacheControl @ 0x18009D060 (ZwApphelpCacheControl.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18002946C(wchar_t *Str, int a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rax
  const WCHAR *v6; // rax
  _QWORD v8[48]; // [rsp+20h] [rbp-188h] BYREF
  int v9; // [rsp+1C0h] [rbp+18h] BYREF

  memset(v8, 0, 0x178uLL);
  v4 = 0;
  v9 = 0;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = Str;
  if ( RtlInitUnicodeStringEx((PUNICODE_STRING)&v8[29], v6) < 0 )
    return 0LL;
  LODWORD(v8[46]) = 4;
  v8[45] = &v9;
  if ( (int)ZwApphelpCacheControl(6LL, v8) >= 0 && (a2 & v9) != 0 )
    return 1;
  return v4;
}
