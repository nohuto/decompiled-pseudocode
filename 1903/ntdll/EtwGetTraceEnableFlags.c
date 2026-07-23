/*
 * XREFs of EtwGetTraceEnableFlags @ 0x180080150
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 *     sub_1800801D0 @ 0x1800801D0 (sub_1800801D0.c)
 */

__int64 __fastcall EtwGetTraceEnableFlags(__int64 a1)
{
  unsigned int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  if ( ((unsigned __int16)a1 < (unsigned int)sub_1800801D0() || (_WORD)a1 == 0xFFFF) && a1 )
    return v3;
  RtlSetLastWin32Error(6);
  return 0LL;
}
