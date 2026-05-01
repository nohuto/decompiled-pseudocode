/*
 * XREFs of McTemplateU0dz @ 0x18002C470
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x18002C2B0 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x18002C8AC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0dz(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  _BYTE v7[16]; // [rsp+30h] [rbp-48h] BYREF
  int *v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  const wchar_t *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+90h] [rbp+18h] BYREF

  v13 = a3;
  v9 = 4LL;
  v8 = &v13;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v11 = v5;
  v12 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v10 = a4;
  return McGenEventWrite(&MICROSOFT_TWINUI_PUBLISHER_Context, &ImmersiveShell_AppManager_WindowTitleChange, a3, 3LL, v7);
}
