/*
 * XREFs of sub_18011C240 @ 0x18011C240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

void __fastcall sub_18011C240(__int64 a1, _BYTE *a2, __int64 a3, int a4, void *a5, void *a6, char a7)
{
  __int64 v7; // rax
  void *v8; // rcx
  bool v9; // zf
  void *v10; // rcx
  bool v11; // zf
  __int64 v12; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-51h] BYREF
  _BYTE *v14; // [rsp+60h] [rbp-31h]
  int v15; // [rsp+68h] [rbp-29h]
  int v16; // [rsp+6Ch] [rbp-25h]
  __int64 *v17; // [rsp+70h] [rbp-21h]
  __int64 v18; // [rsp+78h] [rbp-19h]
  int *v19; // [rsp+80h] [rbp-11h]
  __int64 v20; // [rsp+88h] [rbp-9h]
  void *v21; // [rsp+90h] [rbp-1h]
  int v22; // [rsp+98h] [rbp+7h]
  int v23; // [rsp+9Ch] [rbp+Bh]
  void *v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+ACh] [rbp+1Bh]
  char *v27; // [rsp+B0h] [rbp+1Fh]
  __int64 v28; // [rsp+B8h] [rbp+27h]
  int v29; // [rsp+F8h] [rbp+67h] BYREF

  v29 = a4;
  if ( (unsigned int)dword_18025DE98 > 5 )
  {
    LODWORD(v7) = 0;
    if ( a2 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a2[v7] );
    }
    v8 = a5;
    v16 = 0;
    v12 = a3;
    if ( !a2 )
      a2 = &unk_18014302A;
    v20 = 4LL;
    v14 = a2;
    v15 = v7 + 1;
    v17 = &v12;
    v19 = &v29;
    v18 = 8LL;
    LODWORD(v7) = 0;
    v9 = a5 == 0LL;
    if ( a5 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)a5 + v7) );
      v9 = a5 == 0LL;
    }
    if ( v9 )
      v8 = &unk_18014302A;
    v23 = 0;
    v21 = v8;
    v10 = a6;
    v22 = v7 + 1;
    LODWORD(v7) = 0;
    v11 = a6 == 0LL;
    if ( a6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)a6 + v7) );
      v11 = a6 == 0LL;
    }
    if ( v11 )
      v10 = &unk_18014302A;
    v26 = 0;
    v24 = v10;
    v25 = v7 + 1;
    v27 = &a7;
    v28 = 4LL;
    sub_180001128((__int64)&dword_18025DE98, (unsigned __int8 *)dword_180224B2D, 0LL, 0LL, 8u, &v13);
  }
}
