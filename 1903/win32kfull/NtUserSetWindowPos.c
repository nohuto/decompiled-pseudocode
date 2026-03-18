/*
 * XREFs of NtUserSetWindowPos @ 0x1C00C90D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ConstrainWindowPos @ 0x1C00C908C (ConstrainWindowPos.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00C9440 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02299E4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
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
  __int64 v28; // r9
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v30; // r13
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rax
  unsigned int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct tagWND *v51; // [rsp+40h] [rbp-40h] BYREF
  __int64 v52; // [rsp+48h] [rbp-38h]
  __int64 v53; // [rsp+50h] [rbp-30h] BYREF
  __int64 v54; // [rsp+58h] [rbp-28h]
  __int64 v55; // [rsp+60h] [rbp-20h]
  __int64 v56; // [rsp+68h] [rbp-18h] BYREF
  struct tagWND *v57; // [rsp+70h] [rbp-10h]
  __int64 v58; // [rsp+78h] [rbp-8h]
  int v59; // [rsp+D0h] [rbp+50h] BYREF
  int v60; // [rsp+D8h] [rbp+58h] BYREF

  v60 = a4;
  v59 = a3;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v9 = 1;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( (((*(_WORD *)(v11 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v52 = gptiCurrent;
      v53 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v53;
      v54 = v10;
      HMLockObject(v10);
      v17 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v18 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v51) )
          goto LABEL_42;
        if ( *(char *)(*(_QWORD *)(v13 + 40) + 20LL) >= 0 )
        {
          if ( (v17 & 2) == 0 )
            ConstrainWindowPos(&v59, &v60);
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
          v22 = v51;
          v23 = 0LL;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned __int64)v51 - 2 > 0xFFFFFFFFFFFFFFFBuLL )
            v22 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v14, v15, v16) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v23 = *ThreadWin32Thread;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v23 + 472) + 224LL) & 1) == 0 )
          {
            v30 = KeGetCurrentThread();
            v31 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27, v28) )
            {
              v36 = (__int64 *)PsGetThreadWin32Thread(v30);
              if ( v36 )
                v31 = *v36;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v31 + 472) + 224LL) & 0x20) == 0 )
            {
              v37 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
              if ( (((unsigned __int16)(v37 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                       v33,
                                                                                       v32,
                                                                                       v34,
                                                                                       v35) >> 8)) & 0x1FF) != 0 )
                goto LABEL_38;
              v41 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
              if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 || (v42 = 1, (v41 & 0x20000000) == 0) )
                v42 = 0;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v41, v38, v39, v40) & 0xF) != 2
                || (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0x20000000) == 0 )
              {
                v9 = 0;
              }
              if ( v42 != v9 )
LABEL_38:
                TransformSWPCoords((struct tagWND *)v13, &v59, &v60, &a5, &a6, v17);
            }
          }
          v56 = *(_QWORD *)(v52 + 408);
          *(_QWORD *)(v52 + 408) = &v56;
          v57 = v22;
          if ( v22 )
            HMLockObject(v22);
          v12 = xxxSetWindowPos((struct tagWND *)v13, a5, a6, v17);
          ThreadUnlock1(v48, v47, v49);
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
