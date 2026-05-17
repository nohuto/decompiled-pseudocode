/*
 * XREFs of __pctype_func @ 0x180096210
 * Callers:
 *     __iscsym @ 0x180090540 (__iscsym.c)
 *     __iscsymf @ 0x180090580 (__iscsymf.c)
 *     strtoxlX @ 0x180095170 (strtoxlX.c)
 *     tolower @ 0x1800958E0 (tolower.c)
 *     strtoxq @ 0x180096220 (strtoxq.c)
 *     _input_l @ 0x1800993F0 (_input_l.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__cdecl _pctype_func()
{
  return pctype;
}
