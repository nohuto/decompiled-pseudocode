/*
 * XREFs of CmpSetIoPriorityThread @ 0x14013AF18
 * Callers:
 *     CmpDoFileWrite @ 0x1405B4A60 (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x1400DEFD8 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
