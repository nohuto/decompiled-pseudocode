/*
 * XREFs of KiInitializeProcessorGroupSchedulingData @ 0x14029B86C
 * Callers:
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x14057CAE0 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeProcessorGroupSchedulingData(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24336) = a1 + 24328;
  *(_QWORD *)(a1 + 24328) = a1 + 24328;
  *(_DWORD *)(a1 + 216) = 424 * *(_DWORD *)(a1 + 36) + 128;
  result = KiGenerationEndTick;
  *(_QWORD *)(a1 + 23520) = KiGenerationEndTick;
  return result;
}
