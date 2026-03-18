/*
 * XREFs of xxxEndScroll @ 0x1C024239C
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0123E8C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C0243620 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0243790 (xxxTrackThumb.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     _GetMessagePos @ 0x1C0117EA0 (_GetMessagePos.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D7560 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C023EADC (zzzShowCaret.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0240938 (--$FreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0240E30 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C024150C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0241608 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241CA8 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

unsigned __int8 **__fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  unsigned __int8 **result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(struct tagWND *); // rax
  struct tagSBCALC *v11; // rdx
  struct tagSBWND *v12; // rax
  __int64 (__fastcall *v13)(struct tagWND *); // rcx
  int MessagePos; // eax
  __int64 v15; // r8
  struct tagWND *v16; // rdx
  struct tagWND *v17; // rdx
  __int64 v18; // r8
  struct tagWND *v19; // rcx
  unsigned __int64 v20; // [rsp+50h] [rbp+8h]

  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  v5 = (__int64)result[89];
  if ( !v5 )
    return result;
  result = *(unsigned __int8 ***)(gptiCurrent + 424LL);
  if ( result[14] != (unsigned __int8 *)a1 )
    return result;
  if ( !*(_QWORD *)(v5 + 48) )
    return result;
  v6 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v5 + 56) = 0;
  xxxReleaseCapture();
  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  if ( (unsigned __int8 *)v5 != result[89] )
    return result;
  v10 = *(__int64 (__fastcall **)(struct tagWND *))(v5 + 48);
  if ( (char *)v10 != (char *)xxxTrackThumb )
  {
    v13 = xxxTrackBox;
    if ( v10 == xxxTrackBox )
    {
      if ( *(_QWORD *)(v5 + 64) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *(_QWORD *)(v5 + 64) = 0LL;
      }
      MessagePos = GetMessagePos((__int64)v13, v7, v8, v9);
      v15 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v15 + 26) & 0x40) != 0 )
        LODWORD(v20) = *(_DWORD *)(v15 + 96) - (__int16)MessagePos;
      else
        LODWORD(v20) = (__int16)MessagePos - *(_DWORD *)(v15 + 88);
      HIDWORD(v20) = SHIWORD(MessagePos) - *(_DWORD *)(v15 + 92);
      if ( PtInRect((_DWORD *)(v5 + 32), v20) )
        zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v5, 0LL, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(*(_QWORD *)(v5 + 96) + 12LL);
  v11 = *(struct tagSBCALC **)(v5 + 24);
  if ( !v11
    || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v11, 4LL, *(unsigned int *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
        (unsigned __int8 *)v5 == result[89]) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v12 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1);
      if ( v12 )
        DrawCtlThumb(v12);
    }
    else
    {
      xxxDrawThumb(a1, v11, (*(_DWORD *)v5 >> 1) & 1);
    }
LABEL_22:
    result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
    if ( (unsigned __int8 *)v5 == result[89] )
    {
      v16 = *(struct tagWND **)(v5 + 24);
      if ( !v16
        || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v16, 8LL, 0LL, (*(_DWORD *)v5 >> 1) & 1),
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
            (unsigned __int8 *)v5 == result[89]) )
      {
        SetOrClrWF(0, (__int64)a1, 0x610u, 1);
        SetOrClrWF(0, (__int64)a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v17 = *(struct tagWND **)(gpqForeground + 120LL);
          if ( v17 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
              xxxWindowEvent(0x80000005, v17, 0LL, 3LL, 33);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v18 = 4294967292LL;
        else
          v18 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, a1, v18, 0LL, 0);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v5 == result[89] )
        {
          v19 = *(struct tagWND **)(v5 + 16);
          if ( !v19
            || (zzzShowCaret(v19), result = (unsigned __int8 **)*((_QWORD *)a1 + 2), (unsigned __int8 *)v5 == result[89]) )
          {
            *(_QWORD *)(v5 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL) = 0LL;
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            return FreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v5);
          }
        }
      }
    }
  }
  return result;
}
