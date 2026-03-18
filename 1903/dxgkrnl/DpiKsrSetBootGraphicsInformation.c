/*
 * XREFs of DpiKsrSetBootGraphicsInformation @ 0x1C02A961C
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C01541B8 (DpiFdoHandleSystemPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

NTSTATUS DpiKsrSetBootGraphicsInformation()
{
  __int64 SystemInformation; // [rsp+20h] [rbp-30h] BYREF
  int v2; // [rsp+28h] [rbp-28h]
  __int64 v3; // [rsp+2Ch] [rbp-24h]
  __int64 v4; // [rsp+34h] [rbp-1Ch]
  int v5; // [rsp+3Ch] [rbp-14h]

  v4 = 0LL;
  v5 = 0;
  v2 = dword_1C00A29E8;
  v3 = (unsigned int)dword_1C00A29EC;
  SystemInformation = qword_1C00A29F8;
  if ( dword_1C00A29F4 == 20 )
  {
    HIDWORD(v4) = 3;
    HIDWORD(v3) = dword_1C00A29F0 / 3u;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  if ( dword_1C00A29F4 <= 20 )
    goto LABEL_8;
  if ( dword_1C00A29F4 <= 22 )
  {
    HIDWORD(v4) = 4;
    goto LABEL_7;
  }
  if ( (unsigned int)(dword_1C00A29F4 - 32) > 1 )
  {
LABEL_8:
    HIDWORD(v4) = 0;
    return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
  }
  HIDWORD(v4) = 2;
LABEL_7:
  HIDWORD(v3) = (unsigned int)dword_1C00A29F0 >> 2;
  return ZwSetSystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20uLL);
}
