/*
 * XREFs of ?IsUndockCortanaEnabled@PrivilegedOperations@@YA_NXZ @ 0x18020A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x1800497C8 (-IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ.c)
 */

bool __fastcall PrivilegedOperations::IsUndockCortanaEnabled(PrivilegedOperations *this)
{
  return CortanaUndockingHelpers::IsUndockCortanaEnabled(this) != 0;
}
