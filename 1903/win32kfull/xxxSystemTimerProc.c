/*
 * XREFs of xxxSystemTimerProc @ 0x1C0083D00
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     GetMouseKeyFlags @ 0x1C0083C88 (GetMouseKeyFlags.c)
 *     xxxFlashWindow @ 0x1C0083E54 (xxxFlashWindow.c)
 *     _PostTransformableMessage @ 0x1C0087904 (_PostTransformableMessage.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     GetActiveTrackPwnd @ 0x1C01E3604 (GetActiveTrackPwnd.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E95E0 (InvalidateWEFCOMPOSITEDDCEs.c)
 *     zzzAnimateFade @ 0x1C01E9D48 (zzzAnimateFade.c)
 */

__int64 __fastcall xxxSystemTimerProc(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // edx
  int MouseKeyFlags; // eax
  int v10; // r11d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+50h] [rbp+18h]

  v3 = a3;
  if ( a3 > 0xFFFA )
    return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
  switch ( (_DWORD)a3 )
  {
    case 0xFFF5:
      return InvalidateWEFCOMPOSITEDDCEs();
    case 0xFFF6:
      return zzzAnimateFade();
    case 0xFFF7:
      v13 = a1[2];
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 448) + 184LL);
      if ( v14 && a1 == (_QWORD *)GetActiveTrackPwnd(v14) )
      {
        *(_DWORD *)(*(_QWORD *)(v13 + 424) + 396LL) |= 0x200020u;
        SetWakeBit(v13, 2LL);
      }
      return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
    case 0xFFF8:
      return xxxFlashWindow((ULONG_PTR)a1);
  }
  if ( (_DWORD)a3 != 65530 )
    return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
  v6 = a1[2];
  v7 = *(_QWORD *)(v6 + 448);
  result = *(unsigned int *)(v7 + 48);
  if ( (result & 0x40) != 0 )
  {
    result = *(_QWORD *)(v7 + 184);
    if ( *a1 == *(_QWORD *)result )
    {
      v15 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(a1[5] + 288LL));
      result = PtInRect((_DWORD *)(v7 + 196), v15);
      if ( (_DWORD)result )
      {
        v8 = *(_DWORD *)(v7 + 192);
        if ( v8 == 1 )
        {
          MouseKeyFlags = GetMouseKeyFlags(*(unsigned __int8 **)(v6 + 424));
          v11 = a1[5];
          LODWORD(v12) = MouseKeyFlags;
          if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
            LODWORD(v15) = *(_DWORD *)(v11 + 112) - v15 - 1;
          else
            LODWORD(v15) = v15 - *(_DWORD *)(v11 + 104);
          HIDWORD(v15) -= *(_DWORD *)(v11 + 108);
        }
        else
        {
          v12 = *(unsigned __int16 *)(v7 + 192);
          v10 = 672;
          if ( (unsigned __int64)(v12 - 65) > 4 )
          {
            if ( (unsigned __int64)(v12 - 60) <= 4 )
              LODWORD(v12) = (HIWORD(v8) != 0) + 6;
          }
          else
          {
            LODWORD(v12) = 5;
          }
        }
        PostTransformableMessage((_DWORD)a1, v10, v12, (unsigned __int16)v15 | (WORD2(v15) << 16), 0);
        *(_DWORD *)(v7 + 48) &= ~0x40u;
        return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
      }
    }
  }
  return result;
}
