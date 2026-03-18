/*
 * XREFs of xxxBeginPaint @ 0x1C001DEFC
 * Callers:
 *     NtUserBeginPaint @ 0x1C001DDB0 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00B84F0 (xxxTooltipWndProc.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00FD7BC (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C020A3D0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendEraseBkgnd @ 0x1C001C804 (xxxSendEraseBkgnd.c)
 *     ClearHungFlag @ 0x1C001F610 (ClearHungFlag.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C001F6D8 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     UT_GetParentDCClipBox @ 0x1C001F760 (UT_GetParentDCClipBox.c)
 *     CalcWindowRgn @ 0x1C006F268 (CalcWindowRgn.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C0072AE4 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0073424 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     zzzInternalHideCaret @ 0x1C0073DD4 (zzzInternalHideCaret.c)
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
    SetOrClrWF(1, (__int64)a1, 0x404u, 1);
  SetOrClrWF(0, (__int64)a1, 0x240u, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0, (__int64)a1, 0x120u, 1);
      NCUpdateRgn = GetNCUpdateRgn(a1, 0);
      xxxSendNCPaint(a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x20) != 0 );
  }
  else
  {
    SetOrClrWF(0, (__int64)a1, 0x120u, 1);
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
    zzzInternalHideCaret();
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 17) & 2;
  if ( (*(_BYTE *)(v4 + 17) & 2) != 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x104u, 1);
    SetOrClrWF(0, (__int64)a1, 0x102u, 1);
    v4 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v4 + 136) || (*(_BYTE *)(v4 + 17) & 0x10) != 0 )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v6 + 600))-- == 1 )
    {
      *(_WORD *)(*(_QWORD *)(v6 + 448) + 6LL) &= ~0x20u;
      *(_WORD *)(*(_QWORD *)(v6 + 448) + 4LL) &= ~0x20u;
    }
  }
  SetOrClrWF(0, (__int64)a1, 0x110u, 1);
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
    xxxSendEraseBkgnd((__int64)a1, v11, v9);
  xxxSendChildNCPaint(a1);
  ClearHungFlag(a1);
  result = v11;
  *(_DWORD *)(a2 + 8) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 17LL) >> 2) & 1;
  return result;
}
