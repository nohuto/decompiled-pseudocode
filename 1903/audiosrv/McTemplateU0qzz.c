/*
 * XREFs of McTemplateU0qzz @ 0x18010D9DC
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18010CBA8 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x180043B28 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qzz(__int64 a1, __int64 a2, int a3, const wchar_t *a4, const wchar_t *a5)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // edx
  const wchar_t *v9; // rcx
  bool v10; // zf
  _BYTE v12[16]; // [rsp+30h] [rbp-50h] BYREF
  int *v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  const wchar_t *v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  const wchar_t *v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]
  int v21; // [rsp+A0h] [rbp+20h] BYREF

  v21 = a3;
  v14 = 4LL;
  v13 = &v21;
  v5 = -1LL;
  v6 = 10LL;
  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v9 = a5;
  v16 = v8;
  v17 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = a4;
  v10 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v5;
    while ( a5[v5] );
    v6 = (unsigned int)(2 * v5 + 2);
    v10 = a5 == 0LL;
  }
  if ( v10 )
    v9 = L"NULL";
  v19 = v6;
  v18 = v9;
  v20 = 0;
  return McGenEventWrite((__int64)v9, (__int64)&EVT_CAPTUREMONITOR_MONITOR_RESTART_LIMIT_HIT, v6, 4, (__int64)v12);
}
