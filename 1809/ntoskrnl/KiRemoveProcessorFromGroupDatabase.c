/*
 * XREFs of KiRemoveProcessorFromGroupDatabase @ 0x14029044C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 * Callees:
 *     KiUncommitNodeAssignment @ 0x1402904C0 (KiUncommitNodeAssignment.c)
 */

__int64 __fastcall KiRemoveProcessorFromGroupDatabase(__int64 a1)
{
  __int64 v1; // r11
  __int64 *v2; // rdx
  __int64 v3; // rax
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = &KiGroupBlock[2 * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 144LL)];
  v3 = ~*(_QWORD *)(a1 + 200);
  v4 = (v3 & *v2) == 0;
  *v2 &= v3;
  if ( v4 )
    KiUncommitNodeAssignment();
  v5 = (unsigned __int64)*(unsigned __int8 *)(v1 + 208) << 6;
  KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v1 + 36)] = 0;
  result = *(unsigned __int8 *)(v1 + 209);
  KiProcessorNumberToIndexMappingTable[result + v5] = 0;
  return result;
}
