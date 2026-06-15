/*
 * XREFs of sub_1800018C0 @ 0x1800018C0
 * Callers:
 *     sub_180010888 @ 0x180010888 (sub_180010888.c)
 *     sub_180010980 @ 0x180010980 (sub_180010980.c)
 *     sub_180020FC4 @ 0x180020FC4 (sub_180020FC4.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800018C0(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-69h] BYREF
  _WORD *v17; // [rsp+50h] [rbp-49h]
  int v18; // [rsp+58h] [rbp-41h]
  int v19; // [rsp+5Ch] [rbp-3Dh]
  __int64 v20; // [rsp+60h] [rbp-39h]
  __int64 v21; // [rsp+68h] [rbp-31h]
  __int64 v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  __int64 v24; // [rsp+80h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-11h]
  __int64 v26; // [rsp+90h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp-1h]
  __int64 v28; // [rsp+A0h] [rbp+7h]
  __int64 v29; // [rsp+A8h] [rbp+Fh]

  v28 = a10;
  v26 = a9;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v29 = 4LL;
  v27 = 4LL;
  v25 = 4LL;
  v12 = *a5;
  v23 = 4LL;
  v21 = 8LL;
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &unk_1800428B8;
    v14 = 2;
  }
  v17 = v12;
  v18 = v14;
  v19 = 0;
  return sub_180001090(a1, a2, 0LL, 0LL, 8u, &v16);
}
