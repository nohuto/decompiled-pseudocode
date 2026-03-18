/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5B14
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5B14 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7AC0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     UpdateWindowMonitor @ 0x1C0068A30 (UpdateWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C0106E14 (GetPrimaryMonitorRectForWindow.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5B14 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // r14
  unsigned int v7; // r15d
  _QWORD *v8; // rax
  _BOOL8 v9; // rdx
  __int64 v10; // r8
  __int64 i; // rsi
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v13; // xmm0
  int v14; // ecx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  struct tagWND *v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]
  __int64 v26; // [rsp+78h] [rbp-8h]

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
  PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(&v20, a1);
  v13 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
  PostMessage(
    (int)a1,
    126,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (unsigned __int16)(v13.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRectForWindow) | ((unsigned __int16)(v13.m128i_i16[2] - HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0])) << 16));
  if ( (((unsigned __int16)((unsigned int)v5 >> 8) ^ (unsigned __int16)(v7 >> 8)) & 0x1FF) != 0 )
    goto LABEL_11;
  v14 = 1;
  v10 = 0x20000000LL;
  v9 = (v7 & 0xF) == 2 && (v7 & 0x20000000) != 0;
  if ( (v5 & 0xF) != 2 || (v5 & 0x20000000) == 0 )
    v14 = 0;
  if ( v9 != v14 )
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
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10);
  v21 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
  v22 = a1;
  HMLockObject(a1);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = *((_QWORD *)a1 + 14); ; i = *(_QWORD *)(i + 88) )
  {
    ThreadUnlock1(v17, v16, v18);
LABEL_16:
    if ( !i )
      break;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10);
    v24 = *(_QWORD *)(v19 + 408);
    *(_QWORD *)(v19 + 408) = &v24;
    v25 = i;
    HMLockObject(i);
    xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)i, v5, 0);
  }
}
