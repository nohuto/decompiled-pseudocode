/*
 * XREFs of DwmAsyncMagnSetDesktopSamplingMode @ 0x1C0240AF8
 * Callers:
 *     MagSetLensContextInformation @ 0x1C019BB40 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopSamplingMode(PVOID Object, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  _DWORD v8[14]; // [rsp+20h] [rbp-58h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v8, 0, sizeof(v8));
    v8[0] = 3670032;
    LOWORD(v8[1]) = 0x8000;
    v8[13] = *a3;
    v8[10] = 1073741933;
    *(_QWORD *)&v8[11] = a2;
    EtwUpdateEvent(0LL);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
