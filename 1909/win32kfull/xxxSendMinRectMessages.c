/*
 * XREFs of xxxSendMinRectMessages @ 0x1C0109A64
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C01098E0 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMinimizeHungWindow @ 0x1C023C24C (xxxMinimizeHungWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C0071140 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, struct _LARGE_STRING *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v4; // r14
  struct tagVWPL **v5; // rsi
  int v6; // edx
  void *v7; // rcx
  struct tagWND *i; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // r8
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  _QWORD v20[3]; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+40h] BYREF

  v2 = 0;
  if ( a1 )
    v4 = *a1;
  else
    v4 = 0LL;
  memset(v20, 0, sizeof(v20));
  v5 = *(struct tagVWPL ***)(gptiCurrent + 456LL);
  if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *((_DWORD *)*v5 + 4)) & 0x800) != 0 )
  {
    xxxCallHook(5, v4, (__int64)a2, 10);
    v5 = *(struct tagVWPL ***)(gptiCurrent + 456LL);
    v2 = 1;
  }
  if ( v5[30] )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 448LL), v20, UserDereferenceObject);
    v7 = *(void **)(gptiCurrent + 448LL);
    if ( v7 )
      ObfReferenceObject(v7);
    v21 = 0;
    for ( i = 0LL; ; i = (struct tagWND *)v14 )
    {
      v14 = (__int64 *)VWPLNextBase(v5[30], v6, i, &v21);
      if ( !v14 )
        break;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15);
      v17 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
      v18 = v14;
      HMLockObject(v14);
      if ( xxxSendTransformableMessageTimeout(v14, 0x8Bu, v4, a2, 0, 0x64u, (__int64 *)&BugCheckParameter3, 1u, 0) )
        v2 = 1;
      ThreadUnlock1(v11, v10, v12);
    }
    PopAndFreeW32ThreadLock((__int64)v20, v13, v15);
  }
  return v2;
}
