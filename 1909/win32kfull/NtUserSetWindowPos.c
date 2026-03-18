/*
 * XREFs of NtUserSetWindowPos @ 0x1C006A7A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ConstrainWindowPos @ 0x1C006A75C (ConstrainWindowPos.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006AB10 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02293C4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r12d
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // eax
  struct tagWND *v22; // r14
  __int64 v23; // rbx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rax
  unsigned int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  struct tagWND *v47; // [rsp+40h] [rbp-40h] BYREF
  __int64 v48; // [rsp+48h] [rbp-38h]
  __int64 v49; // [rsp+50h] [rbp-30h] BYREF
  __int64 v50; // [rsp+58h] [rbp-28h]
  __int64 v51; // [rsp+60h] [rbp-20h]
  __int64 v52; // [rsp+68h] [rbp-18h] BYREF
  struct tagWND *v53; // [rsp+70h] [rbp-10h]
  __int64 v54; // [rsp+78h] [rbp-8h]
  int v55; // [rsp+D0h] [rbp+50h] BYREF
  int v56; // [rsp+D8h] [rbp+58h] BYREF

  v56 = a4;
  v55 = a3;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v9 = 1;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( (((*(_WORD *)(v11 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v48 = gptiCurrent;
      v49 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v49;
      v50 = v10;
      HMLockObject(v10);
      v17 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v18 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v47) )
          goto LABEL_42;
        if ( *(char *)(*(_QWORD *)(v13 + 40) + 20LL) >= 0 )
        {
          if ( (v17 & 2) == 0 )
            ConstrainWindowPos(&v55, &v56);
          if ( (v17 & 1) == 0 )
          {
            v20 = a5;
            v21 = 0xFFFF;
            if ( a5 <= 0xFFFF )
            {
              if ( a5 < 0 )
                v20 = 0;
            }
            else
            {
              v20 = 0xFFFF;
            }
            a5 = v20;
            v19 = (unsigned int)a6;
            if ( a6 <= 0xFFFF )
            {
              v21 = a6;
              if ( a6 < 0 )
                v21 = 0;
            }
            a6 = v21;
          }
          v22 = v47;
          v23 = 0LL;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned __int64)v47 - 2 > 0xFFFFFFFFFFFFFFFBuLL )
            v22 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v14, v15) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v23 = *ThreadWin32Thread;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v23 + 472) + 224LL) & 1) == 0 )
          {
            v29 = KeGetCurrentThread();
            v30 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27) )
            {
              v34 = (__int64 *)PsGetThreadWin32Thread(v29);
              if ( v34 )
                v30 = *v34;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v30 + 472) + 224LL) & 0x20) == 0 )
            {
              v35 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
              if ( (((unsigned __int16)(v35 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                       v32,
                                                                                       v31,
                                                                                       v33) >> 8)) & 0x1FF) != 0 )
                goto LABEL_38;
              v38 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
              if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 || (v39 = 1, (v38 & 0x20000000) == 0) )
                v39 = 0;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v38, v36, v37) & 0xF) != 2
                || (W32GetCurrentThreadDpiAwarenessContext(v41, v40, v42) & 0x20000000) == 0 )
              {
                v9 = 0;
              }
              if ( v39 != v9 )
LABEL_38:
                TransformSWPCoords((struct tagWND *)v13, &v55, &v56, &a5, &a6, v17);
            }
          }
          v52 = *(_QWORD *)(v48 + 408);
          *(_QWORD *)(v48 + 408) = &v52;
          v53 = v22;
          if ( v22 )
            HMLockObject(v22);
          v12 = xxxSetWindowPos((struct tagWND *)v13, a5, a6, v17);
          ThreadUnlock1(v44, v43, v45);
          goto LABEL_42;
        }
        v18 = 87LL;
      }
      UserSetLastError(v18, v14, v15, v16);
LABEL_42:
      ThreadUnlock1(v19, v14, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
