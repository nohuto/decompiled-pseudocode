/*
 * XREFs of PopPluginComponentIdleState @ 0x1401765F4
 * Callers:
 *     PopFxProcessWork @ 0x1400FE410 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x140177600 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1400FF634 (PopPepProcessEvent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopPluginNotifyIdleState @ 0x1402DA838 (PopPluginNotifyIdleState.c)
 */

char __fastcall PopPluginComponentIdleState(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  char v9; // di
  __int64 v11; // [rsp+20h] [rbp-18h]

  v4 = a2;
  v5 = (__int64)a4;
  if ( a4 )
    memset(a4, 0, 0x40uLL);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 200 * v4;
  v9 = 0;
  if ( !*(_BYTE *)(v7 + 124)
    || (LOBYTE(a4) = 1,
        (unsigned __int8)PopPluginNotifyIdleState(
                           *(_QWORD *)(v7 + 32),
                           *(unsigned int *)(v8 + v7 + 192),
                           *(unsigned int *)(v8 + v7 + 360),
                           a4)) )
  {
    v9 = PopPepProcessEvent(v7, v8 + v7 + 184, 1u, 6u, v11, v5);
    if ( v9 && !v5 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return v9;
}
