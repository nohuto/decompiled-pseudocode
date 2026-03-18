/*
 * XREFs of xxxEndScroll @ 0x1C0200E84
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FF48C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C0202070 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C02021E0 (xxxTrackThumb.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     _GetMessagePos @ 0x1C00F5880 (_GetMessagePos.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01A2874 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C01FE0D4 (zzzShowCaret.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C01FFC28 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0200084 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0200154 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02007D0 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

__int64 __fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(struct tagWND *); // rax
  struct tagSBCALC *v9; // rdx
  struct tagSBWND *v10; // rax
  __int64 (__fastcall *v11)(struct tagWND *); // rcx
  int MessagePos; // eax
  __int64 v13; // r9
  struct tagWND *v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  struct tagWND *v18; // rcx
  unsigned __int64 v19; // [rsp+50h] [rbp+8h]

  result = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(result + 704);
  if ( !v5 )
    return result;
  result = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(struct tagWND **)(result + 104) != a1 )
    return result;
  if ( !*(_QWORD *)(v5 + 48) )
    return result;
  v6 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v5 + 56) = 0;
  xxxReleaseCapture();
  result = *((_QWORD *)a1 + 2);
  if ( v5 != *(_QWORD *)(result + 704) )
    return result;
  v8 = *(__int64 (__fastcall **)(struct tagWND *))(v5 + 48);
  if ( (char *)v8 != (char *)xxxTrackThumb )
  {
    v11 = xxxTrackBox;
    if ( v8 == xxxTrackBox )
    {
      if ( *(_QWORD *)(v5 + 64) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *(_QWORD *)(v5 + 64) = 0LL;
      }
      MessagePos = GetMessagePos((__int64)v11, v7);
      v13 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v13 + 26) & 0x40) != 0 )
        LODWORD(v19) = *(_DWORD *)(v13 + 96) - (__int16)MessagePos;
      else
        LODWORD(v19) = (__int16)MessagePos - *(_DWORD *)(v13 + 88);
      HIDWORD(v19) = SHIWORD(MessagePos) - *(_DWORD *)(v13 + 92);
      if ( PtInRect((_DWORD *)(v5 + 32), v19) )
        zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v5, 0, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(*(_QWORD *)(v5 + 96) + 12LL);
  v9 = *(struct tagSBCALC **)(v5 + 24);
  if ( !v9
    || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v9, 4LL, *(unsigned int *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
        result = *((_QWORD *)a1 + 2),
        v5 == *(_QWORD *)(result + 704)) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v10 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1);
      if ( v10 )
        DrawCtlThumb(v10);
    }
    else
    {
      xxxDrawThumb(a1, v9, (*(_DWORD *)v5 >> 1) & 1);
    }
LABEL_22:
    result = *((_QWORD *)a1 + 2);
    if ( v5 == *(_QWORD *)(result + 704) )
    {
      v14 = *(struct tagWND **)(v5 + 24);
      if ( !v14
        || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v14, 8LL, 0LL, (*(_DWORD *)v5 >> 1) & 1),
            result = *((_QWORD *)a1 + 2),
            v5 == *(_QWORD *)(result + 704)) )
      {
        SetOrClrWF(0, (__int64)a1, 1552, 1);
        SetOrClrWF(0, (__int64)a1, 1568, 1);
        if ( gpqForeground )
        {
          v15 = *(_QWORD *)(gpqForeground + 112LL);
          if ( v15 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
              xxxWindowEvent(0x80000005, v15, 0, 3, 33);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v16 = -4;
        else
          v16 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, (__int64)a1, v16, 0, 0);
        result = *((_QWORD *)a1 + 2);
        if ( v5 == *(_QWORD *)(result + 704) )
        {
          v18 = *(struct tagWND **)(v5 + 16);
          if ( !v18 || (zzzShowCaret(v18, v17), result = *((_QWORD *)a1 + 2), v5 == *(_QWORD *)(result + 704)) )
          {
            *(_QWORD *)(v5 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL) = 0LL;
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            return Win32FreePool(v5);
          }
        }
      }
    }
  }
  return result;
}
