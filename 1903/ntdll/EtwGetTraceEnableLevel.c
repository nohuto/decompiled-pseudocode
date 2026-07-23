/*
 * XREFs of EtwGetTraceEnableLevel @ 0x180080110
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 *     sub_1800801D0 @ 0x1800801D0 (sub_1800801D0.c)
 */

char __fastcall EtwGetTraceEnableLevel(__int64 a1)
{
  char v3; // [rsp+32h] [rbp+Ah]

  v3 = BYTE2(a1);
  if ( ((unsigned __int16)a1 < (unsigned int)sub_1800801D0() || (_WORD)a1 == 0xFFFF) && a1 )
    return v3;
  RtlSetLastWin32Error(6);
  return 0;
}
