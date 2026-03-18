/*
 * XREFs of ?_SqmTHQA@@YAXGGK@Z @ 0x1C01D984C
 * Callers:
 *     ValidateDeviceSignature @ 0x1C01DA8C0 (ValidateDeviceSignature.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall _SqmTHQA(unsigned __int16 a1, unsigned __int16 a2, int a3)
{
  _DWORD v6[12]; // [rsp+30h] [rbp-48h] BYREF

  if ( gSqmIsOptedIn )
  {
    memset(v6, 0, sizeof(v6));
    v6[2] = a1;
    v6[0] = 16;
    v6[4] = 16;
    v6[1] = 1;
    v6[5] = 1;
    v6[9] = 1;
    v6[8] = 16;
    v6[6] = a2;
    v6[10] = a3;
    WinSqmAddToStreamEx(0LL, 9179LL, 3LL, v6, 0);
  }
}
