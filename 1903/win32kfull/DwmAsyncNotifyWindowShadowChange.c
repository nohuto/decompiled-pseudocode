/*
 * XREFs of DwmAsyncNotifyWindowShadowChange @ 0x1C027267C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     _NotifyOverlayWindow @ 0x1C01DA7F0 (_NotifyOverlayWindow.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyWindowShadowChange(PVOID Object)
{
  unsigned int v2; // edi
  _DWORD v4[14]; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1073741823;
  if ( Object )
  {
    memset(v4, 0, 0x2CuLL);
    v4[0] = 2883588;
    LOWORD(v4[1]) = 0x8000;
    v4[10] = 1073741835;
    v2 = LpcRequestPort(Object, v4);
    ObfDereferenceObject(Object);
  }
  return v2;
}
