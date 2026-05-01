/*
 * XREFs of McTemplateU0zzzq @ 0x1803AD6C0
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1803AC6B0 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x18003AA0C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

ULONG McTemplateU0zzzq(_DWORD a1, _DWORD a2, const wchar_t *a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // rcx
  __int64 v10; // r8
  const wchar_t *v11; // rcx
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-19h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-9h]
  int v16; // [rsp+48h] [rbp-1h]
  int v17; // [rsp+4Ch] [rbp+3h]
  const wchar_t *v18; // [rsp+50h] [rbp+7h]
  int v19; // [rsp+58h] [rbp+Fh]
  int v20; // [rsp+5Ch] [rbp+13h]
  const wchar_t *v21; // [rsp+60h] [rbp+17h]
  int v22; // [rsp+68h] [rbp+1Fh]
  int v23; // [rsp+6Ch] [rbp+23h]
  va_list v24; // [rsp+70h] [rbp+27h]
  __int64 v25; // [rsp+78h] [rbp+2Fh]
  va_list va; // [rsp+C8h] [rbp+7Fh] BYREF

  va_start(va, a5);
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
  va_copy(v24, va);
  v23 = 0;
  v25 = 4LL;
  return McGenEventWrite(MICROSOFT_TWINUI_PUBLISHER_Context, &SwitchToAppByIdWithArguments_Stop, v10, 5u, &v14);
}
