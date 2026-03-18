/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0146184
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C0116A40 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0116DB0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0117010 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0117180 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01175E0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0117D50 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C01181A0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01185E0 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0119A00 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDECheckCurrentProcessForInjectionPermissions(int a1)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned __int8 v4; // di
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  *(_QWORD *)&v6.Length = 0LL;
  v6.Buffer = 0LL;
  RtlInitUnicodeString(&v6, L"inputInjection");
  v2 = RtlCapabilityCheck(0LL, &v6, &v7);
  v4 = 0;
  if ( v2 >= 0 )
    v4 = v7;
  if ( !a1
    && v2 >= 0
    && grpdeskRitInput
    && (*((struct tagDESKTOP **)gptiCurrent + 56) != grpdeskRitInput
     || (PVOID)PsGetCurrentProcess(grpdeskRitInput, v3) != gpepCSRSS
     && !RtlAreAllAccessesGranted(*((_DWORD *)gptiCurrent + 222), 0x20u)) )
  {
    return 0;
  }
  return v4;
}
