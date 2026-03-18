/*
 * XREFs of xxxSystemTimerProc @ 0x1C00DE230
 * Callers:
 *     <none>
 * Callees:
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     _PostTransformableMessage @ 0x1C00D03E8 (_PostTransformableMessage.c)
 *     xxxFlashWindow @ 0x1C00DE38C (xxxFlashWindow.c)
 *     GetMouseKeyFlags @ 0x1C00DE6A4 (GetMouseKeyFlags.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     zzzAnimateFade @ 0x1C0152BA8 (zzzAnimateFade.c)
 *     GetActiveTrackPwnd @ 0x1C01CED34 (GetActiveTrackPwnd.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01D4268 (InvalidateWEFCOMPOSITEDDCEs.c)
 */

__int64 __fastcall xxxSystemTimerProc(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // edx
  unsigned int MouseKeyFlags; // eax
  unsigned int v10; // r11d
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
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 456) + 184LL);
      if ( v14 && a1 == (_QWORD *)GetActiveTrackPwnd(v14) )
      {
        *(_DWORD *)(*(_QWORD *)(v13 + 432) + 388LL) |= 0x200020u;
        SetWakeBit(v13, 2u);
      }
      return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
    case 0xFFF8:
      return xxxFlashWindow((ULONG_PTR)a1);
  }
  if ( (_DWORD)a3 != 65530 )
    return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
  v6 = a1[2];
  v7 = *(_QWORD *)(v6 + 456);
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
          MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(v6 + 432));
          v11 = a1[5];
          v12 = MouseKeyFlags;
          if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
            LODWORD(v15) = *(_DWORD *)(v11 + 112) - v15 - 1;
          else
            LODWORD(v15) = v15 - *(_DWORD *)(v11 + 104);
          HIDWORD(v15) -= *(_DWORD *)(v11 + 108);
        }
        else
        {
          v12 = (unsigned __int16)v8;
          v10 = 672;
          if ( (unsigned __int64)(unsigned __int16)v8 - 65 > 4 )
          {
            if ( (unsigned __int64)(unsigned __int16)v8 - 60 <= 4 )
              v12 = (HIWORD(v8) != 0) + 6LL;
          }
          else
          {
            v12 = 5LL;
          }
        }
        PostTransformableMessage((__int64)a1, v10, v12, (unsigned __int16)v15 | (unsigned __int64)(WORD2(v15) << 16), 0);
        *(_DWORD *)(v7 + 48) &= ~0x40u;
        return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
      }
    }
  }
  return result;
}
