/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x1C00F2B80
 * Callers:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00447D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     NtUserTransformPoint @ 0x1C00F2A40 (NtUserTransformPoint.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  int v1; // ecx

  v1 = a1 & 0x5FFFFFFF;
  return v1 == 34 || v1 == 18 || v1 == 1073766416 || v1 == 24592 || (v1 & 0xFFFE00FF) == 0x11;
}
