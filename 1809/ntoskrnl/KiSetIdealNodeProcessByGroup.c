/*
 * XREFs of KiSetIdealNodeProcessByGroup @ 0x1400D8A84
 * Callers:
 *     KeSetAffinityProcess @ 0x1401905F4 (KeSetAffinityProcess.c)
 *     KiExtendProcessAffinity @ 0x14029C270 (KiExtendProcessAffinity.c)
 *     KeInitializeProcess @ 0x14064CD20 (KeInitializeProcess.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x1400D8A34 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x1401157D8 (KeSelectNodeForAffinity.c)
 */

__int64 __fastcall KiSetIdealNodeProcessByGroup(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v6; // rsi
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  v8[1] = a3;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 88);
  v8[0] = v6;
  if ( !a2 )
    v4 = KeSelectNodeForAffinity(v8);
  *(_WORD *)(a1 + 2 * v3 + 528) = *(_WORD *)(v4 + 146);
  v8[0] = v6 & *(_QWORD *)(v4 + 136);
  result = KeSelectIdealProcessor(v4, (__int64)v8, 0LL);
  *(_DWORD *)(a1 + 4 * v3 + 448) = result;
  return result;
}
