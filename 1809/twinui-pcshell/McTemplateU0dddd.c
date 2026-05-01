/*
 * XREFs of McTemplateU0dddd @ 0x1801026D0
 * Callers:
 *     _lambda_094a05ebe77cd1c4bc74be5756524c22_::operator() @ 0x180100A38 (_lambda_094a05ebe77cd1c4bc74be5756524c22_--operator().c)
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x180187654 (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 * Callees:
 *     McGenEventWrite @ 0x18002C8AC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

ULONG McTemplateU0dddd(_DWORD a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-19h] BYREF
  int *v6; // [rsp+48h] [rbp-9h]
  __int64 v7; // [rsp+50h] [rbp-1h]
  int *v8; // [rsp+58h] [rbp+7h]
  __int64 v9; // [rsp+60h] [rbp+Fh]
  va_list v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+70h] [rbp+1Fh]
  va_list v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+B8h] [rbp+67h] BYREF
  int v15; // [rsp+C0h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+C8h] [rbp+77h] BYREF
  va_list va; // [rsp+C8h] [rbp+77h]
  va_list va1; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v16 = va_arg(va1, _QWORD);
  v15 = a4;
  v14 = a3;
  v7 = 4LL;
  v6 = &v14;
  v9 = 4LL;
  v8 = &v15;
  v11 = 4LL;
  va_copy(v10, va);
  va_copy(v12, va1);
  v13 = 4LL;
  return McGenEventWrite(MICROSOFT_TWINUI_PUBLISHER_Context, a2, a3, 5u, &v5);
}
