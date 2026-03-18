/*
 * XREFs of CmpSetIoPriorityThread @ 0x14013CE0C
 * Callers:
 *     CmpDoFileWrite @ 0x14063954C (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x140080338 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
