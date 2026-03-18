/*
 * XREFs of DwmAsyncMagnDestroy @ 0x1C0240970
 * Callers:
 *     MagpDecomposeDesktop @ 0x1C0009D68 (MagpDecomposeDesktop.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C019B120 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C019BB40 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnDestroy(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-68h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v8, 0, 0x3CuLL);
    v8[0] = 3932180;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741922;
    *(_QWORD *)&v8[11] = a2;
    *(_QWORD *)&v8[13] = a3;
    EtwUpdateEvent(a2);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
