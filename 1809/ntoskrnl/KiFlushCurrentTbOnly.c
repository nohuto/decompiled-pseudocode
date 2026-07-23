/*
 * XREFs of KiFlushCurrentTbOnly @ 0x140173F54
 * Callers:
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbOnly(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *result; // rax
  unsigned __int64 v5; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v7; // rcx

  if ( KiKvaShadow )
  {
    if ( a1 && a1 != 2 )
      goto LABEL_6;
LABEL_3:
    result = (struct _KTHREAD *)__readcr3();
    __writecr3((unsigned __int64)result);
    return result;
  }
  if ( a1 && a1 <= 2 )
    goto LABEL_3;
LABEL_6:
  if ( !KiFlushPcid )
  {
    v7 = __readcr4();
    if ( (v7 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v7 ^ 0x80);
      __writecr4(v7 ^ 0x80);
      __writecr4(v7);
      return result;
    }
    goto LABEL_3;
  }
  v5 = __readcr3();
  __writecr3(v5);
  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( !Process->AddressPolicy )
    return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, 0LL, a3, a4);
  return result;
}
