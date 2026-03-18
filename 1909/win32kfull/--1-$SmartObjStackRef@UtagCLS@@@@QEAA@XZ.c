/*
 * XREFs of ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C005FE08
 * Callers:
 *     _GetClassInfoEx @ 0x1C001EB84 (_GetClassInfoEx.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     InternalRegisterClassEx @ 0x1C0038490 (InternalRegisterClassEx.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C010F818 (xxxSetClassData.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0060168 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(a1);
  result = *(_QWORD **)(v5 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v5 + 1472) = result;
  }
  return result;
}
