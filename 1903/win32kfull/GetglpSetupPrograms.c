/*
 * XREFs of GetglpSetupPrograms @ 0x1C0141D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 **__fastcall GetglpSetupPrograms(_QWORD *a1)
{
  unsigned __int16 **result; // rax

  result = &glpSetupPrograms;
  *a1 = &glpSetupPrograms;
  return result;
}
