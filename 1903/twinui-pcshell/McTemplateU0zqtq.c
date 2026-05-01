/*
 * XREFs of McTemplateU0zqtq @ 0x180031F14
 * Callers:
 *     _lambda_b9d7157becc689d5daa625d695c4b8bd_::operator() @ 0x180031C60 (_lambda_b9d7157becc689d5daa625d695c4b8bd_--operator().c)
 * Callees:
 *     McGenEventWrite @ 0x180031FDC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0zqtq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6)
{
  __int64 v6; // rax
  int v7; // ecx
  _BYTE v9[16]; // [rsp+30h] [rbp-19h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-9h]
  int v11; // [rsp+48h] [rbp-1h]
  int v12; // [rsp+4Ch] [rbp+3h]
  int *v13; // [rsp+50h] [rbp+7h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  char *v15; // [rsp+60h] [rbp+17h]
  __int64 v16; // [rsp+68h] [rbp+1Fh]
  char *v17; // [rsp+70h] [rbp+27h]
  __int64 v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+B8h] [rbp+6Fh] BYREF

  v19 = a4;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v11 = v7;
  v12 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v14 = 4LL;
  v10 = a3;
  v13 = &v19;
  v16 = 4LL;
  v15 = &a5;
  v18 = 4LL;
  v17 = &a6;
  return McGenEventWrite(
           &MICROSOFT_TWINUI_PUBLISHER_Context,
           &ImmersiveShell_AppManager_ApplicationStateChanged,
           a3,
           5LL,
           v9);
}
