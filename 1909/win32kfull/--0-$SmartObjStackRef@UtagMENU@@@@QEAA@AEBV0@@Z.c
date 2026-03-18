/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C005FCB8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSendMenuSelect @ 0x1C024BC54 (xxxSendMenuSelect.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 **a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = **a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v9 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( v7 )
  {
    *a1 = *(_QWORD *)(v7 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v7 + 152) + 8LL);
  }
  *v9 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = v9;
  a1[2] = a2[2];
  return a1;
}
