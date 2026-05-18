/*
 * XREFs of sub_180118F10 @ 0x180118F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A5EC @ 0x18011A5EC (sub_18011A5EC.c)
 *     sub_18011BB6C @ 0x18011BB6C (sub_18011BB6C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

int __fastcall sub_180118F10(_QWORD *a1, char a2, _BYTE *a3, _BYTE *a4)
{
  void *v4; // rbx
  const char *v9; // rax
  const char *v10; // rbx
  volatile signed __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  bool v15; // cf
  void *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v22[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v24; // [rsp+F0h] [rbp-10h]
  int v25; // [rsp+F8h] [rbp-8h]
  int v26; // [rsp+FCh] [rbp-4h]
  int *v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  __int64 v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]
  const char *v31; // [rsp+120h] [rbp+20h]
  int v32; // [rsp+128h] [rbp+28h]
  int v33; // [rsp+12Ch] [rbp+2Ch]
  _BYTE *v34; // [rsp+130h] [rbp+30h]
  int v35; // [rsp+138h] [rbp+38h]
  int v36; // [rsp+13Ch] [rbp+3Ch]
  void *v37; // [rsp+140h] [rbp+40h]
  int v38; // [rsp+148h] [rbp+48h]
  int v39; // [rsp+14Ch] [rbp+4Ch]
  _BYTE *v40; // [rsp+150h] [rbp+50h]
  int v41; // [rsp+158h] [rbp+58h]
  int v42; // [rsp+15Ch] [rbp+5Ch]

  v4 = (void *)a1[14];
  sub_18011A5EC(v4);
  sub_18011BB6C(v4);
  v9 = "success";
  v10 = "fail";
  if ( a2 )
    v10 = "success";
  if ( (unsigned int)dword_18025EE60 > 5 && (qword_18025EE70 & 0x400000000000LL) != 0 )
  {
    LODWORD(v9) = 0;
    if ( (qword_18025EE78 & 0x400000000000LL) == qword_18025EE78 )
    {
      v11 = (volatile signed __int64 *)a1[14];
      if ( v11 )
      {
        _InterlockedExchangeAdd64(v11 + 18, 0LL);
        sub_18011BB6C((void *)v11);
      }
      else
      {
        v22[0] = 0;
      }
      v12 = -1LL;
      do
        ++v12;
      while ( v22[v12] );
      v26 = 0;
      v25 = v12 + 1;
      v24 = v22;
      v27 = &v21;
      v29 = a1[1];
      v13 = -1LL;
      v21 = 1;
      v28 = 4LL;
      v30 = 16LL;
      do
        ++v13;
      while ( v10[v13] );
      v31 = v10;
      v32 = v13 + 1;
      LODWORD(v13) = 0;
      v33 = 0;
      if ( a3 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( a3[v13] );
      }
      v36 = 0;
      if ( !a3 )
        a3 = &unk_18014402A;
      v35 = v13 + 1;
      v14 = a1 + 6;
      v15 = a1[9] < 0x10uLL;
      v34 = a3;
      if ( !v15 )
        v14 = (_QWORD *)*v14;
      v16 = &unk_18014402A;
      LODWORD(v17) = 0;
      if ( v14 )
      {
        v16 = v14;
        v17 = -1LL;
        do
          ++v17;
        while ( *((_BYTE *)v14 + v17) );
      }
      v37 = v16;
      v38 = v17 + 1;
      LODWORD(v18) = 0;
      v39 = 0;
      v19 = a4 == 0LL;
      if ( a4 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( a4[v18] );
        v19 = a4 == 0LL;
      }
      if ( v19 )
        a4 = &unk_18014402A;
      v42 = 0;
      v40 = a4;
      v41 = v18 + 1;
      LODWORD(v9) = sub_180001128((__int64)&dword_18025EE60, (unsigned __int8 *)dword_180224BD1, 0LL, 0LL, 9u, &v23);
    }
  }
  return (int)v9;
}
