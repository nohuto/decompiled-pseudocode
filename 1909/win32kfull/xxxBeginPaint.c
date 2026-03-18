/*
 * XREFs of xxxBeginPaint @ 0x1C0039480
 * Callers:
 *     NtUserBeginPaint @ 0x1C0039310 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00E0014 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxTooltipWndProc @ 0x1C00E96D0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0221930 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1C002873C (zzzInternalHideCaret.c)
 *     ClearHungFlag @ 0x1C003ABAC (ClearHungFlag.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C003AC74 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     UT_GetParentDCClipBox @ 0x1C003AD08 (UT_GetParentDCClipBox.c)
 *     xxxSendEraseBkgnd @ 0x1C003B4F8 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C005124C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0051838 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     CalcWindowRgn @ 0x1C0054E44 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 */

__int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 DCEx; // rax
  __int64 v11; // rsi
  __int64 result; // rax
  HRGN NCUpdateRgn; // rbx
  __int64 EmptyRgnPublic; // rax

  if ( (gdwPUDFlags & 0x10000000) != 0 )
    SetOrClrWF(1LL, a1, 1028LL, 1LL);
  SetOrClrWF(0LL, a1, 576LL, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0LL, a1, 288LL, 1LL);
      NCUpdateRgn = GetNCUpdateRgn(a1, 0);
      xxxSendNCPaint(a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x20) != 0 );
  }
  else
  {
    SetOrClrWF(0LL, a1, 288LL, 1LL);
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 304LL) )
    zzzInternalHideCaret();
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 17) & 2;
  if ( (*(_BYTE *)(v4 + 17) & 2) != 0 )
  {
    SetOrClrWF(0LL, a1, 260LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
    v4 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v4 + 136) || (*(_BYTE *)(v4 + 17) & 0x10) != 0 )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v6 + 592))-- == 1 )
    {
      *(_WORD *)(*(_QWORD *)(v6 + 440) + 6LL) &= ~0x20u;
      *(_WORD *)(*(_QWORD *)(v6 + 440) + 4LL) &= ~0x20u;
    }
  }
  SetOrClrWF(0LL, a1, 272LL, 1LL);
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_QWORD *)(v8 + 136);
  *(_QWORD *)(v8 + 136) = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( v9 )
    {
      EmptyRgnPublic = ghrgnUpdateSave;
      if ( ghrgnUpdateSave || (EmptyRgnPublic = CreateEmptyRgnPublic(), (ghrgnUpdateSave = EmptyRgnPublic) != 0) )
      {
        if ( v9 == 1 )
          CalcWindowRgn(a1, EmptyRgnPublic, (((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v9, 2LL);
        ++gnUpdateSave;
      }
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v9, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v11 = DCEx;
  if ( (unsigned int)UT_GetParentDCClipBox(a1, DCEx, a2 + 12) && v5 )
    xxxSendEraseBkgnd(a1, v11, v9);
  xxxSendChildNCPaint(a1);
  ClearHungFlag(a1);
  result = v11;
  *(_DWORD *)(a2 + 8) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 17LL) >> 2) & 1;
  return result;
}
