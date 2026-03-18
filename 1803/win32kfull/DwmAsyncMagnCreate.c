/*
 * XREFs of DwmAsyncMagnCreate @ 0x1C02408AC
 * Callers:
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C019BB40 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnCreate(PVOID Object, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  unsigned int v9; // ebx
  _DWORD v11[16]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  v9 = -1073741823;
  if ( Object )
  {
    memset(v11, 0, sizeof(v11));
    v11[0] = 4194328;
    LOWORD(v11[1]) = 0x8000;
    v11[10] = 1073741921;
    *(_QWORD *)&v11[11] = a2;
    LOBYTE(v4) = a4 == 0;
    *(_QWORD *)&v11[13] = a3;
    v11[15] = v4;
    EtwUpdateEvent(a2);
    v9 = LpcRequestPort(Object, v11);
    ObfDereferenceObject(Object);
  }
  return v9;
}
