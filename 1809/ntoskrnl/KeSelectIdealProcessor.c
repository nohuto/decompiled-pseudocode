/*
 * XREFs of KeSelectIdealProcessor @ 0x1400D8A34
 * Callers:
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KiSetIdealNodeProcessByGroup @ 0x1400D8A84 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x1401154EC (KiSetAffinityThread.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     ExpNodeCreateSystemThread @ 0x14066BB68 (ExpNodeCreateSystemThread.c)
 *     ExpWorkQueueManagerInitialize @ 0x140755FF0 (ExpWorkQueueManagerInitialize.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x1400D56E8 (KiSelectIdealProcessor.c)
 */

__int64 __fastcall KeSelectIdealProcessor(__int64 a1, __int64 a2, int *a3)
{
  int *v3; // rbx
  __int64 result; // rax

  v3 = a3;
  if ( !a3 )
    v3 = (int *)(a1 + 100);
  result = KiSelectIdealProcessor(a1, *v3, a2);
  *v3 = result;
  return result;
}
