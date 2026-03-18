/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01AE04C
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01AE04C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01B022C (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C00612AC (GetPrimaryMonitorRectForWindow.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01AE04C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rbp
  unsigned int v7; // ecx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 i; // rsi
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v12; // xmm0
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v19[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+10h]

  v3 = *((_QWORD *)a1 + 5);
  v5 = a2;
  v7 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 288) = a2;
  v21 = v7;
  v8 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  UpdateWindowMonitor(a1, v8);
  i = *((_QWORD *)a1 + 11);
  if ( !a3 )
    goto LABEL_8;
  PostEventMessageEx(
    *((struct tagTHREADINFO **)a1 + 2),
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL),
    0x18u,
    0LL,
    0,
    v5,
    0LL,
    0LL);
  PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(&v18, (__int64)a1);
  v12 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
  PostMessage(
    a1,
    0x7Eu,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (unsigned __int16)(v12.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRectForWindow) | ((unsigned __int16)(v12.m128i_i16[2] - HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0])) << 16));
  if ( (((unsigned __int16)((unsigned int)v5 >> 8) ^ (unsigned __int16)(v21 >> 8)) & 0x1FF) != 0 )
  {
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
    goto LABEL_8;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
  v19[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v19;
  v19[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = *((_QWORD *)a1 + 11); ; i = *(_QWORD *)(i + 64) )
  {
    ThreadUnlock1(v15, v14, v16);
LABEL_8:
    if ( !i )
      break;
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
    v20[0] = *(_QWORD *)(v17 + 408);
    *(_QWORD *)(v17 + 408) = v20;
    v20[1] = i;
    _InterlockedIncrement((volatile signed __int32 *)(i + 8));
    xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)i, v5, 0);
  }
}
