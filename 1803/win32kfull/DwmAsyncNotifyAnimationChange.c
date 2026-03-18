/*
 * XREFs of DwmAsyncNotifyAnimationChange @ 0x1C0066D7C
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0050598 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E711C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyAnimationChange(PVOID Object, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-48h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v8, 0, 0x38uLL);
    v8[0] = 3670032;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741869;
    *(_QWORD *)&v8[11] = a3;
    v8[13] = a2;
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
