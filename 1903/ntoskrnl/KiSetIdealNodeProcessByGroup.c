/*
 * XREFs of KiSetIdealNodeProcessByGroup @ 0x1400E5110
 * Callers:
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 *     KiExtendProcessAffinity @ 0x1402B35CC (KiExtendProcessAffinity.c)
 *     KeInitializeProcess @ 0x140692038 (KeInitializeProcess.c)
 * Callees:
 *     KiSelectIdealProcessorForProcess @ 0x1400E51A4 (KiSelectIdealProcessorForProcess.c)
 *     KeSelectNodeForAffinity @ 0x1400F90B0 (KeSelectNodeForAffinity.c)
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
  *(_WORD *)(a1 + 2 * v3 + 532) = *(_WORD *)(v4 + 146);
  v8[0] = v6 & *(_QWORD *)(v4 + 136);
  result = KiSelectIdealProcessorForProcess(v4, v8);
  *(_WORD *)(a1 + 2 * v3 + 492) = result;
  *(_WORD *)(a1 + 2 * v3 + 452) = result;
  return result;
}
