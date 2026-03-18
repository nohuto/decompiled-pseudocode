/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5C94
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5C94 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7C40 (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C001AEDC (GetPrimaryMonitorRectForWindow.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UpdateWindowMonitor @ 0x1C00C7360 (UpdateWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5C94 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // r14
  unsigned int v7; // r15d
  _QWORD *v8; // rax
  _BOOL8 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 i; // rsi
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v14; // xmm0
  int v15; // ecx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  struct tagWND *v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+78h] [rbp-8h]

  v3 = *((_QWORD *)a1 + 5);
  v5 = a2;
  v7 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 288) = a2;
  v8 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  UpdateWindowMonitor(a1, v8);
  i = *((_QWORD *)a1 + 14);
  if ( !a3 )
    goto LABEL_16;
  PostEventMessageEx(
    *((struct tagTHREADINFO **)a1 + 2),
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL),
    0x18u,
    0LL,
    0,
    v5,
    0LL,
    0LL);
  PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(&v21, (__int64)a1);
  v14 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
  PostMessage(
    (int)a1,
    126,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (unsigned __int16)(v14.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRectForWindow) | ((unsigned __int16)(v14.m128i_i16[2] - HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0])) << 16));
  if ( (((unsigned __int16)((unsigned int)v5 >> 8) ^ (unsigned __int16)(v7 >> 8)) & 0x1FF) != 0 )
    goto LABEL_11;
  v15 = 1;
  v10 = 0x20000000LL;
  v9 = (v7 & 0xF) == 2 && (v7 & 0x20000000) != 0;
  if ( (v5 & 0xF) != 2 || (v5 & 0x20000000) == 0 )
    v15 = 0;
  if ( v9 != v15 )
  {
LABEL_11:
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL),
      9u,
      (__int64)a1,
      0x1Au,
      42LL,
      -1LL,
      0LL);
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL),
      9u,
      (__int64)a1,
      0x1Au,
      46LL,
      -1LL,
      0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 240LL) )
    goto LABEL_16;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
  v22 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v22;
  v23 = a1;
  HMLockObject(a1);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = *((_QWORD *)a1 + 14); ; i = *(_QWORD *)(i + 88) )
  {
    ThreadUnlock1(v18, v17, v19);
LABEL_16:
    if ( !i )
      break;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
    v25 = *(_QWORD *)(v20 + 408);
    *(_QWORD *)(v20 + 408) = &v25;
    v26 = i;
    HMLockObject(i);
    xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)i, v5, 0);
  }
}
