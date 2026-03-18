/*
 * XREFs of NtUserSetWindowPos @ 0x1C00719B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0071C20 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     ConstrainWindowPos @ 0x1C00721DC (ConstrainWindowPos.c)
 *     ConstrainWindowSize @ 0x1C0072280 (ConstrainWindowSize.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C0211988 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  __int64 v15; // rsi
  unsigned int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagWND *v20; // r14
  __int64 v21; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagWND *v35; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v36[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v37[4]; // [rsp+60h] [rbp-20h] BYREF
  int v38; // [rsp+D0h] [rbp+50h] BYREF
  int v39; // [rsp+D8h] [rbp+58h] BYREF

  v39 = a4;
  v38 = a3;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v14 = 0;
  v15 = v9;
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 40);
    v10 = (*(_WORD *)(v11 + 42) & 0x2FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v36[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v36;
      v36[1] = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v16 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v17 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v35) )
          goto LABEL_28;
        if ( *(char *)(*(_QWORD *)(v15 + 40) + 20LL) >= 0 )
        {
          if ( (v16 & 2) == 0 )
            ConstrainWindowPos(&v38, &v39);
          if ( (v16 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v20 = v35;
          v21 = 0LL;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned __int64)v35 - 2 > 0xFFFFFFFFFFFFFFFBuLL )
            v20 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v21 = *ThreadWin32Thread;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v21 + 480) + 224LL) & 1) == 0 )
          {
            v26 = KeGetCurrentThread();
            v27 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23) )
            {
              v30 = (__int64 *)PsGetThreadWin32Thread(v26);
              if ( v30 )
                v27 = *v30;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v27 + 480) + 224LL) & 0x20) == 0 )
            {
              v31 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL);
              if ( (((unsigned __int16)(v31 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                       v29,
                                                                                       v28) >> 8)) & 0x1FF) != 0 )
                TransformSWPCoords((struct tagWND *)v15, &v38, &v39, &a5, &a6, v16);
            }
          }
          v37[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v37;
          v37[1] = v20;
          if ( v20 )
            _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
          v14 = xxxSetWindowPos((struct tagWND *)v15, a5, a6, v16);
          ThreadUnlock1(v33, v32);
          goto LABEL_28;
        }
        v17 = 87LL;
      }
      UserSetLastError(v17);
LABEL_28:
      ThreadUnlock1(v19, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
