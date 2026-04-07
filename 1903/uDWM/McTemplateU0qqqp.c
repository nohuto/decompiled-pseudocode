/*
 * XREFs of McTemplateU0qqqp @ 0x1800B2834
 * Callers:
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x18003B868 (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x18007E280 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0qqqp(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  _BYTE v7[16]; // [rsp+38h] [rbp-19h] BYREF
  int *v8; // [rsp+48h] [rbp-9h]
  __int64 v9; // [rsp+50h] [rbp-1h]
  int *v10; // [rsp+58h] [rbp+7h]
  __int64 v11; // [rsp+60h] [rbp+Fh]
  char *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  char *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+B8h] [rbp+67h] BYREF
  int v17; // [rsp+C0h] [rbp+6Fh] BYREF

  v17 = a4;
  v16 = a3;
  v9 = 4LL;
  v8 = &v16;
  v11 = 4LL;
  v10 = &v17;
  v13 = 4LL;
  v12 = &a5;
  v15 = 8LL;
  v14 = &a6;
  return McGenEventWrite(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (unsigned int)&UdwmAnimationResource_Bind,
           a3,
           5,
           (__int64)v7);
}
