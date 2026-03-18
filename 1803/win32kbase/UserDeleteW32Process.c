/*
 * XREFs of UserDeleteW32Process @ 0x1C00641D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0033028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

void __fastcall UserDeleteW32Process(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 1036) )
    {
      v4 = *(_QWORD *)(a1 + 1048);
      if ( *(_QWORD *)(v4 + 8) != a1 + 1048 || (v5 = *(_QWORD **)(a1 + 1056), *v5 != a1 + 1048) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v3 = *(_QWORD *)(a1 + 720);
    if ( v3 )
    {
      Win32FreePool(v3);
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 712), 0LL, 0);
    }
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    Win32FreePool(a1);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  }
  if ( !v6 )
    UserSessionSwitchLeaveCrit(v2);
}
