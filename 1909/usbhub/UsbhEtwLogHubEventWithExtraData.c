/*
 * XREFs of UsbhEtwLogHubEventWithExtraData @ 0x1C005F2C4
 * Callers:
 *     UsbhCreateDevice @ 0x1C000E4F8 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C00112AC (UsbhInitializeDevice.c)
 *     UsbhEtwLogPortInformation @ 0x1C00208A0 (UsbhEtwLogPortInformation.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C0020C80 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

NTSTATUS __fastcall UsbhEtwLogHubEventWithExtraData(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, __int64 a4, int a5)
{
  NTSTATUS result; // eax
  _DWORD *v9; // rax
  int v11; // [rsp+60h] [rbp-21h] BYREF
  __int64 v12; // [rsp+68h] [rbp-19h] BYREF
  int v13; // [rsp+70h] [rbp-11h]
  _BYTE v14[40]; // [rsp+78h] [rbp-9h] BYREF

  v11 = a3;
  v12 = 0LL;
  v13 = 0;
  result = (unsigned int)memset(v14, 0, 0x24uLL);
  if ( dword_1C006F650 )
  {
    v9 = FdoExt(a1);
    LODWORD(v12) = v9[1298];
    WORD2(v12) = *((_WORD *)v9 + 2598);
    HIWORD(v12) = v9[1300];
    v13 = v9[1307];
    UsbhEtwGetHubInfo((__int64)v9, (__int64)v14);
    return UsbhEtwWrite(a2, 0LL, &v12, 12LL, v14, 36LL, &v11, 4LL, a4, a5, 0LL);
  }
  return result;
}
