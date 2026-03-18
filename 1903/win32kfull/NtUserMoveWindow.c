/*
 * XREFs of NtUserMoveWindow @ 0x1C0112830
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMoveWindow @ 0x1C0112A4C (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  bool v40; // cf
  __int64 v41; // [rsp+30h] [rbp-38h] BYREF
  __int64 v42; // [rsp+38h] [rbp-30h]
  __int64 v43; // [rsp+40h] [rbp-28h]
  int v44; // [rsp+48h] [rbp-20h] BYREF
  int v45; // [rsp+4Ch] [rbp-1Ch]
  int v46; // [rsp+50h] [rbp-18h]
  int v47; // [rsp+54h] [rbp-14h]

  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( (((*(_WORD *)(v11 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v41 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v41;
      v42 = v10;
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
      v17 = a5;
      if ( a5 < 0 )
      {
        v17 = 0;
      }
      else if ( a5 > 0x7FFF )
      {
        v17 = 0x7FFF;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) + 472) + 224LL) & 1) == 0 )
      {
        v22 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 472);
        if ( (*(_BYTE *)(v22 + 224) & 0x20) == 0 )
        {
          v25 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
          if ( (((unsigned __int16)(v25 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v22,
                                                                                   v21,
                                                                                   v23,
                                                                                   v24) >> 8)) & 0x1FF) != 0 )
            goto LABEL_33;
          v29 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 || (v30 = 1, (v29 & 0x20000000) == 0) )
            v30 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v29, v26, v27, v28) & 0xF) != 2
            || (v40 = (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0x20000000) != 0, v35 = 1, !v40) )
          {
            v35 = 0;
          }
          if ( v30 != v35 )
          {
LABEL_33:
            v44 = a2;
            v46 = a4 + a2;
            v45 = a3;
            v47 = a3 + v17;
            TransformRectBetweenCoordinateSpaces(&v44, &v44, v13, 0LL);
            v17 = v47 - v45;
          }
        }
      }
      v12 = xxxMoveWindow((struct tagWND *)v13, v17, a6);
      ThreadUnlock1(v37, v36, v38);
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
