/*
 * XREFs of _errno @ 0x180088270
 * Callers:
 *     wcstoxq @ 0x180091BF4 (wcstoxq.c)
 *     mbstowcs @ 0x180093BB0 (mbstowcs.c)
 *     strtoxlX @ 0x180095180 (strtoxlX.c)
 *     wcstoxlX @ 0x180095D8C (wcstoxlX.c)
 *     wcstombs @ 0x180096050 (wcstombs.c)
 *     strtoxq @ 0x180096230 (strtoxq.c)
 *     write_string @ 0x180096DA0 (write_string.c)
 *     write_string_0 @ 0x1800977F0 (write_string_0.c)
 *     _handle_qnan1 @ 0x180098868 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180098B80 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x180099CF4 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
