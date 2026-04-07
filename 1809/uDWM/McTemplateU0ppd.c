/*
 * XREFs of McTemplateU0ppd @ 0x18008D730
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180026BF8 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x180077960 (McGenEventWrite.c)
 */

__int64 McTemplateU0ppd(__int64 a1, __int64 a2, ...)
{
  _BYTE v3[16]; // [rsp+30h] [rbp-50h] BYREF
  va_list v4; // [rsp+40h] [rbp-40h]
  __int64 v5; // [rsp+48h] [rbp-38h]
  va_list v6; // [rsp+50h] [rbp-30h]
  __int64 v7; // [rsp+58h] [rbp-28h]
  va_list v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+A0h] [rbp+20h] BYREF
  va_list va; // [rsp+A0h] [rbp+20h]
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  va_list va1; // [rsp+A8h] [rbp+28h]
  va_list va2; // [rsp+B0h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  va_copy(v8, va2);
  v9 = 4LL;
  return McGenEventWrite(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (unsigned int)"*#",
           v10,
           4,
           (__int64)v3);
}
