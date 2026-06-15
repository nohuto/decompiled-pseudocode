/*
 * XREFs of ??0critical_section@wil@@QEAA@K@Z @ 0x18004915C
 * Callers:
 *     ??0CAudioSession@@IEAA@XZ @ 0x18002D1D0 (--0CAudioSession@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION *__fastcall wil::critical_section::critical_section(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSectionEx(this, 0, 0);
  return this;
}
