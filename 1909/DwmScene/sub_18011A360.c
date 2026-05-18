/*
 * XREFs of sub_18011A360 @ 0x18011A360
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_180119C40 @ 0x180119C40 (sub_180119C40.c)
 *     sub_18011A5EC @ 0x18011A5EC (sub_18011A5EC.c)
 *     sub_18011B8A8 @ 0x18011B8A8 (sub_18011B8A8.c)
 *     sub_18011BB6C @ 0x18011BB6C (sub_18011BB6C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18011A360(__int64 a1, __int64 *a2, _BYTE *a3, _BYTE *a4, __int64 a5, void *a6)
{
  __int64 v6; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // r14
  volatile signed __int64 *v14; // rax
  __int64 v15; // rcx
  ULONG result; // eax
  volatile signed __int64 *v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // zf
  int v23; // eax
  void *v24; // rcx
  bool v25; // zf
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v27[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v29; // [rsp+F0h] [rbp-10h]
  int v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+FCh] [rbp-4h]
  int *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  __int64 v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  __int64 v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  _BYTE *v38; // [rsp+130h] [rbp+30h]
  int v39; // [rsp+138h] [rbp+38h]
  int v40; // [rsp+13Ch] [rbp+3Ch]
  _BYTE *v41; // [rsp+140h] [rbp+40h]
  int v42; // [rsp+148h] [rbp+48h]
  int v43; // [rsp+14Ch] [rbp+4Ch]
  __int64 v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+158h] [rbp+58h]
  int v46; // [rsp+15Ch] [rbp+5Ch]
  void *v47; // [rsp+160h] [rbp+60h]
  int v48; // [rsp+168h] [rbp+68h]
  int v49; // [rsp+16Ch] [rbp+6Ch]

  v6 = a1 + 120;
  v11 = sub_18011B8A8((char *)(a1 + 120));
  v12 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v11;
  v13 = (void *)v11;
  if ( v12 )
  {
    o__aligned_free(v12);
    v13 = *(void **)(a1 + 112);
  }
  sub_18011A5EC(v13);
  sub_18011BB6C(v13);
  v14 = (volatile signed __int64 *)sub_180119C40(v6, 0LL);
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v14;
  if ( v15 )
  {
    o__aligned_free(v15);
    v14 = *(volatile signed __int64 **)(a1 + 112);
  }
  _InterlockedExchangeAdd64(v14 + 18, 0LL);
  result = sub_18011BB6C((void *)v14);
  if ( (unsigned int)dword_18025EE60 > 5 && (qword_18025EE70 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_18025EE78 & 0x400000000000LL) == qword_18025EE78 )
    {
      v17 = *(volatile signed __int64 **)(a1 + 112);
      if ( v17 )
      {
        _InterlockedExchangeAdd64(v17 + 18, 0LL);
        sub_18011BB6C((void *)v17);
      }
      else
      {
        v27[0] = 0;
      }
      v18 = -1LL;
      do
        ++v18;
      while ( v27[v18] );
      v31 = 0;
      v30 = v18 + 1;
      v32 = &v26;
      v34 = *(_QWORD *)(a1 + 16);
      v36 = *a2;
      LODWORD(v18) = 0;
      v29 = v27;
      v26 = 1;
      v33 = 4LL;
      v35 = 16LL;
      v37 = 16LL;
      if ( a3 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( a3[v18] );
      }
      v40 = 0;
      if ( !a3 )
        a3 = &unk_18014402A;
      v39 = v18 + 1;
      LODWORD(v18) = 0;
      v38 = a3;
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
      v43 = 0;
      v41 = a4;
      v42 = v18 + 1;
      LODWORD(v20) = 0;
      v21 = a5;
      v22 = a5 == 0;
      if ( a5 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( *(_BYTE *)(a5 + v20) );
        v22 = a5 == 0;
      }
      if ( v22 )
        v21 = (__int64)&unk_18014402A;
      v46 = 0;
      v44 = v21;
      v23 = v20 + 1;
      v24 = a6;
      v45 = v23;
      LODWORD(v21) = 0;
      v25 = a6 == 0LL;
      if ( a6 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( *((_BYTE *)a6 + v21) );
        v25 = a6 == 0LL;
      }
      if ( v25 )
        v24 = &unk_18014402A;
      v49 = 0;
      v47 = v24;
      v48 = v21 + 1;
      return sub_180001128((__int64)&dword_18025EE60, (unsigned __int8 *)dword_180225538, 0LL, 0LL, 0xAu, &v28);
    }
  }
  return result;
}
