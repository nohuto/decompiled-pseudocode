/*
 * XREFs of KiFlushCurrentTbOnly @ 0x14017A908
 * Callers:
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017A8A0 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x1401C5850 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbOnly(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *result; // rax
  unsigned __int64 v4; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v6; // rcx

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
    v6 = __readcr4();
    if ( (v6 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v6 ^ 0x80);
      __writecr4(v6 ^ 0x80);
      __writecr4(v6);
      return result;
    }
    goto LABEL_3;
  }
  v4 = __readcr3();
  __writecr3(v4);
  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( !Process->AddressPolicy )
    return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, 0LL, a3);
  return result;
}
