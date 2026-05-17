/*
 * XREFs of _errno @ 0x180088260
 * Callers:
 *     wcstoxq @ 0x180091BE4 (wcstoxq.c)
 *     mbstowcs @ 0x180093BA0 (mbstowcs.c)
 *     strtoxlX @ 0x180095170 (strtoxlX.c)
 *     wcstoxlX @ 0x180095D7C (wcstoxlX.c)
 *     wcstombs @ 0x180096040 (wcstombs.c)
 *     strtoxq @ 0x180096220 (strtoxq.c)
 *     write_string @ 0x180096D90 (write_string.c)
 *     write_string_0 @ 0x1800977E0 (write_string_0.c)
 *     _handle_qnan1 @ 0x180098858 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180098B70 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x180099CE4 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
