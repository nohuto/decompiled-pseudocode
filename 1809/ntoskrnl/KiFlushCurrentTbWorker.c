/*
 * XREFs of KiFlushCurrentTbWorker @ 0x140113AA0
 * Callers:
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v7; // rcx

  if ( KiFlushPcid )
  {
    v4 = __readcr3();
    __writecr3(v4);
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( !Process->AddressPolicy )
      return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, a2, a3, a4);
  }
  else
  {
    v7 = __readcr4();
    if ( (v7 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v7 ^ 0x80);
      __writecr4(v7 ^ 0x80);
      __writecr4(v7);
    }
    else
    {
      result = (struct _KTHREAD *)__readcr3();
      __writecr3((unsigned __int64)result);
    }
  }
  return result;
}
