/*
 * XREFs of DwmAsyncMagnDestroy @ 0x1C0258258
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     MagpDecomposeDesktop @ 0x1C00C9764 (MagpDecomposeDesktop.c)
 *     MagContextThreadCallout @ 0x1C01BC190 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01BCC24 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnDestroy(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD v10[16]; // [rsp+20h] [rbp-68h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v10, 0, 0x3CuLL);
    v10[0] = 3932180;
    LOWORD(v10[1]) = 0x8000;
    v10[10] = 1073741921;
    *(_QWORD *)&v10[11] = a2;
    *(_QWORD *)&v10[13] = a3;
    EtwUpdateEvent(a2, 1073741921LL, v7, v8);
    v6 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v6;
}
