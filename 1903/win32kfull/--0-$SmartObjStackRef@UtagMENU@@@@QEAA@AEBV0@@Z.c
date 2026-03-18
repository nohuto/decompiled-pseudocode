/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00BE5D8
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0020698 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(
        _QWORD *a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = **a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v10 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( v8 )
  {
    *a1 = *(_QWORD *)(v8 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v8 + 152) + 8LL);
  }
  *v10 = *(_QWORD *)(v7 + 1472);
  *(_QWORD *)(v7 + 1472) = v10;
  a1[2] = a2[2];
  return a1;
}
