/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C0028BA8
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C00157E0 (NtUserEnumDisplayDevices.c)
 *     NtUserGetDC @ 0x1C00281A0 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0028430 (NtUserReleaseDC.c)
 *     LeaveCrit @ 0x1C0028BF0 (LeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C002BCB0 (UserSessionSwitchEnterCrit.c)
 *     UserDeleteW32Thread @ 0x1C002D540 (UserDeleteW32Thread.c)
 *     NtUserEnumDisplaySettings @ 0x1C0080600 (NtUserEnumDisplaySettings.c)
 *     ChangeAcquireResourceType @ 0x1C00898D0 (ChangeAcquireResourceType.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0xqx @ 0x1C00EB610 (McTemplateK0xqx.c)
 */

__int64 EtwTraceReleaseUserCrit()
{
  __int64 result; // rax
  __int64 v1; // rbx
  int v2; // r8d

  result = PsGetCurrentThreadWin32Thread();
  v1 = result;
  if ( result )
  {
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01C3328 - 1) > 2u
      && (qword_1C01C3310 & 0x200000010000000LL) != 0 )
    {
      result = qword_1C01C3318 & 0x200000010000000LL;
      if ( (qword_1C01C3318 & 0x200000010000000LL) == qword_1C01C3318 )
      {
        result = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( SBYTE2(Microsoft_Windows_Win32kEnableBits) < 0 )
          return McTemplateK0xqx(
                   *(_QWORD *)(v1 + 16),
                   (unsigned int)&ReleaseUserCritEvent,
                   v2,
                   (int)result - *(_DWORD *)(v1 + 8),
                   0,
                   *(_QWORD *)(v1 + 16));
      }
    }
  }
  return result;
}
