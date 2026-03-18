/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x1C008D4A4
 * Callers:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0022844 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C008D220 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  int v1; // ecx

  v1 = a1 & 0x5FFFFFFF;
  return v1 == 18 || v1 == 1073766416 || v1 == 34 || v1 == 24592 || (v1 & 0xFFFE00FF) == 0x11;
}
