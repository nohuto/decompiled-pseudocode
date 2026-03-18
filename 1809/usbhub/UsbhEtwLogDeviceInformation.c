/*
 * XREFs of UsbhEtwLogDeviceInformation @ 0x1C005CB38
 * Callers:
 *     UsbhEtwRundown @ 0x1C002B2BC (UsbhEtwRundown.c)
 *     UsbhDeletePdo @ 0x1C005898C (UsbhDeletePdo.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000EA28 (UsbhEtwGetDeviceInfo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogDeviceInformation(__int64 a1, const EVENT_DESCRIPTOR *a2, char a3)
{
  _DWORD *v6; // rax
  int v7; // [rsp+60h] [rbp-9h] BYREF
  int v8; // [rsp+68h] [rbp-1h] BYREF
  __int16 v9; // [rsp+6Ch] [rbp+3h]
  __int16 v10; // [rsp+6Eh] [rbp+5h]
  __int16 v11; // [rsp+70h] [rbp+7h]
  __int16 v12; // [rsp+72h] [rbp+9h]
  _BYTE v13[48]; // [rsp+78h] [rbp+Fh] BYREF

  if ( dword_1C006E650 )
  {
    v6 = FdoExt(*(_QWORD *)(a1 + 1184));
    v8 = v6[1298];
    v9 = *((_WORD *)v6 + 2598);
    v10 = v6[1300];
    v11 = *((_WORD *)v6 + 2614);
    v12 = *((_WORD *)v6 + 2615);
    UsbhEtwGetDeviceInfo(a1, (__int64)v13);
    v7 = *(_DWORD *)(a1 + 788);
    if ( a3 )
      UsbhEtwWrite(a2, 0LL, &v8, 12LL, v13, 44LL, &v7, 4LL, a1 + 1400, 18LL, 0LL);
    else
      UsbhEtwWrite(a2, 0LL, &v8, 12LL, v13, 44LL, &v7, 4LL, 0LL);
  }
}
