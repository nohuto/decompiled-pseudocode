/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesProcess @ 0x14018C9C8
 * Callers:
 *     KeSetCpuSetsProcess @ 0x14018C634 (KeSetCpuSetsProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14029673C (KeRecomputeCpuSetAffinityProcess.c)
 * Callees:
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14018CA14 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 */

__int64 __fastcall KiUpdateThreadCpuSetAffinitiesProcess(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v2; i = (_QWORD *)*i )
    result = KiUpdateThreadCpuSetAffinitiesFromDpcLevel(i - 95, a2);
  return result;
}
