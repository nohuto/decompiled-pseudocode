/*
 * XREFs of KiWakePriQueueWaiter @ 0x1400D1698
 * Callers:
 *     KeInsertPriQueue @ 0x1400D1940 (KeInsertPriQueue.c)
 *     KiActivateWaiterPriQueue @ 0x1401126C0 (KiActivateWaiterPriQueue.c)
 * Callees:
 *     KiTryUnwaitThreadWithPriority @ 0x1400CE670 (KiTryUnwaitThreadWithPriority.c)
 */

__int64 __fastcall KiWakePriQueueWaiter(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 result; // rax

  v4 = (_QWORD *)(a2 + 8);
  v6 = *(_QWORD **)(a2 + 8);
  do
  {
    v9 = (_QWORD *)*v6;
    v10 = (__int64)v6;
    v6 = v9;
    if ( v9[1] != v10 || (v11 = *(_QWORD **)(v10 + 8), *v11 != v10) )
      __fastfail(3u);
    *v11 = v9;
    v9[1] = v11;
    result = KiTryUnwaitThreadWithPriority(a1, v10, a3, a4);
  }
  while ( !(_BYTE)result && v6 != v4 );
  return result;
}
