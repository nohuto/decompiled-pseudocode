/*
 * XREFs of McTemplateU0zzz @ 0x18032DCC0
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18032CE00 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x18002C8AC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zzz(__int64 a1, __int64 a2, const wchar_t *a3, const wchar_t *a4, const wchar_t *a5)
{
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // rcx
  __int64 v10; // r8
  const wchar_t *v11; // rcx
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  const wchar_t *v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+58h] [rbp-30h]
  int v20; // [rsp+5Ch] [rbp-2Ch]
  const wchar_t *v21; // [rsp+60h] [rbp-28h]
  int v22; // [rsp+68h] [rbp-20h]
  int v23; // [rsp+6Ch] [rbp-1Ch]

  v5 = -1LL;
  v6 = 10;
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v16 = v8;
  v17 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v15 = a3;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = (unsigned int)(2 * v9 + 2);
  }
  else
  {
    v10 = 10LL;
  }
  v11 = a5;
  v19 = v10;
  if ( !a4 )
    a4 = L"NULL";
  v20 = 0;
  v18 = a4;
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v5;
    while ( a5[v5] );
    v6 = 2 * v5 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  v22 = v6;
  v21 = v11;
  v23 = 0;
  return McGenEventWrite(MICROSOFT_TWINUI_PUBLISHER_Context, &SwitchToAppByIdWithArguments_Start, v10, 4u, &v14);
}
