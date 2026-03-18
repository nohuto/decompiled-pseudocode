/*
 * XREFs of UsbhEtwLogHubException @ 0x1C005F3C8
 * Callers:
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C0020C80 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

NTSTATUS __fastcall UsbhEtwLogHubException(__int64 a1, int a2, int a3, int a4, char a5, __int64 a6, int a7)
{
  __int64 v7; // rdi
  NTSTATUS result; // eax
  _DWORD *v10; // rax
  int v11; // [rsp+78h] [rbp-49h]
  int v12; // [rsp+90h] [rbp-31h] BYREF
  int v13; // [rsp+98h] [rbp-29h] BYREF
  int v14; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v15; // [rsp+A8h] [rbp-19h] BYREF
  int v16; // [rsp+B0h] [rbp-11h]
  _BYTE v17[40]; // [rsp+B8h] [rbp-9h] BYREF

  v7 = a6;
  v14 = a2;
  v13 = a3;
  v12 = a4;
  v15 = 0LL;
  v16 = 0;
  result = (unsigned int)memset(v17, 0, 0x24uLL);
  if ( dword_1C006F650 )
  {
    v10 = FdoExt(a1);
    LODWORD(v15) = v10[1298];
    WORD2(v15) = *((_WORD *)v10 + 2598);
    HIWORD(v15) = v10[1300];
    v16 = v10[1307];
    UsbhEtwGetHubInfo((__int64)v10, (__int64)v17);
    v11 = a7;
    return UsbhEtwWrite(
             &USBHUB_ETW_EVENT_HUB_EXCEPTION,
             0LL,
             &v15,
             12LL,
             v17,
             36LL,
             &v14,
             4LL,
             &v13,
             4LL,
             &v12,
             4LL,
             &a5,
             4LL,
             v7,
             v11,
             0LL);
  }
  return result;
}
