/*
 * XREFs of ?CreateInjectionDevice@@YAHXZ @ 0x1C018E79C
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C018E91C (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C018EBF0 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C014CA3C (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C018E7EC (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
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
