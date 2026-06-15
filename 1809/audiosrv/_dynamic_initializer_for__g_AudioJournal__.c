/*
 * XREFs of _dynamic_initializer_for__g_AudioJournal__ @ 0x180001280
 * Callers:
 *     <none>
 * Callees:
 *     ??0AudioJournal@@QEAA@XZ @ 0x180049AA4 (--0AudioJournal@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_AudioJournal__(AudioJournal *a1)
{
  AudioJournal::AudioJournal(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_AudioJournal__);
}
