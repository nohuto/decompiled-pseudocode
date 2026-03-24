/*
 * XREFs of ExIsSoftBoot @ 0x1401863B0
 * Callers:
 *     EtwInitialize @ 0x1407432E0 (EtwInitialize.c)
 *     PoClearTransitionMarker @ 0x140744FC0 (PoClearTransitionMarker.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140409D98 & 4) != 0;
}
