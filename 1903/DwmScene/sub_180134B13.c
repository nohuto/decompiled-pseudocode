/*
 * XREFs of sub_180134B13 @ 0x180134B13
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall sub_180134B13(__int64 a1, __int64 a2)
{
  void **result; // rax

  result = &Spectre::Utils::ICancellationToken::`vftable';
  **(_QWORD **)(a2 + 64) = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
