/*
 * XREFs of ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z @ 0x1800337C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033834 @ 0x180033834 (sub_180033834.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

Concurrency::critical_section *__fastcall Concurrency::critical_section::`scalar deleting destructor'(
        Concurrency::critical_section *this,
        char a2)
{
  sub_180033834();
  if ( (a2 & 1) != 0 )
    sub_180039D98(this);
  return this;
}
