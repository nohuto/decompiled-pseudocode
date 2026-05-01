/*
 * XREFs of ?IsUndockCortanaEnabled@PrivilegedOperations@@YA_NXZ @ 0x1801EB2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x18003D6D8 (-IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ.c)
 */

bool __fastcall PrivilegedOperations::IsUndockCortanaEnabled(PrivilegedOperations *this)
{
  return CortanaUndockingHelpers::IsUndockCortanaEnabled(this) != 0;
}
