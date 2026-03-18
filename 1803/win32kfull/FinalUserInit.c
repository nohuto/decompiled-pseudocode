/*
 * XREFs of FinalUserInit @ 0x1C00B4064
 * Callers:
 *     xxxInitWindowStation @ 0x1C00B3FAC (xxxInitWindowStation.c)
 * Callees:
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C001160C (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     DestroyClass @ 0x1C0030804 (DestroyClass.c)
 *     MNSetupAnimationDC @ 0x1C00B428C (MNSetupAnimationDC.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C00FABFC (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 */

__int64 __fastcall FinalUserInit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  HDC v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  __int64 v15; // rcx
  struct tagPROCESSINFO *v16; // rax

  SessionDpiServerInfo = GetSessionDpiServerInfo(a1, a2, a3);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensionsInternal(
                                             *(HDC *)(gpDispInfo + 64LL),
                                             (struct tagTEXTMETRICW *)(SessionDpiServerInfo + 40),
                                             (int *)(SessionDpiServerInfo + 36),
                                             gbGreTextReady);
  v8 = Get96DpiServerInfo(v5, v4, v6, v7);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  *(_DWORD *)(v8 + 32) = GetCharDimensionsInternal(
                           *(HDC *)(gpDispInfo + 64LL),
                           (struct tagTEXTMETRICW *)(v8 + 40),
                           (int *)(v8 + 36),
                           gbGreTextReady);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v9 = *(HDC *)(gpDispInfo + 72LL);
  if ( !v9 )
    return 0LL;
  GreSelectFont(v9);
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 72LL), 0LL, 0LL, 1LL);
  *(_DWORD *)(gpDispInfo + 88LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 92LL) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  *(_QWORD *)(gpDispInfo + 80LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 88LL),
                                     *(unsigned int *)(gpDispInfo + 92LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v10 = *(_QWORD *)(gpDispInfo + 80LL);
  if ( !v10 )
    return 0LL;
  GreSetBitmapOwner(v10, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpDispInfo + 80LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpsi + 4944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  GreSetBkColor(*(HDC *)(gpDispInfo + 72LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState[0]);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 352); i; i = *(_QWORD *)(CurrentProcessWin32Process + 352) )
  {
    v15 = *(_QWORD *)(i + 8);
    if ( (*(_DWORD *)(v15 + 8) & 0x4000) != 0 )
      break;
    v16 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v15);
    DestroyClass(v16, (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 352));
  }
  return 1LL;
}
