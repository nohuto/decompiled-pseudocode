/*
 * XREFs of HvlConfigurePerfStateCap @ 0x14028AA8C
 * Callers:
 *     PpmPerfRegisterHvCap @ 0x1408B7A50 (PpmPerfRegisterHvCap.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140286C4C (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePerfStateCap(int a1, __int64 *a2)
{
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-CC8h] BYREF
  int v7; // [rsp+28h] [rbp-CC0h]
  _BYTE v8[3244]; // [rsp+2Ch] [rbp-CBCh] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = *((_DWORD *)a2 + 2);
  v6 = *a2;
  v7 = v4;
  return HvlpSetLogicalProcessorProperty(a1, 3, &v6);
}
