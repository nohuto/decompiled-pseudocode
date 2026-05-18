/*
 * XREFs of sub_18011C480 @ 0x18011C480
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

void __fastcall sub_18011C480(__int64 a1, _BYTE *a2, __int64 a3, _BYTE *a4, void *a5, void *a6, char a7)
{
  __int64 v7; // rax
  bool v8; // zf
  void *v9; // rcx
  bool v10; // zf
  void *v11; // rcx
  bool v12; // zf
  __int64 v13; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-51h] BYREF
  _BYTE *v15; // [rsp+60h] [rbp-31h]
  int v16; // [rsp+68h] [rbp-29h]
  int v17; // [rsp+6Ch] [rbp-25h]
  __int64 *v18; // [rsp+70h] [rbp-21h]
  __int64 v19; // [rsp+78h] [rbp-19h]
  _BYTE *v20; // [rsp+80h] [rbp-11h]
  int v21; // [rsp+88h] [rbp-9h]
  int v22; // [rsp+8Ch] [rbp-5h]
  void *v23; // [rsp+90h] [rbp-1h]
  int v24; // [rsp+98h] [rbp+7h]
  int v25; // [rsp+9Ch] [rbp+Bh]
  void *v26; // [rsp+A0h] [rbp+Fh]
  int v27; // [rsp+A8h] [rbp+17h]
  int v28; // [rsp+ACh] [rbp+1Bh]
  char *v29; // [rsp+B0h] [rbp+1Fh]
  __int64 v30; // [rsp+B8h] [rbp+27h]

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
    v17 = 0;
    v13 = a3;
    if ( !a2 )
      a2 = &unk_18014402A;
    v16 = v7 + 1;
    v15 = a2;
    v18 = &v13;
    LODWORD(v7) = 0;
    v19 = 8LL;
    v8 = a4 == 0LL;
    if ( a4 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a4[v7] );
      v8 = a4 == 0LL;
    }
    v9 = a5;
    if ( v8 )
      a4 = &unk_18014402A;
    v20 = a4;
    v21 = v7 + 1;
    LODWORD(v7) = 0;
    v22 = 0;
    v10 = a5 == 0LL;
    if ( a5 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)a5 + v7) );
      v10 = a5 == 0LL;
    }
    if ( v10 )
      v9 = &unk_18014402A;
    v25 = 0;
    v23 = v9;
    v11 = a6;
    v24 = v7 + 1;
    LODWORD(v7) = 0;
    v12 = a6 == 0LL;
    if ( a6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)a6 + v7) );
      v12 = a6 == 0LL;
    }
    if ( v12 )
      v11 = &unk_18014402A;
    v28 = 0;
    v26 = v11;
    v27 = v7 + 1;
    v29 = &a7;
    v30 = 4LL;
    sub_180001128((__int64)&dword_18025EE98, (unsigned __int8 *)dword_180225BF8, 0LL, 0LL, 8u, &v14);
  }
}
