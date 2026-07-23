/*
 * XREFs of MiPteIsSessionDynamicBuffer @ 0x140158C54
 * Callers:
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPteIsSessionDynamicBuffer(unsigned __int64 a1)
{
  return a1 >= (((unsigned __int64)qword_14043A030 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a1 < (((unsigned __int64)qword_14043A028 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
}
