/*
 * XREFs of sub_18011B330 @ 0x18011B330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A4DC @ 0x18011A4DC (sub_18011A4DC.c)
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18011B330(__int64 a1, __int64 *a2, char a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  void *v6; // rbx
  volatile signed __int64 *v11; // rcx
  __int64 v12; // rax
  const char *v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rcx
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v21[144]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE *v23; // [rsp+108h] [rbp+0h]
  int v24; // [rsp+110h] [rbp+8h]
  int v25; // [rsp+114h] [rbp+Ch]
  int *v26; // [rsp+118h] [rbp+10h]
  __int64 v27; // [rsp+120h] [rbp+18h]
  __int64 v28; // [rsp+128h] [rbp+20h]
  __int64 v29; // [rsp+130h] [rbp+28h]
  __int64 v30; // [rsp+138h] [rbp+30h]
  __int64 v31; // [rsp+140h] [rbp+38h]
  const char *v32; // [rsp+148h] [rbp+40h]
  int v33; // [rsp+150h] [rbp+48h]
  int v34; // [rsp+154h] [rbp+4Ch]
  _BYTE *v35; // [rsp+158h] [rbp+50h]
  int v36; // [rsp+160h] [rbp+58h]
  int v37; // [rsp+164h] [rbp+5Ch]
  __int64 *v38; // [rsp+168h] [rbp+60h]
  __int64 v39; // [rsp+170h] [rbp+68h]
  __int64 v40; // [rsp+178h] [rbp+70h]
  __int64 v41; // [rsp+180h] [rbp+78h]
  int *v42; // [rsp+188h] [rbp+80h]
  __int64 v43; // [rsp+190h] [rbp+88h]
  __int64 *v44; // [rsp+198h] [rbp+90h]
  __int64 v45; // [rsp+1A0h] [rbp+98h]
  __int64 v46; // [rsp+1A8h] [rbp+A0h]
  __int64 v47; // [rsp+1B0h] [rbp+A8h]

  v6 = *(void **)(a1 + 112);
  sub_18011A4DC((__int64)v6);
  sub_18011BA5C(v6);
  if ( (unsigned int)dword_18025DE60 > 5
    && (qword_18025DE70 & 0x400000000000LL) != 0
    && (qword_18025DE78 & 0x400000000000LL) == qword_18025DE78 )
  {
    v11 = *(volatile signed __int64 **)(a1 + 112);
    if ( v11 )
    {
      _InterlockedExchangeAdd64(v11 + 18, 0LL);
      sub_18011BA5C((void *)v11);
    }
    else
    {
      v21[0] = 0;
    }
    v12 = -1LL;
    do
      ++v12;
    while ( v21[v12] );
    v25 = 0;
    v24 = v12 + 1;
    v23 = v21;
    v26 = &v17;
    v13 = "fail";
    v28 = *(_QWORD *)(a1 + 8);
    v30 = *a2;
    if ( a3 )
      v13 = "success";
    v17 = 1;
    v14 = -1LL;
    v27 = 4LL;
    v29 = 16LL;
    v31 = 16LL;
    do
      ++v14;
    while ( v13[v14] );
    v32 = v13;
    v33 = v14 + 1;
    LODWORD(v14) = 0;
    v34 = 0;
    if ( a4 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a4[v14] );
    }
    v37 = 0;
    v39 = 8LL;
    if ( !a4 )
      a4 = &unk_18014302A;
    v41 = 4LL;
    v36 = v14 + 1;
    v20 = a5;
    v38 = &v20;
    v18 = *(_DWORD *)(a6 + 16);
    v42 = &v18;
    LODWORD(v19) = *(_DWORD *)(a6 + 24);
    v44 = &v19;
    v46 = a6 + 28;
    v35 = a4;
    v40 = a6;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    sub_180001128((__int64)&dword_18025DE60, (unsigned __int8 *)dword_180224015, 0LL, 0LL, 0xDu, &v22);
  }
  result = sub_18011B798((char *)(a1 + 120));
  v16 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v16 )
    return o__aligned_free(v16);
  return result;
}
