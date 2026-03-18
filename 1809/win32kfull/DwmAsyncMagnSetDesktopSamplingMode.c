/*
 * XREFs of DwmAsyncMagnSetDesktopSamplingMode @ 0x1C0258404
 * Callers:
 *     MagSetLensContextInformation @ 0x1C01BCC24 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopSamplingMode(PVOID Object, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD v10[14]; // [rsp+20h] [rbp-58h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v10, 0, sizeof(v10));
    v10[0] = 3670032;
    LOWORD(v10[1]) = 0x8000;
    v10[13] = *a3;
    v10[10] = 1073741932;
    *(_QWORD *)&v10[11] = a2;
    EtwUpdateEvent(0LL, 1073741932LL, v7, v8);
    v6 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v6;
}
