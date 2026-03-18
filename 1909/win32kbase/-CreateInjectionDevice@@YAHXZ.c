/*
 * XREFs of ?CreateInjectionDevice@@YAHXZ @ 0x1C018C5AC
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C018C72C (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C018CA00 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C014A3CC (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C018C5FC (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 */

__int64 CreateInjectionDevice(void)
{
  __int64 result; // rax
  struct tagRECT *v1; // rdx
  void *v2; // rcx
  struct tagRECT *v3; // r8

  result = RIMIDE_InitializePointerDeviceInjection(
             2,
             10,
             *(_QWORD *)(gpDispInfo + 96),
             3u,
             1,
             0,
             (__int64 *)&TouchExtensibility::ghInjectionDevice);
  if ( (_DWORD)result )
    return GetDeviceRects(v2, v1, v3);
  return result;
}
