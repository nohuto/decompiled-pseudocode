/*
 * XREFs of sub_180001A78 @ 0x180001A78
 * Callers:
 *     sub_180022880 @ 0x180022880 (sub_180022880.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001A78(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rcx
  int v13; // r8d
  _WORD *v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  _WORD *v17; // rdx
  __int64 v18; // rax
  int v19; // r9d
  _WORD *v20; // rdx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-69h] BYREF
  _WORD *v23; // [rsp+50h] [rbp-49h]
  int v24; // [rsp+58h] [rbp-41h]
  int v25; // [rsp+5Ch] [rbp-3Dh]
  _WORD *v26; // [rsp+60h] [rbp-39h]
  int v27; // [rsp+68h] [rbp-31h]
  int v28; // [rsp+6Ch] [rbp-2Dh]
  _WORD *v29; // [rsp+70h] [rbp-29h]
  int v30; // [rsp+78h] [rbp-21h]
  int v31; // [rsp+7Ch] [rbp-1Dh]
  __int64 v32; // [rsp+80h] [rbp-19h]
  __int64 v33; // [rsp+88h] [rbp-11h]
  __int64 v34; // [rsp+90h] [rbp-9h]
  __int64 v35; // [rsp+98h] [rbp-1h]
  __int64 v36; // [rsp+A0h] [rbp+7h]
  __int64 v37; // [rsp+A8h] [rbp+Fh]

  v36 = a10;
  v34 = a9;
  v12 = -1LL;
  v13 = 2;
  v32 = a8;
  v37 = 8LL;
  v35 = 4LL;
  v33 = 4LL;
  v14 = *a7;
  if ( *a7 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &unk_1800428B8;
    v16 = 2;
  }
  v29 = v14;
  v30 = v16;
  v31 = 0;
  v17 = *a6;
  if ( *a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &unk_1800428B8;
    v19 = 2;
  }
  v26 = v17;
  v27 = v19;
  v28 = 0;
  v20 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v20[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v20 = &unk_1800428B8;
  }
  v23 = v20;
  v24 = v13;
  v25 = 0;
  return sub_180001090(a1, a2, 0LL, 0LL, 8u, &v22);
}
