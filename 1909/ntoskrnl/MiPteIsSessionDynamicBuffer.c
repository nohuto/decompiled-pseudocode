/*
 * XREFs of MiPteIsSessionDynamicBuffer @ 0x1401686B0
 * Callers:
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPteIsSessionDynamicBuffer(unsigned __int64 a1)
{
  return a1 >= (((unsigned __int64)qword_140464688 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a1 < (((unsigned __int64)(qword_140464688 + 0x2000) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
}
