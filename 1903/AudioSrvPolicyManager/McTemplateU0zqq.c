/*
 * XREFs of McTemplateU0zqq @ 0x18002805C
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x1800281C0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028710 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x18000D7C0 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-50h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  int v12; // [rsp+4Ch] [rbp-34h]
  int *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  char *v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a3 + 2 * v5) );
    v6 = (unsigned int)(2 * v5 + 2);
  }
  else
  {
    v6 = 10LL;
  }
  v11 = v6;
  v12 = 0;
  v7 = L"NULL";
  v14 = 4LL;
  if ( a3 )
    v7 = (const wchar_t *)a3;
  v16 = 4LL;
  v10 = v7;
  v13 = &v17;
  v15 = &a5;
  return McGenEventWrite(v6, a2, a3, 4u, &v9);
}
