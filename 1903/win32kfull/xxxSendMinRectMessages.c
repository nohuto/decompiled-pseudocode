/*
 * XREFs of xxxSendMinRectMessages @ 0x1C012E7D4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C012E650 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0222504 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMinimizeHungWindow @ 0x1C023C86C (xxxMinimizeHungWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00CFA70 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMinRectMessages(HWND *a1, struct _LARGE_STRING *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  HWND v6; // r14
  struct tagVWPL **v7; // rsi
  int v8; // edx
  void *v9; // rcx
  struct tagWND *i; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 *v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  _QWORD v23[3]; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+40h] BYREF

  v4 = 0;
  if ( a1 )
    v6 = *a1;
  else
    v6 = 0LL;
  memset(v23, 0, sizeof(v23));
  v7 = *(struct tagVWPL ***)(gptiCurrent + 456LL);
  if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *((_DWORD *)*v7 + 4)) & 0x800) != 0 )
  {
    xxxCallHook(5, (unsigned __int64)v6, (__int64)a2, 10);
    v7 = *(struct tagVWPL ***)(gptiCurrent + 456LL);
    v4 = 1;
  }
  if ( v7[30] )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 448LL), v23, UserDereferenceObject, a4);
    v9 = *(void **)(gptiCurrent + 448LL);
    if ( v9 )
      ObfReferenceObject(v9);
    v24 = 0;
    for ( i = 0LL; ; i = (struct tagWND *)v16 )
    {
      v16 = (__int64 *)VWPLNextBase(v7[30], v8, i, &v24);
      if ( !v16 )
        break;
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v17, v18);
      v20 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
      v21 = v16;
      HMLockObject(v16);
      if ( xxxSendTransformableMessageTimeout(v16, 0x8Bu, v6, a2, 0, 0x64u, (__int64 *)&BugCheckParameter3, 1u, 0) )
        v4 = 1;
      ThreadUnlock1(v13, v12, v14);
    }
    PopAndFreeW32ThreadLock((__int64)v23, v15, v17, v18);
  }
  return v4;
}
