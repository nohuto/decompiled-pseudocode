/*
 * XREFs of NtUserMoveWindow @ 0x1C00ED450
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxMoveWindow @ 0x1C00ED66C (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  bool v35; // cf
  __int64 v36; // [rsp+30h] [rbp-38h] BYREF
  __int64 v37; // [rsp+38h] [rbp-30h]
  __int64 v38; // [rsp+40h] [rbp-28h]
  int v39; // [rsp+48h] [rbp-20h] BYREF
  int v40; // [rsp+4Ch] [rbp-1Ch]
  int v41; // [rsp+50h] [rbp-18h]
  int v42; // [rsp+54h] [rbp-14h]

  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( (((*(_WORD *)(v11 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v36 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v36;
      v37 = v10;
      HMLockObject(v10);
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
      v16 = a5;
      if ( a5 < 0 )
      {
        v16 = 0;
      }
      else if ( a5 > 0x7FFF )
      {
        v16 = 0x7FFF;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15) + 472) + 224LL) & 1) == 0 )
      {
        v20 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18) + 472);
        if ( (*(_BYTE *)(v20 + 224) & 0x20) == 0 )
        {
          v22 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
          if ( (((unsigned __int16)(v22 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v20,
                                                                                   v19,
                                                                                   v21) >> 8)) & 0x1FF) != 0 )
            goto LABEL_33;
          v25 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 || (v26 = 1, (v25 & 0x20000000) == 0) )
            v26 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v23, v24) & 0xF) != 2
            || (v35 = (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29) & 0x20000000) != 0, v30 = 1, !v35) )
          {
            v30 = 0;
          }
          if ( v26 != v30 )
          {
LABEL_33:
            v39 = a2;
            v41 = a4 + a2;
            v40 = a3;
            v42 = a3 + v16;
            TransformRectBetweenCoordinateSpaces(&v39, &v39, v13, 0LL);
            v16 = v42 - v40;
          }
        }
      }
      v12 = xxxMoveWindow((struct tagWND *)v13, v16, a6);
      ThreadUnlock1(v32, v31, v33);
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
