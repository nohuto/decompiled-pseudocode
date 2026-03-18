/*
 * XREFs of xxxSendInput @ 0x1C00AE874
 * Callers:
 *     NtUserSendInput @ 0x1C00AE4F0 (NtUserSendInput.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01C2654 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01C27BC (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     EditionSynthesizeMouseWheel @ 0x1C01C8FF0 (EditionSynthesizeMouseWheel.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C023D2B8 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C023D38C (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00ACE38 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C00AF794 (xxxInternalKeyEventDirect.c)
 *     xxxSynchronizeDWMWindowChanges @ 0x1C00BA470 (xxxSynchronizeDWMWindowChanges.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C011CAA8 (xxxWaitForDITMouseInjectionFlush.c)
 */

__int64 __fastcall xxxSendInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  BOOL v6; // r12d
  unsigned int v7; // esi
  __int64 v8; // r8
  unsigned __int16 v9; // r14
  unsigned int *v10; // rdi
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax

  v5 = 0;
  v6 = glDitMouseHandling == 0;
  v7 = 0;
  v8 = gptiCurrent;
  v9 = *(_WORD *)(gptiCurrent + 632LL);
  if ( !a1 )
    return v7;
  v10 = (unsigned int *)(a2 + 24);
  do
  {
    v11 = *(v10 - 6);
    if ( v11 )
    {
      v12 = (unsigned int)(v11 - 1);
      if ( (_DWORD)v12 )
      {
        if ( (_DWORD)v12 == 1 && v9 >= 0x501u )
        {
          UserSetLastError(120LL, 1LL, v8, a4);
          return v7;
        }
      }
      else
      {
        v12 = gpsi;
        if ( (*gpsi & 0x2000) != 0 )
          goto LABEL_13;
        if ( v5 )
          xxxWaitForDITMouseInjectionFlush(gpsi, 1LL);
        v13 = *(v10 - 3);
        v5 = 0;
        if ( (v13 & 4) == 0 || *((_WORD *)v10 - 8) || (v13 & 0xFFFFFFF9) != 0 )
        {
          v14 = *((unsigned __int8 *)v10 - 14);
          LOBYTE(v12) = *((_BYTE *)v10 - 16);
        }
        else
        {
          v14 = *((unsigned __int16 *)v10 - 7);
          LOBYTE(v12) = -25;
        }
        v15 = xxxInternalKeyEventDirect(v12, v14, v13, *(v10 - 2), *(_QWORD *)v10);
LABEL_11:
        if ( !v15 && v9 >= 0x501u )
          return v7;
      }
      v10 += 10;
      goto LABEL_13;
    }
    v12 = gpsi;
    if ( (*gpsi & 0x2000) == 0 )
    {
      if ( (*(v10 - 1) & 0xAA) != 0 )
        xxxSynchronizeDWMWindowChanges(gpsi, 1LL);
      v17 = UpconvertTime(*v10);
      v18 = MilliSecsToQpcCount(v17);
      if ( !v6 )
        v5 = 1;
      v15 = xxxMouseEventDirect(*(v10 - 4), *(v10 - 3), *(v10 - 2), *(v10 - 1), v17, v18, *((_QWORD *)v10 + 1), v6);
      goto LABEL_11;
    }
LABEL_13:
    ++v7;
  }
  while ( v7 < a1 );
  if ( v5 )
    xxxWaitForDITMouseInjectionFlush(v12, 1LL);
  return v7;
}
