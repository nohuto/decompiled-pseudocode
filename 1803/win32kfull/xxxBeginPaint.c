/*
 * XREFs of xxxBeginPaint @ 0x1C0037D64
 * Callers:
 *     NtUserBeginPaint @ 0x1C0037C30 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00E22F4 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxTooltipWndProc @ 0x1C01044C0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01E44E4 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     UT_GetParentDCClipBox @ 0x1C00380C0 (UT_GetParentDCClipBox.c)
 *     zzzInternalHideCaret @ 0x1C003AA10 (zzzInternalHideCaret.c)
 *     CalcWindowRgn @ 0x1C0074A3C (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ThreadLockExchangeAlways @ 0x1C00DACD0 (ThreadLockExchangeAlways.c)
 *     xxxSendEraseBkgnd @ 0x1C00E99D8 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F0E9C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F2C68 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 DCEx; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v21; // rax
  HRGN NCUpdateRgn; // rbx
  __int64 EmptyRgnPublic; // rax
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF

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
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 296LL) )
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
  v12 = *((_QWORD *)a1 + 5);
  v13 = *(_QWORD *)(v12 + 136);
  *(_QWORD *)(v12 + 136) = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( v13 )
    {
      EmptyRgnPublic = ghrgnUpdateSave;
      if ( ghrgnUpdateSave
        || (EmptyRgnPublic = CreateEmptyRgnPublic(v9, v8, v10, v11), (ghrgnUpdateSave = EmptyRgnPublic) != 0) )
      {
        if ( v13 == 1 )
          CalcWindowRgn(a1, EmptyRgnPublic, (((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v13, 2LL);
        ++gnUpdateSave;
      }
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v13, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v15 = DCEx;
  if ( (unsigned int)UT_GetParentDCClipBox(a1, DCEx, a2 + 12) && v5 )
    xxxSendEraseBkgnd(a1, v15, v13);
  v18 = gptiCurrent;
  v24[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v24;
  v24[1] = 0LL;
  for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 64) )
  {
    v21 = *(_QWORD *)(i + 40);
    if ( !*(_QWORD *)(v21 + 136) && (*(_BYTE *)(v21 + 17) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v24);
      xxxSendNCPaint((struct tagWND *)i, (HRGN)1);
    }
  }
  ThreadUnlock1(v18, v16, v17);
  ClearHungFlag(a1);
  result = v15;
  *(_DWORD *)(a2 + 8) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 17LL) >> 2) & 1;
  return result;
}
