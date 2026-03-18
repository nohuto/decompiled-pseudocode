/*
 * XREFs of DrvIsNotUsingGraphicsDevice @ 0x1C012B8E8
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105800 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C003FDC0 (UserIsUserCritSecIn.c)
 */

__int64 __fastcall DrvIsNotUsingGraphicsDevice(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 i; // rdi

  v5 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a1 )
    return 1LL;
  v7 = *(_DWORD *)(a1 + 20);
  if ( !v7 )
    return 1LL;
  for ( i = a1 + 40;
        (*(_DWORD *)(*(_QWORD *)i + 40LL) & 0x20000) != 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 2576LL) + 160LL) & 0x2000000) != 0;
        i += 56LL )
  {
    if ( ++v5 >= v7 )
      return 1LL;
  }
  return 0LL;
}
