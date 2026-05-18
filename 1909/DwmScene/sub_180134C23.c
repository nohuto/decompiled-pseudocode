/*
 * XREFs of sub_180134C23 @ 0x180134C23
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall sub_180134C23(__int64 a1, __int64 a2)
{
  void **result; // rax

  result = &Spectre::Utils::ICancellationToken::`vftable';
  **(_QWORD **)(a2 + 64) = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
