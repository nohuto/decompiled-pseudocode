/*
 * XREFs of NtUserUpdateDefaultDesktopThumbnail @ 0x1C021E7F0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     UserSetLastStatus @ 0x1C00C8D04 (UserSetLastStatus.c)
 *     DwmAsyncUpdateDefaultDesktopThumbnail @ 0x1C025958C (DwmAsyncUpdateDefaultDesktopThumbnail.c)
 */

__int64 __fastcall NtUserUpdateDefaultDesktopThumbnail(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  NTSTATUS updated; // eax
  void *v13; // rax

  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v11 = ValidateHwnd(a1);
    if ( !v11 )
      goto LABEL_16;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 || (unsigned int)IsTopLevelWindow(v11) && (unsigned int)IsWindowDesktopComposed(v11) )
  {
    v9 = grpdeskIODefault;
    v10 = gptiCurrent;
    if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskIODefault && (!v11 || *(_QWORD *)(v11 + 24) == grpdeskIODefault) )
    {
      v13 = (void *)ReferenceDwmApiPort(gptiCurrent, grpdeskIODefault);
      updated = DwmAsyncUpdateDefaultDesktopThumbnail(v13, a4, a5);
    }
    else
    {
      updated = -1073741790;
    }
  }
  else
  {
    updated = -1073741816;
  }
  LODWORD(v11) = updated >= 0;
  if ( updated < 0 )
  {
    LODWORD(v11) = 0;
    UserSetLastStatus(updated, 1);
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v10, v9, v7, v8);
  return (int)v11;
}
