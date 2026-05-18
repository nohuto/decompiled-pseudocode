/*
 * XREFs of sub_18011C5F0 @ 0x18011C5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

void sub_18011C5F0(__int64 a1, _BYTE *a2, __int64 a3, ...)
{
  __int64 v3; // rax
  void *v4; // rcx
  bool v5; // zf
  void *v6; // rcx
  bool v7; // zf
  __int64 v8; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-51h] BYREF
  _BYTE *v10; // [rsp+60h] [rbp-31h]
  int v11; // [rsp+68h] [rbp-29h]
  int v12; // [rsp+6Ch] [rbp-25h]
  __int64 *v13; // [rsp+70h] [rbp-21h]
  __int64 v14; // [rsp+78h] [rbp-19h]
  va_list v15; // [rsp+80h] [rbp-11h]
  __int64 v16; // [rsp+88h] [rbp-9h]
  void *v17; // [rsp+90h] [rbp-1h]
  int v18; // [rsp+98h] [rbp+7h]
  int v19; // [rsp+9Ch] [rbp+Bh]
  void *v20; // [rsp+A0h] [rbp+Fh]
  int v21; // [rsp+A8h] [rbp+17h]
  int v22; // [rsp+ACh] [rbp+1Bh]
  va_list v23; // [rsp+B0h] [rbp+1Fh]
  __int64 v24; // [rsp+B8h] [rbp+27h]
  __int64 v25; // [rsp+F8h] [rbp+67h] BYREF
  va_list va; // [rsp+F8h] [rbp+67h]
  void *v27; // [rsp+100h] [rbp+6Fh]
  void *v28; // [rsp+108h] [rbp+77h]
  va_list va1; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, void *);
  v28 = va_arg(va1, void *);
  if ( (unsigned int)dword_18025DE98 > 5 )
  {
    LODWORD(v3) = 0;
    if ( a2 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( a2[v3] );
    }
    v4 = v27;
    v12 = 0;
    v8 = a3;
    if ( !a2 )
      a2 = &unk_18014302A;
    v11 = v3 + 1;
    v13 = &v8;
    v10 = a2;
    va_copy(v15, va);
    LODWORD(v3) = 0;
    v14 = 8LL;
    v16 = 8LL;
    v5 = v27 == 0LL;
    if ( v27 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( *((_BYTE *)v27 + v3) );
      v5 = v27 == 0LL;
    }
    if ( v5 )
      v4 = &unk_18014302A;
    v19 = 0;
    v17 = v4;
    v6 = v28;
    v18 = v3 + 1;
    LODWORD(v3) = 0;
    v7 = v28 == 0LL;
    if ( v28 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( *((_BYTE *)v28 + v3) );
      v7 = v28 == 0LL;
    }
    if ( v7 )
      v6 = &unk_18014302A;
    v22 = 0;
    v20 = v6;
    v21 = v3 + 1;
    va_copy(v23, va1);
    v24 = 4LL;
    sub_180001128((__int64)&dword_18025DE98, (unsigned __int8 *)dword_180224C61, 0LL, 0LL, 8u, &v9);
  }
}
