/*
 * XREFs of ExIsSoftBoot @ 0x140186390
 * Callers:
 *     EtwInitialize @ 0x140743300 (EtwInitialize.c)
 *     PoClearTransitionMarker @ 0x140744FE0 (PoClearTransitionMarker.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140409DD8 & 4) != 0;
}
