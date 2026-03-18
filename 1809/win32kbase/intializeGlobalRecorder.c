/*
 * XREFs of intializeGlobalRecorder @ 0x1C00068BC
 * Callers:
 *     InputInitialize @ 0x1C0005874 (InputInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 intializeGlobalRecorder()
{
  __int64 v0; // rdx
  _BYTE *v1; // rcx
  char v2; // al
  _BYTE *v3; // rax
  PDEVICE_OBJECT v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-40h] BYREF
  char v7; // [rsp+24h] [rbp-3Ch]
  _DWORD v8[4]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  char v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+44h] [rbp-1Ch]
  _BYTE v12[16]; // [rsp+48h] [rbp-18h] BYREF

  v6 = 8;
  v7 = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v6);
  v9 = 0LL;
  v8[1] = 0;
  v0 = 16LL;
  v8[0] = 48;
  v11 = 16;
  v1 = v12;
  v8[3] = 200;
  v12[0] = 0;
  v10 = 0;
  v8[2] = 512;
  do
  {
    if ( v0 == -2147483630 )
      break;
    v2 = v1["Win32BaseInput" - v12];
    if ( !v2 )
      break;
    *v1++ = v2;
    --v0;
  }
  while ( v0 );
  v3 = v1 - 1;
  if ( v0 )
    v3 = v1;
  v4 = WPP_GLOBAL_Control;
  *v3 = 0;
  result = imp_WppRecorderLogCreate(v4, v8, &gBaseLog);
  if ( (int)result < 0 )
    gBaseLog = 0LL;
  return result;
}
