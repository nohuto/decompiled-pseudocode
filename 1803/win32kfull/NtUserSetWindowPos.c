/*
 * XREFs of NtUserSetWindowPos @ 0x1C0034750
 * Callers:
 *     <none>
 * Callees:
 *     ConstrainWindowPos @ 0x1C0030FB0 (ConstrainWindowPos.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0034C84 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01EB9C0 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  __int64 v15; // r14
  unsigned int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // ecx
  int v22; // eax
  struct tagWND *v23; // rsi
  __int64 v24; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v29; // r12
  __int64 v30; // rbx
  __int64 *v31; // rax
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct tagWND *v37; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v38[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v39[4]; // [rsp+60h] [rbp-20h] BYREF
  int v40; // [rsp+D0h] [rbp+50h] BYREF
  int v41; // [rsp+D8h] [rbp+58h] BYREF

  v41 = a4;
  v40 = a3;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v14 = 0;
  v15 = v9;
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 40);
    v10 = (*(_WORD *)(v11 + 42) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v38[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v38;
      v38[1] = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v16 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v17 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v37) )
          goto LABEL_35;
        if ( *(char *)(*(_QWORD *)(v15 + 40) + 20LL) >= 0 )
        {
          if ( (v16 & 2) == 0 )
            ConstrainWindowPos(&v40, &v41);
          if ( (v16 & 1) == 0 )
          {
            v21 = a5;
            v22 = 0xFFFF;
            if ( a5 <= 0xFFFF )
            {
              if ( a5 < 0 )
                v21 = 0;
            }
            else
            {
              v21 = 0xFFFF;
            }
            a5 = v21;
            v19 = (unsigned int)a6;
            if ( a6 <= 0xFFFF )
            {
              v22 = a6;
              if ( a6 < 0 )
                v22 = 0;
            }
            a6 = v22;
          }
          v23 = v37;
          v24 = 0LL;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned __int64)v37 - 2 > 0xFFFFFFFFFFFFFFFBuLL )
            v23 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v24 = *ThreadWin32Thread;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v24 + 472) + 224LL) & 1) == 0 )
          {
            v29 = KeGetCurrentThread();
            v30 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26) )
            {
              v31 = (__int64 *)PsGetThreadWin32Thread(v29);
              if ( v31 )
                v30 = *v31;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v30 + 472) + 224LL) & 0x20) == 0 )
            {
              v32 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL);
              if ( (((unsigned __int16)(v32 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
                TransformSWPCoords((struct tagWND *)v15, &v40, &v41, &a5, &a6, v16);
            }
          }
          v39[0] = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = v39;
          v39[1] = v23;
          if ( v23 )
            _InterlockedIncrement((volatile signed __int32 *)v23 + 2);
          v14 = xxxSetWindowPos((struct tagWND *)v15, a5, a6, v16);
          ThreadUnlock1(v34, v33, v35);
          goto LABEL_35;
        }
        v17 = 87LL;
      }
      UserSetLastError(v17);
LABEL_35:
      ThreadUnlock1(v19, v18, v20);
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
