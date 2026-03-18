/*
 * XREFs of PopPluginComponentIdleState @ 0x14017F2F0
 * Callers:
 *     PopFxProcessWork @ 0x1400E0D10 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x1401815D0 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopPepNotifyIdleState @ 0x14017F34C (PopPepNotifyIdleState.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginComponentIdleState(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 result; // rax

  if ( a4 )
    memset(a4, 0, 0x40uLL);
  result = PopPepNotifyIdleState(*(_QWORD *)(a1 + 56), a2, a3, a4);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
