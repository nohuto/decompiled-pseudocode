/*
 * XREFs of ??_G?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@QEAAPEAXI@Z @ 0x18000E210
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void *__fastcall std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
