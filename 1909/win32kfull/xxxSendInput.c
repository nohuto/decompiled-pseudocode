/*
 * XREFs of xxxSendInput @ 0x1C001E64C
 * Callers:
 *     NtUserSendInput @ 0x1C001DD40 (NtUserSendInput.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C0202A90 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C0202BF8 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0255884 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0255958 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     xxxSynchronizeDWMWindowChanges @ 0x1C0016A70 (xxxSynchronizeDWMWindowChanges.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C001B138 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     xxxInternalKeyEventDirect @ 0x1C001F0D0 (xxxInternalKeyEventDirect.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C00FEDC8 (xxxWaitForDITMouseInjectionFlush.c)
 *     WPP_RECORDER_SF_dd @ 0x1C01DC7DC (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall xxxSendInput(unsigned int a1, __int64 a2)
{
  int v3; // r14d
  BOOL v4; // r12d
  unsigned int v5; // esi
  unsigned __int16 v6; // bp
  unsigned int *v7; // rdi
  _UNKNOWN **v8; // rdx
  const ULONG_PTR *v9; // r8
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // edx
  int v14; // r8d
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  int v18; // r9d
  int v19; // r9d

  v3 = 0;
  v4 = glDitMouseHandling == 0;
  v5 = 0;
  v6 = *(_WORD *)(gptiCurrent + 624LL);
  if ( !a1 )
    return v5;
  v7 = (unsigned int *)(a2 + 24);
  v8 = &WPP_RECORDER_INITIALIZED;
  v9 = &WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids;
  do
  {
    v10 = *(v7 - 6);
    if ( v10 )
    {
      v11 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v11 == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dd(
              1,
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              (unsigned int)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids,
              31,
              (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids,
              v5,
              v6 >= 0x501u);
          if ( v6 >= 0x501u )
          {
            UserSetLastError(120LL);
            return v5;
          }
        }
        goto LABEL_10;
      }
      v11 = gpsi;
      if ( (*gpsi & 0x2000) == 0 )
      {
        if ( v3 )
          xxxWaitForDITMouseInjectionFlush(
            gpsi,
            &WPP_RECORDER_INITIALIZED,
            &WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
        v12 = *(v7 - 3);
        v3 = 0;
        if ( (v12 & 4) != 0 && !*((_WORD *)v7 - 8) && (v12 & 0xFFFFFFF9) == 0 )
        {
          LOBYTE(v11) = -25;
          if ( !(unsigned int)xxxInternalKeyEventDirect(
                                v11,
                                *((unsigned __int16 *)v7 - 7),
                                v12,
                                *(v7 - 2),
                                *(_QWORD *)v7) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v19 = 29;
              goto LABEL_39;
            }
LABEL_40:
            if ( v6 >= 0x501u )
              return v5;
          }
LABEL_10:
          v7 += 10;
          goto LABEL_11;
        }
        LOBYTE(v11) = *((_BYTE *)v7 - 16);
        if ( (unsigned int)xxxInternalKeyEventDirect(v11, *((unsigned __int8 *)v7 - 14), v12, *(v7 - 2), *(_QWORD *)v7) )
          goto LABEL_10;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v19 = 30;
LABEL_39:
        WPP_RECORDER_SF_dd(
          v11,
          v13,
          v14,
          v19,
          (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids,
          v5,
          v6 >= 0x501u);
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 28;
        goto LABEL_34;
      }
    }
    else
    {
      v11 = gpsi;
      if ( (*gpsi & 0x2000) == 0 )
      {
        if ( (*(v7 - 1) & 0xAA) != 0 )
          xxxSynchronizeDWMWindowChanges(
            gpsi,
            (__int64)&WPP_RECORDER_INITIALIZED,
            (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
        v16 = UpconvertTime(*v7, v8, v9);
        v17 = MilliSecsToQpcCount(v16);
        if ( !v4 )
          v3 = 1;
        if ( (unsigned int)xxxMouseEventDirect(
                             *(v7 - 4),
                             *(v7 - 3),
                             *(v7 - 2),
                             *(v7 - 1),
                             v16,
                             v17,
                             *((_QWORD *)v7 + 1),
                             v4) )
          goto LABEL_10;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v19 = 27;
        goto LABEL_39;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 26;
LABEL_34:
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_D(v11, (_DWORD)v8, 20, v18, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids, v5);
LABEL_11:
        v8 = &WPP_RECORDER_INITIALIZED;
        v9 = &WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids;
      }
    }
    ++v5;
  }
  while ( v5 < a1 );
  if ( v3 )
    xxxWaitForDITMouseInjectionFlush(v11, &WPP_RECORDER_INITIALIZED, &WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
  return v5;
}
