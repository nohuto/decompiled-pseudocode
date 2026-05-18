/*
 * XREFs of sub_18012CF6B @ 0x18012CF6B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall sub_18012CF6B(__int64 a1, __int64 a2)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  **(_QWORD **)(a2 + 64) = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
