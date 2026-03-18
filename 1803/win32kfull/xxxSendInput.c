/*
 * XREFs of xxxSendInput @ 0x1C005D570
 * Callers:
 *     NtUserSendInput @ 0x1C005D460 (NtUserSendInput.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01A10D8 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01A1224 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     EditionSynthesizeMouseWheel @ 0x1C01A6F70 (EditionSynthesizeMouseWheel.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0213A30 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0213AF8 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     DwmSyncFlushWindowChanges @ 0x1C005A7AC (DwmSyncFlushWindowChanges.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C005B7C4 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C005D7AC (xxxInternalKeyEventDirect.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C006009C (xxxWaitForDITMouseInjectionFlush.c)
 */

__int64 __fastcall xxxSendInput(unsigned int a1, __int64 a2)
{
  int v3; // ebp
  BOOL v4; // r12d
  unsigned int v5; // esi
  __int64 v6; // r8
  unsigned __int16 v7; // r14
  unsigned int *v8; // rdi
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  void *v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax

  v3 = 0;
  v4 = glDitMouseHandling == 0;
  v5 = 0;
  v6 = gptiCurrent;
  v7 = *(_WORD *)(gptiCurrent + 624LL);
  if ( !a1 )
    return v5;
  v8 = (unsigned int *)(a2 + 24);
  v9 = 1LL;
  do
  {
    v10 = *(v8 - 6);
    if ( v10 )
    {
      v11 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v11 == 1 && v7 >= 0x501u )
        {
          UserSetLastError(120LL, 1LL);
          return v5;
        }
      }
      else
      {
        v11 = gpsi;
        if ( (*gpsi & 0x2000) != 0 )
          goto LABEL_14;
        if ( v3 )
          xxxWaitForDITMouseInjectionFlush(gpsi, 1LL);
        v12 = *(v8 - 3);
        v3 = 0;
        if ( (v12 & 4) == 0 || *((_WORD *)v8 - 8) || (v12 & 0xFFFFFFF9) != 0 )
        {
          v13 = *((unsigned __int8 *)v8 - 14);
          LOBYTE(v11) = *((_BYTE *)v8 - 16);
        }
        else
        {
          v13 = *((unsigned __int16 *)v8 - 7);
          LOBYTE(v11) = -25;
        }
        v14 = xxxInternalKeyEventDirect(v11, v13, v12, *(v8 - 2), *(_QWORD *)v8);
LABEL_11:
        if ( !v14 && v7 >= 0x501u )
          return v5;
        v9 = 1LL;
      }
      v8 += 10;
      goto LABEL_14;
    }
    v11 = gpsi;
    if ( (*gpsi & 0x2000) == 0 )
    {
      if ( (*(v8 - 1) & 0x19FE) != 0 )
      {
        v16 = (void *)ReferenceDwmApiPort(gpsi, 1LL, v6);
        if ( v16 )
        {
          LeaveCrit();
          DwmSyncFlushWindowChanges(v16);
          EnterCrit(0LL, 1LL);
        }
      }
      v17 = UpconvertTime(*v8, v9);
      v18 = MilliSecsToQpcCount(v17);
      if ( !v4 )
        v3 = 1;
      v14 = xxxMouseEventDirect(*(v8 - 4), *(v8 - 3), *(v8 - 2), *(v8 - 1), v17, v18, *((_QWORD *)v8 + 1), v4);
      goto LABEL_11;
    }
LABEL_14:
    ++v5;
  }
  while ( v5 < a1 );
  if ( v3 )
    xxxWaitForDITMouseInjectionFlush(v11, 1LL);
  return v5;
}
