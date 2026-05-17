/*
 * XREFs of _errno @ 0x1800849C0
 * Callers:
 *     wcstoxq @ 0x18008EB74 (wcstoxq.c)
 *     mbstowcs @ 0x180090AF0 (mbstowcs.c)
 *     strtoxlX @ 0x1800920B0 (strtoxlX.c)
 *     wcstoxlX @ 0x180092CBC (wcstoxlX.c)
 *     wcstombs @ 0x180092F80 (wcstombs.c)
 *     strtoxq @ 0x180093160 (strtoxq.c)
 *     write_string @ 0x180093CD0 (write_string.c)
 *     write_string_0 @ 0x180094728 (write_string_0.c)
 *     _handle_qnan1 @ 0x1800957A8 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180095AC0 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x180096C2C (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
