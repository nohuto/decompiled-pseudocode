/*
 * XREFs of NtUserMoveWindow @ 0x1C010AEE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxMoveWindow @ 0x1C010B090 (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD v25[3]; // [rsp+30h] [rbp-30h] BYREF
  int v26; // [rsp+48h] [rbp-18h] BYREF
  int v27; // [rsp+4Ch] [rbp-14h]
  int v28; // [rsp+50h] [rbp-10h]
  int v29; // [rsp+54h] [rbp-Ch]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v15 = 0;
  v16 = v10;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 40);
    v11 = (*(_WORD *)(v12 + 42) & 0x2FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      v25[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v25;
      v25[1] = v10;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      if ( a2 > 0x7FFF )
      {
        a2 = 0x7FFF;
      }
      else if ( a2 < -32768 )
      {
        a2 = -32768;
      }
      if ( a3 > 0x7FFF )
      {
        a3 = 0x7FFF;
      }
      else if ( a3 < -32768 )
      {
        a3 = -32768;
      }
      if ( a4 < 0 )
      {
        a4 = 0;
      }
      else if ( a4 > 0x7FFF )
      {
        a4 = 0x7FFF;
      }
      v17 = a5;
      if ( a5 >= 0 )
      {
        if ( a5 > 0x7FFF )
          v17 = 0x7FFF;
        v15 = v17;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11) + 480) + 224LL) & 1) == 0 )
      {
        v20 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 480);
        if ( (*(_BYTE *)(v20 + 224) & 0x20) == 0 )
        {
          v21 = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 288LL);
          if ( (((unsigned __int16)(v21 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v20,
                                                                                   v19) >> 8)) & 0x1FF) != 0 )
          {
            v26 = a2;
            v28 = a4 + a2;
            v27 = a3;
            v29 = a3 + v15;
            TransformRectBetweenCoordinateSpaces(&v26, &v26, v16, 0LL);
            v15 = v29 - v27;
          }
        }
      }
      v15 = xxxMoveWindow((struct tagWND *)v16, v15, a6);
      ThreadUnlock1(v23, v22);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
