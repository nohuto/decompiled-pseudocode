/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C005FC3C
 * Callers:
 *     _GetClassInfoEx @ 0x1C001EB84 (_GetClassInfoEx.c)
 *     InternalRegisterClassEx @ 0x1C0038490 (InternalRegisterClassEx.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
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
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  a1[1] = *(_QWORD *)(v5 + 1472);
  result = a1;
  *(_QWORD *)(v5 + 1472) = a1 + 1;
  return result;
}
