/*
 * XREFs of ExIsSoftBoot @ 0x1401864F0
 * Callers:
 *     EtwInitialize @ 0x1407444D0 (EtwInitialize.c)
 *     PoClearTransitionMarker @ 0x1407461B0 (PoClearTransitionMarker.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_14040ADF8 & 4) != 0;
}
