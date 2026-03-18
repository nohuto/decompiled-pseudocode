/*
 * XREFs of FinalUserInit @ 0x1C00EBC78
 * Callers:
 *     xxxInitWindowStation @ 0x1C00EBBA8 (xxxInitWindowStation.c)
 * Callees:
 *     DestroyClass @ 0x1C0022594 (DestroyClass.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     GreSetBkMode @ 0x1C007BDE4 (GreSetBkMode.c)
 *     MNSetupAnimationDC @ 0x1C00EBED8 (MNSetupAnimationDC.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0111088 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 */

__int64 __fastcall FinalUserInit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  HDC v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  __int64 v16; // rcx
  struct tagPROCESSINFO *v17; // rax

  SessionDpiServerInfo = GetSessionDpiServerInfo(a1, a2, a3);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensionsInternal(
                                             *(HDC *)(gpDispInfo + 64LL),
                                             (struct tagTEXTMETRICW *)(SessionDpiServerInfo + 40),
                                             (int *)(SessionDpiServerInfo + 36),
                                             gbGreTextReady);
  v7 = Get96DpiServerInfo(v5, v4, v6);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  *(_DWORD *)(v7 + 32) = GetCharDimensionsInternal(
                           *(HDC *)(gpDispInfo + 64LL),
                           (struct tagTEXTMETRICW *)(v7 + 40),
                           (int *)(v7 + 36),
                           gbGreTextReady);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), v8, v9);
  v10 = *(HDC *)(gpDispInfo + 72LL);
  if ( !v10 )
    return 0LL;
  GreSelectFont(v10);
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 72LL), 0LL, 0LL, 1LL);
  *(_DWORD *)(gpDispInfo + 88LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 92LL) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  *(_QWORD *)(gpDispInfo + 80LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 88LL),
                                     *(unsigned int *)(gpDispInfo + 92LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v11 = *(_QWORD *)(gpDispInfo + 80LL);
  if ( !v11 )
    return 0LL;
  GreSetBitmapOwner(v11, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpDispInfo + 80LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpsi + 4944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  GreSetBkColor(*(HDC *)(gpDispInfo + 72LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState[0]);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 360); i; i = *(_QWORD *)(CurrentProcessWin32Process + 360) )
  {
    v16 = *(_QWORD *)(i + 8);
    if ( (*(_DWORD *)(v16 + 8) & 0x4000) != 0 )
      break;
    v17 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v16);
    DestroyClass(v17, (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 360));
  }
  return 1LL;
}
