/*
 * XREFs of xxxSystemTimerProc @ 0x1C0015130
 * Callers:
 *     <none>
 * Callees:
 *     GetMouseKeyFlags @ 0x1C00117BC (GetMouseKeyFlags.c)
 *     _PostTransformableMessage @ 0x1C0012284 (_PostTransformableMessage.c)
 *     xxxFlashWindow @ 0x1C0015284 (xxxFlashWindow.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     GetActiveTrackPwnd @ 0x1C01E3484 (GetActiveTrackPwnd.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E9460 (InvalidateWEFCOMPOSITEDDCEs.c)
 *     zzzAnimateFade @ 0x1C01E9BC8 (zzzAnimateFade.c)
 */

__int64 __fastcall xxxSystemTimerProc(ULONG_PTR a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // edx
  unsigned int MouseKeyFlags; // eax
  unsigned int v10; // r11d
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // [rsp+50h] [rbp+18h]

  v3 = a3;
  if ( a3 > 0xFFFA )
    return FindTimer(a1, v3, 2, 1, 0LL);
  switch ( (_DWORD)a3 )
  {
    case 0xFFF5:
      return InvalidateWEFCOMPOSITEDDCEs();
    case 0xFFF6:
      return zzzAnimateFade();
    case 0xFFF7:
      v13 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(*(_QWORD *)(v13 + 448) + 184LL) && a1 == GetActiveTrackPwnd() )
      {
        *(_DWORD *)(*(_QWORD *)(v13 + 424) + 396LL) |= 0x200020u;
        SetWakeBit(v13, 2LL);
      }
      return FindTimer(a1, v3, 2, 1, 0LL);
    case 0xFFF8:
      return xxxFlashWindow(a1);
  }
  if ( (_DWORD)a3 != 65530 )
    return FindTimer(a1, v3, 2, 1, 0LL);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v6 + 448);
  result = *(unsigned int *)(v7 + 48);
  if ( (result & 0x40) != 0 )
  {
    result = *(_QWORD *)(v7 + 184);
    if ( *(_QWORD *)a1 == *(_QWORD *)result )
    {
      v14 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL));
      result = PtInRect(v7 + 196, v14);
      if ( (_DWORD)result )
      {
        v8 = *(_DWORD *)(v7 + 192);
        if ( v8 == 1 )
        {
          MouseKeyFlags = GetMouseKeyFlags(*(unsigned __int8 **)(v6 + 424));
          v11 = *(_QWORD *)(a1 + 40);
          v12 = MouseKeyFlags;
          if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
            LODWORD(v14) = *(_DWORD *)(v11 + 112) - v14 - 1;
          else
            LODWORD(v14) = v14 - *(_DWORD *)(v11 + 104);
          HIDWORD(v14) -= *(_DWORD *)(v11 + 108);
        }
        else
        {
          v12 = *(unsigned __int16 *)(v7 + 192);
          v10 = 672;
          if ( v12 - 65 > 4 )
          {
            if ( v12 - 60 <= 4 )
              v12 = (HIWORD(v8) != 0) + 6LL;
          }
          else
          {
            v12 = 5LL;
          }
        }
        PostTransformableMessage(
          (struct tagWND *)a1,
          v10,
          v12,
          (unsigned __int16)v14 | (unsigned __int64)(WORD2(v14) << 16),
          0);
        *(_DWORD *)(v7 + 48) &= ~0x40u;
        return FindTimer(a1, v3, 2, 1, 0LL);
      }
    }
  }
  return result;
}
