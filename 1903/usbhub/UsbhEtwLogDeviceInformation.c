/*
 * XREFs of UsbhEtwLogDeviceInformation @ 0x1C005F174
 * Callers:
 *     UsbhEtwRundown @ 0x1C002C4EC (UsbhEtwRundown.c)
 *     UsbhDeletePdo @ 0x1C005AD0C (UsbhDeletePdo.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000EEE8 (UsbhEtwGetDeviceInfo.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

unsigned int __fastcall UsbhEtwLogDeviceInformation(__int64 a1, const EVENT_DESCRIPTOR *a2, char a3)
{
  unsigned int result; // eax
  _DWORD *v7; // rax
  int v8; // [rsp+60h] [rbp-9h] BYREF
  int v9; // [rsp+68h] [rbp-1h] BYREF
  __int16 v10; // [rsp+6Ch] [rbp+3h]
  __int16 v11; // [rsp+6Eh] [rbp+5h]
  __int16 v12; // [rsp+70h] [rbp+7h]
  __int16 v13; // [rsp+72h] [rbp+9h]
  _BYTE v14[48]; // [rsp+78h] [rbp+Fh] BYREF

  result = (unsigned int)memset(v14, 0, 0x2CuLL);
  if ( dword_1C006F650 )
  {
    v7 = FdoExt(*(_QWORD *)(a1 + 1184));
    v9 = v7[1298];
    v10 = *((_WORD *)v7 + 2598);
    v11 = v7[1300];
    v12 = *((_WORD *)v7 + 2614);
    v13 = *((_WORD *)v7 + 2615);
    UsbhEtwGetDeviceInfo(a1, (__int64)v14);
    v8 = *(_DWORD *)(a1 + 788);
    if ( a3 )
      return UsbhEtwWrite(a2, 0LL, &v9, 12LL, v14, 44LL, &v8, 4LL, a1 + 1400, 18LL, 0LL);
    else
      return UsbhEtwWrite(a2, 0LL, &v9, 12LL, v14, 44LL, &v8, 4LL, 0LL);
  }
  return result;
}
