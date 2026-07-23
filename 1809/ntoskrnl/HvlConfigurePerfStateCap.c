/*
 * XREFs of HvlConfigurePerfStateCap @ 0x140276A80
 * Callers:
 *     PpmPerfRegisterHvCap @ 0x14087C730 (PpmPerfRegisterHvCap.c)
 * Callees:
 *     HvlpSetLogicalProcessorProperty @ 0x140272F38 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePerfStateCap(int a1, __int64 *a2)
{
  int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-CC8h] BYREF
  int v5; // [rsp+28h] [rbp-CC0h]

  v2 = *((_DWORD *)a2 + 2);
  v4 = *a2;
  v5 = v2;
  return HvlpSetLogicalProcessorProperty(a1, 3, &v4);
}
