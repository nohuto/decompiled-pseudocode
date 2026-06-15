/*
 * XREFs of sub_1800016F0 @ 0x1800016F0
 * Callers:
 *     sub_180007B80 @ 0x180007B80 (sub_180007B80.c)
 *     sub_180007D20 @ 0x180007D20 (sub_180007D20.c)
 *     PbmCastingAppStateChanged @ 0x180023D90 (PbmCastingAppStateChanged.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800016F0(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7)
{
  _WORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-68h] BYREF
  _WORD *v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+5Ch] [rbp-3Ch]
  __int64 v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  __int64 v19; // [rsp+70h] [rbp-28h]
  __int64 v20; // [rsp+78h] [rbp-20h]

  v19 = a7;
  v17 = a6;
  v20 = 4LL;
  v18 = 4LL;
  v9 = *a5;
  if ( *a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &unk_1800428B8;
    v11 = 2;
  }
  v14 = v9;
  v15 = v11;
  v16 = 0;
  return sub_180001090(a1, a2, 0LL, 0LL, 5u, &v13);
}
