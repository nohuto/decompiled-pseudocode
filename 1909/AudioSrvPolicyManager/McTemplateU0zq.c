/*
 * XREFs of McTemplateU0zq @ 0x18000D7EC
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000E9AC (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x18000D790 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  int *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+98h] [rbp+20h] BYREF

  v14 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a3 + 2 * v4) );
    v5 = (unsigned int)(2 * v4 + 2);
  }
  else
  {
    v5 = 10LL;
  }
  v11 = 0;
  v6 = L"NULL";
  v10 = v5;
  if ( a3 )
    v6 = (const wchar_t *)a3;
  v13 = 4LL;
  v9 = v6;
  v12 = &v14;
  return McGenEventWrite(v5, &EVT_AUDIOSRV_SOUND_LEVEL_CHANGED, a3, 3u, &v8);
}
