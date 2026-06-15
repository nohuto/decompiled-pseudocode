/*
 * XREFs of sub_180001BC0 @ 0x180001BC0
 * Callers:
 *     sub_180029CD0 @ 0x180029CD0 (sub_180029CD0.c)
 *     sub_180029FD4 @ 0x180029FD4 (sub_180029FD4.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001BC0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5, __int64 a6)
{
  _BYTE *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+5Ch] [rbp-2Ch]
  __int64 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]

  v15 = a6;
  v16 = 4LL;
  v7 = *a5;
  if ( *a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v7 = &unk_180042206;
    v9 = 1;
  }
  v13 = v9;
  v12 = v7;
  v14 = 0;
  return sub_180001090(a1, a2, 0LL, 0LL, 4u, &v11);
}
