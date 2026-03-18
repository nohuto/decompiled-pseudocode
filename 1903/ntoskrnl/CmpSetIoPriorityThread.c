/*
 * XREFs of CmpSetIoPriorityThread @ 0x14013C82C
 * Callers:
 *     CmpDoFileWrite @ 0x1406362EC (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x14007FF38 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
