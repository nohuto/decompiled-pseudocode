/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00F2A80
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C00B7760 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00B7AA0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00B7CF0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00B7E40 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C00B7FC0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00B8190 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00B8340 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00B84E0 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00B9430 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDECheckCurrentProcessForInjectionPermissions(int a1)
{
  int v2; // eax
  unsigned __int8 v3; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  RtlInitUnicodeString(&DestinationString, L"inputInjection");
  v2 = RtlCapabilityCheck(0LL, &DestinationString, &v6);
  v3 = 0;
  if ( v2 >= 0 )
    v3 = v6;
  if ( !a1
    && v2 >= 0
    && grpdeskRitInput
    && (*((struct tagDESKTOP **)gptiCurrent + 56) != grpdeskRitInput
     || (PVOID)PsGetCurrentProcess(grpdeskRitInput) != gpepCSRSS
     && !RtlAreAllAccessesGranted(*((_DWORD *)gptiCurrent + 220), 0x20u)) )
  {
    return 0;
  }
  return v3;
}
