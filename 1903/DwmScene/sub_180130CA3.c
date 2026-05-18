/*
 * XREFs of sub_180130CA3 @ 0x180130CA3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall sub_180130CA3(__int64 a1, __int64 a2)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  **(_QWORD **)(a2 + 64) = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  return result;
}
