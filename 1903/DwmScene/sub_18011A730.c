/*
 * XREFs of sub_18011A730 @ 0x18011A730
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A4DC @ 0x18011A4DC (sub_18011A4DC.c)
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18011A730(__int64 a1, __int64 *a2, char a3, _BYTE *a4, __int64 a5, __int64 a6, __int64 a7)
{
  void *v7; // rbx
  volatile signed __int64 *v12; // rcx
  __int64 v13; // rax
  const char *v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rcx
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v22[144]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE *v24; // [rsp+108h] [rbp+0h]
  int v25; // [rsp+110h] [rbp+8h]
  int v26; // [rsp+114h] [rbp+Ch]
  int *v27; // [rsp+118h] [rbp+10h]
  __int64 v28; // [rsp+120h] [rbp+18h]
  __int64 v29; // [rsp+128h] [rbp+20h]
  __int64 v30; // [rsp+130h] [rbp+28h]
  __int64 v31; // [rsp+138h] [rbp+30h]
  __int64 v32; // [rsp+140h] [rbp+38h]
  const char *v33; // [rsp+148h] [rbp+40h]
  int v34; // [rsp+150h] [rbp+48h]
  int v35; // [rsp+154h] [rbp+4Ch]
  _BYTE *v36; // [rsp+158h] [rbp+50h]
  int v37; // [rsp+160h] [rbp+58h]
  int v38; // [rsp+164h] [rbp+5Ch]
  __int64 *v39; // [rsp+168h] [rbp+60h]
  __int64 v40; // [rsp+170h] [rbp+68h]
  __int64 v41; // [rsp+178h] [rbp+70h]
  __int64 v42; // [rsp+180h] [rbp+78h]
  __int64 v43; // [rsp+188h] [rbp+80h]
  __int64 v44; // [rsp+190h] [rbp+88h]
  __int64 v45; // [rsp+198h] [rbp+90h]
  __int64 v46; // [rsp+1A0h] [rbp+98h]
  __int64 v47; // [rsp+1A8h] [rbp+A0h]
  __int64 v48; // [rsp+1B0h] [rbp+A8h]
  __int64 v49; // [rsp+1B8h] [rbp+B0h]
  __int64 v50; // [rsp+1C0h] [rbp+B8h]
  __int64 v51; // [rsp+1C8h] [rbp+C0h]
  __int64 v52; // [rsp+1D0h] [rbp+C8h]
  __int64 v53; // [rsp+1D8h] [rbp+D0h]
  __int64 v54; // [rsp+1E0h] [rbp+D8h]
  __int64 v55; // [rsp+1E8h] [rbp+E0h]
  __int64 v56; // [rsp+1F0h] [rbp+E8h]
  __int64 v57; // [rsp+1F8h] [rbp+F0h]
  __int64 v58; // [rsp+200h] [rbp+F8h]
  __int64 v59; // [rsp+208h] [rbp+100h]
  __int64 v60; // [rsp+210h] [rbp+108h]
  __int64 v61; // [rsp+218h] [rbp+110h]
  __int64 v62; // [rsp+220h] [rbp+118h]
  int *v63; // [rsp+228h] [rbp+120h]
  __int64 v64; // [rsp+230h] [rbp+128h]
  __int64 *v65; // [rsp+238h] [rbp+130h]
  __int64 v66; // [rsp+240h] [rbp+138h]
  __int64 v67; // [rsp+248h] [rbp+140h]
  __int64 v68; // [rsp+250h] [rbp+148h]

  v7 = *(void **)(a1 + 112);
  sub_18011A4DC((__int64)v7);
  sub_18011BA5C(v7);
  if ( (unsigned int)dword_18025DE60 > 5
    && (qword_18025DE70 & 0x400000000000LL) != 0
    && (qword_18025DE78 & 0x400000000000LL) == qword_18025DE78 )
  {
    v12 = *(volatile signed __int64 **)(a1 + 112);
    if ( v12 )
    {
      _InterlockedExchangeAdd64(v12 + 18, 0LL);
      sub_18011BA5C((void *)v12);
    }
    else
    {
      v22[0] = 0;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( v22[v13] );
    v26 = 0;
    v25 = v13 + 1;
    v24 = v22;
    v27 = &v18;
    v14 = "fail";
    v29 = *(_QWORD *)(a1 + 8);
    v31 = *a2;
    if ( a3 )
      v14 = "success";
    v18 = 1;
    v15 = -1LL;
    v28 = 4LL;
    v30 = 16LL;
    v32 = 16LL;
    do
      ++v15;
    while ( v14[v15] );
    v33 = v14;
    v34 = v15 + 1;
    LODWORD(v15) = 0;
    v35 = 0;
    if ( a4 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a4[v15] );
    }
    v38 = 0;
    v40 = 8LL;
    if ( !a4 )
      a4 = &unk_18014302A;
    v42 = 4LL;
    v37 = v15 + 1;
    v21 = a5;
    v39 = &v21;
    v43 = a6 + 4;
    v45 = a6 + 8;
    v47 = a6 + 12;
    v49 = a6 + 16;
    v51 = a6 + 24;
    v53 = a6 + 32;
    v55 = a6 + 40;
    v57 = a6 + 48;
    v59 = a6 + 56;
    v41 = a6;
    v36 = a4;
    v44 = 4LL;
    v46 = 4LL;
    v19 = *(_DWORD *)(a7 + 16);
    v63 = &v19;
    LODWORD(v20) = *(_DWORD *)(a7 + 24);
    v65 = &v20;
    v67 = a7 + 28;
    v48 = 4LL;
    v50 = 8LL;
    v52 = 8LL;
    v54 = 8LL;
    v56 = 8LL;
    v58 = 8LL;
    v60 = 8LL;
    v61 = a7;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    sub_180001128((__int64)&dword_18025DE60, (unsigned __int8 *)dword_180223E3C, 0LL, 0LL, 0x17u, &v23);
  }
  result = sub_18011B798((char *)(a1 + 120));
  v17 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v17 )
    return o__aligned_free(v17);
  return result;
}
