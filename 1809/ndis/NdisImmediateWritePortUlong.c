/*
 * XREFs of NdisImmediateWritePortUlong @ 0x1C00EBAC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00EBF30 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateWritePortUlong(__int64 a1, __int64 a2, int a3)
{
  char v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = 0;
  return ndisImmediateReadWritePort(a1, a2, &v5, 4LL, v4);
}
