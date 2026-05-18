/*
 * XREFs of sub_18011BDE0 @ 0x18011BDE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A5EC @ 0x18011A5EC (sub_18011A5EC.c)
 *     sub_18011BB6C @ 0x18011BB6C (sub_18011BB6C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

int __fastcall sub_18011BDE0(__int64 a1, char a2, _BYTE *a3, _BYTE *a4, void *a5)
{
  _QWORD *v5; // rbx
  unsigned __int64 v10; // rax
  const char *v11; // rax
  const char *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  bool v17; // cf
  void *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  void *v22; // rcx
  bool v23; // zf
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v26[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  const char *v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  int v37; // [rsp+12Ch] [rbp+2Ch]
  _BYTE *v38; // [rsp+130h] [rbp+30h]
  int v39; // [rsp+138h] [rbp+38h]
  int v40; // [rsp+13Ch] [rbp+3Ch]
  void *v41; // [rsp+140h] [rbp+40h]
  int v42; // [rsp+148h] [rbp+48h]
  int v43; // [rsp+14Ch] [rbp+4Ch]
  _BYTE *v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+158h] [rbp+58h]
  int v46; // [rsp+15Ch] [rbp+5Ch]
  void *v47; // [rsp+160h] [rbp+60h]
  int v48; // [rsp+168h] [rbp+68h]
  int v49; // [rsp+16Ch] [rbp+6Ch]

  v5 = *(_QWORD **)(a1 + 112);
  v10 = sub_18011A5EC((__int64)v5);
  sub_18011BB6C(v5, v10, (_BYTE *)(a1 + 120));
  v11 = "success";
  v12 = "fail";
  if ( a2 )
    v12 = "success";
  if ( (unsigned int)dword_18025EE60 > 5 && (qword_18025EE70 & 0x400000000000LL) != 0 )
  {
    LODWORD(v11) = 0;
    if ( (qword_18025EE78 & 0x400000000000LL) == qword_18025EE78 )
    {
      v13 = *(_QWORD *)(a1 + 112);
      if ( v13 )
        sub_18011BB6C((_QWORD *)v13, _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 144), 0LL), v26);
      else
        v26[0] = 0;
      v14 = -1LL;
      do
        ++v14;
      while ( v26[v14] );
      v30 = 0;
      v29 = v14 + 1;
      v28 = v26;
      v31 = &v25;
      v33 = *(_QWORD *)(a1 + 16);
      v15 = -1LL;
      v25 = 1;
      v32 = 4LL;
      v34 = 16LL;
      do
        ++v15;
      while ( v12[v15] );
      v35 = v12;
      v36 = v15 + 1;
      LODWORD(v15) = 0;
      v37 = 0;
      if ( a3 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( a3[v15] );
      }
      v40 = 0;
      if ( !a3 )
        a3 = &unk_18014402A;
      v39 = v15 + 1;
      v16 = (_QWORD *)(a1 + 48);
      v17 = *(_QWORD *)(a1 + 72) < 0x10uLL;
      v38 = a3;
      if ( !v17 )
        v16 = (_QWORD *)*v16;
      v18 = &unk_18014402A;
      LODWORD(v19) = 0;
      if ( v16 )
      {
        v18 = v16;
        v19 = -1LL;
        do
          ++v19;
        while ( *((_BYTE *)v16 + v19) );
      }
      v41 = v18;
      v42 = v19 + 1;
      LODWORD(v20) = 0;
      v43 = 0;
      v21 = a4 == 0LL;
      if ( a4 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( a4[v20] );
        v21 = a4 == 0LL;
      }
      v22 = a5;
      if ( v21 )
        a4 = &unk_18014402A;
      v44 = a4;
      v45 = v20 + 1;
      LODWORD(v20) = 0;
      v46 = 0;
      v23 = a5 == 0LL;
      if ( a5 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( *((_BYTE *)a5 + v20) );
        v23 = a5 == 0LL;
      }
      if ( v23 )
        v22 = &unk_18014402A;
      v49 = 0;
      v47 = v22;
      v48 = v20 + 1;
      LODWORD(v11) = sub_180001128((__int64)&dword_18025EE60, (unsigned __int8 *)dword_1802253F9, 0LL, 0LL, 0xAu, &v27);
    }
  }
  return (int)v11;
}
