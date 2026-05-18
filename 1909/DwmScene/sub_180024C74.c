/*
 * XREFs of sub_180024C74 @ 0x180024C74
 * Callers:
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 * Callees:
 *     _o_log @ 0x180125B64 (_o_log.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180024C74(__int64 *a1)
{
  __int64 v2; // rax
  void (__fastcall *v3)(__int64 *, __int128 *); // rax
  int v4; // eax
  __int64 result; // rax
  __int128 v6; // [rsp+28h] [rbp-49h] BYREF
  int v7; // [rsp+38h] [rbp-39h]
  __int64 v8; // [rsp+3Ch] [rbp-35h]
  int v9; // [rsp+44h] [rbp-2Dh]
  __int128 v10; // [rsp+48h] [rbp-29h]
  __int128 v11; // [rsp+58h] [rbp-19h]
  __int128 v12; // [rsp+68h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp+7h]
  __int64 v14; // [rsp+80h] [rbp+Fh]
  __int64 v15; // [rsp+88h] [rbp+17h]
  __int64 v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+98h] [rbp+27h]

  v8 = 0LL;
  v9 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v2 = *a1;
  v7 = 0;
  v6 = 0LL;
  v10 = 0LL;
  v3 = *(void (__fastcall **)(__int64 *, __int128 *))(v2 + 88);
  v11 = 0LL;
  v12 = 0LL;
  v3(a1, &v6);
  v4 = *((_DWORD *)a1 + 72);
  if ( v4 == 5 )
  {
    result = 3000LL;
  }
  else if ( v4 == 4 )
  {
    result = 4000LL;
  }
  else
  {
    o_log();
    o_log();
    result = (unsigned int)(int)(o_round() * 100.0);
  }
  *((_DWORD *)a1 + 1158) = result;
  return result;
}
