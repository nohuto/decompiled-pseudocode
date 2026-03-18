/*
 * XREFs of xxxEndScroll @ 0x1C0241D7C
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FE7BC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C0242EE0 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0243050 (xxxTrackThumb.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     _GetMessagePos @ 0x1C00F1E60 (_GetMessagePos.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D73E0 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C023E4BC (zzzShowCaret.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0240318 (--$FreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0240810 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240EEC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240FE8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241688 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

unsigned __int8 **__fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  unsigned __int8 **result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 (__fastcall *v9)(struct tagWND *); // rax
  struct tagSBCALC *v10; // rdx
  struct tagSBWND *v11; // rax
  __int64 (__fastcall *v12)(struct tagWND *); // rcx
  int MessagePos; // eax
  __int64 v14; // r8
  struct tagWND *v15; // rdx
  struct tagWND *v16; // rdx
  __int64 v17; // r8
  struct tagWND *v18; // rcx
  unsigned __int64 v19; // [rsp+50h] [rbp+8h]

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
  v9 = *(__int64 (__fastcall **)(struct tagWND *))(v5 + 48);
  if ( (char *)v9 != (char *)xxxTrackThumb )
  {
    v12 = xxxTrackBox;
    if ( v9 == xxxTrackBox )
    {
      if ( *(_QWORD *)(v5 + 64) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *(_QWORD *)(v5 + 64) = 0LL;
      }
      MessagePos = GetMessagePos((__int64)v12, v7, v8);
      v14 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v14 + 26) & 0x40) != 0 )
        LODWORD(v19) = *(_DWORD *)(v14 + 96) - (__int16)MessagePos;
      else
        LODWORD(v19) = (__int16)MessagePos - *(_DWORD *)(v14 + 88);
      HIDWORD(v19) = SHIWORD(MessagePos) - *(_DWORD *)(v14 + 92);
      if ( PtInRect((_DWORD *)(v5 + 32), v19) )
        zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v5, 0, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(*(_QWORD *)(v5 + 96) + 12LL);
  v10 = *(struct tagSBCALC **)(v5 + 24);
  if ( !v10
    || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v10, 4LL, *(unsigned int *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
        (unsigned __int8 *)v5 == result[89]) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v11 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1);
      if ( v11 )
        DrawCtlThumb(v11);
    }
    else
    {
      xxxDrawThumb(a1, v10, (*(_DWORD *)v5 >> 1) & 1);
    }
LABEL_22:
    result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
    if ( (unsigned __int8 *)v5 == result[89] )
    {
      v15 = *(struct tagWND **)(v5 + 24);
      if ( !v15
        || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v15, 8LL, 0LL, (*(_DWORD *)v5 >> 1) & 1),
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
            (unsigned __int8 *)v5 == result[89]) )
      {
        SetOrClrWF(0, (__int64)a1, 0x610u, 1);
        SetOrClrWF(0, (__int64)a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v16 = *(struct tagWND **)(gpqForeground + 120LL);
          if ( v16 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
              xxxWindowEvent(0x80000005, v16, 0LL, 3, 33);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v17 = 4294967292LL;
        else
          v17 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, a1, v17, 0, 0);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v5 == result[89] )
        {
          v18 = *(struct tagWND **)(v5 + 16);
          if ( !v18
            || (zzzShowCaret(v18), result = (unsigned __int8 **)*((_QWORD *)a1 + 2), (unsigned __int8 *)v5 == result[89]) )
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
