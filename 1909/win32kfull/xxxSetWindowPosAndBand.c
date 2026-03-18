/*
 * XREFs of xxxSetWindowPosAndBand @ 0x1C006C970
 * Callers:
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     xxxResetTooltip @ 0x1C00EA428 (xxxResetTooltip.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023F5C4 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsWindowGhosted @ 0x1C0036718 (IsWindowGhosted.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     InternalBeginDeferWindowPos @ 0x1C006C554 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006C5E8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     xxxHandleHealthyWindow @ 0x1C01512C0 (xxxHandleHealthyWindow.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01D34AC (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 */

__int64 __fastcall xxxSetWindowPosAndBand(
        struct tagWND *a1,
        __int64 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  int v9; // esi
  int v10; // ebp
  int v11; // r14d
  int v14; // r8d
  _BYTE *v15; // rdx
  int v16; // r15d
  int v17; // r12d
  void *v18; // rax
  struct tagSMWP *v19; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+A0h] [rbp+18h] BYREF
  int v25; // [rsp+A8h] [rbp+20h] BYREF

  v25 = a4;
  v24 = a3;
  v8 = a7;
  v9 = 0;
  v10 = a4;
  v11 = a3;
  if ( (a7 & 0x80u) != 0 && *((_QWORD *)a1 + 2) == gptiCurrent && (unsigned int)IsWindowGhosted((__int64)a1) )
    xxxHandleHealthyWindow(a1);
  v14 = 1;
  if ( (v8 & 0xC0) != 0 )
  {
    v21 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v21 + 21) & 1) == 0 )
    {
      v8 |= 3u;
      if ( (v8 & 0x40) != 0 && (*(_BYTE *)(v21 + 31) & 0x10) != 0 )
        v9 = 1;
    }
  }
  v15 = (_BYTE *)*((_QWORD *)a1 + 5);
  v16 = a6;
  v17 = a5;
  if ( (v15[21] & 4) == 0
    && *(_DWORD *)*gpDispInfo > 1u
    && (v8 & 2) == 0
    && (v15[31] & 0x50) == 0
    && (v15[30] & 0xC0) == 0xC0 )
  {
    v22 = *((_QWORD *)a1 + 15);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 40);
      if ( (*(_BYTE *)(v23 + 31) & 0x10) != 0 && !IsRectEmptyInl((const struct tagRECT *)(v23 + 88)) )
      {
        FixBogusSWP(a1, &v24, &v25, v17, v16, v8);
        v10 = v25;
        v14 = 1;
        v11 = v24;
      }
    }
  }
  v18 = InternalBeginDeferWindowPos(v14);
  if ( !v18 )
    return 0LL;
  v19 = (struct tagSMWP *)_DeferWindowPos((__int64)v18, a1, a2, v11, v10, v17, v16, v8, a8);
  if ( !v19 || !(unsigned int)xxxEndDeferWindowPosEx(v19) )
    return 0LL;
  if ( v9 )
    xxxRedrawWindow(a1, 0LL, 0LL, 1157);
  return 1LL;
}
