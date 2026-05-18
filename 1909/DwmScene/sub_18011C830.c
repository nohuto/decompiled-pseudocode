/*
 * XREFs of sub_18011C830 @ 0x18011C830
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

void __fastcall sub_18011C830(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, void *a5, void *a6, char a7)
{
  __int64 v7; // rax
  void *v8; // rcx
  bool v9; // zf
  void *v10; // rcx
  bool v11; // zf
  __int64 v12; // [rsp+30h] [rbp-61h] BYREF
  __int64 v13; // [rsp+38h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-51h] BYREF
  _BYTE *v15; // [rsp+60h] [rbp-31h]
  int v16; // [rsp+68h] [rbp-29h]
  int v17; // [rsp+6Ch] [rbp-25h]
  __int64 *v18; // [rsp+70h] [rbp-21h]
  __int64 v19; // [rsp+78h] [rbp-19h]
  __int64 *v20; // [rsp+80h] [rbp-11h]
  __int64 v21; // [rsp+88h] [rbp-9h]
  void *v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+9Ch] [rbp+Bh]
  void *v25; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+ACh] [rbp+1Bh]
  char *v28; // [rsp+B0h] [rbp+1Fh]
  __int64 v29; // [rsp+B8h] [rbp+27h]

  if ( (unsigned int)dword_18025EE98 > 5 )
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
    v17 = 0;
    v12 = a3;
    if ( !a2 )
      a2 = &unk_18014402A;
    v13 = a4;
    v15 = a2;
    v16 = v7 + 1;
    v18 = &v12;
    v20 = &v13;
    v19 = 8LL;
    LODWORD(v7) = 0;
    v21 = 8LL;
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
      v8 = &unk_18014402A;
    v24 = 0;
    v22 = v8;
    v10 = a6;
    v23 = v7 + 1;
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
      v10 = &unk_18014402A;
    v27 = 0;
    v25 = v10;
    v26 = v7 + 1;
    v28 = &a7;
    v29 = 4LL;
    sub_180001128((__int64)&dword_18025EE98, (unsigned __int8 *)dword_180225CCA, 0LL, 0LL, 8u, &v14);
  }
}
