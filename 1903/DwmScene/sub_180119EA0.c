/*
 * XREFs of sub_180119EA0 @ 0x180119EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001128 @ 0x180001128 (sub_180001128.c)
 *     sub_18011A4DC @ 0x18011A4DC (sub_18011A4DC.c)
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180119EA0(
        __int64 a1,
        __int64 *a2,
        char a3,
        _BYTE *a4,
        char a5,
        __int64 a6,
        void *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        void *a19)
{
  void *v19; // rbx
  const char *v24; // rbx
  volatile signed __int64 *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  bool v30; // zf
  int v31; // eax
  void *v32; // rcx
  bool v33; // zf
  void *v34; // rcx
  bool v35; // zf
  __int64 result; // rax
  __int64 v37; // rcx
  int v38; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v39[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int64 v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  const char *v50; // [rsp+130h] [rbp+30h]
  int v51; // [rsp+138h] [rbp+38h]
  int v52; // [rsp+13Ch] [rbp+3Ch]
  _BYTE *v53; // [rsp+140h] [rbp+40h]
  int v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+14Ch] [rbp+4Ch]
  char *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  __int64 v58; // [rsp+160h] [rbp+60h]
  int v59; // [rsp+168h] [rbp+68h]
  int v60; // [rsp+16Ch] [rbp+6Ch]
  void *v61; // [rsp+170h] [rbp+70h]
  int v62; // [rsp+178h] [rbp+78h]
  int v63; // [rsp+17Ch] [rbp+7Ch]
  char *v64; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]
  char *v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  char *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  char *v70; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]
  char *v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  char *v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1D8h] [rbp+D8h]
  char *v76; // [rsp+1E0h] [rbp+E0h]
  __int64 v77; // [rsp+1E8h] [rbp+E8h]
  char *v78; // [rsp+1F0h] [rbp+F0h]
  __int64 v79; // [rsp+1F8h] [rbp+F8h]
  char *v80; // [rsp+200h] [rbp+100h]
  __int64 v81; // [rsp+208h] [rbp+108h]
  char *v82; // [rsp+210h] [rbp+110h]
  __int64 v83; // [rsp+218h] [rbp+118h]
  char *v84; // [rsp+220h] [rbp+120h]
  __int64 v85; // [rsp+228h] [rbp+128h]
  void *v86; // [rsp+230h] [rbp+130h]
  int v87; // [rsp+238h] [rbp+138h]
  int v88; // [rsp+23Ch] [rbp+13Ch]

  v19 = *(void **)(a1 + 112);
  sub_18011A4DC(v19);
  sub_18011BA5C(v19);
  v24 = "fail";
  if ( a3 )
    v24 = "success";
  if ( (unsigned int)dword_18025DE60 > 5
    && (qword_18025DE70 & 0x400000000000LL) != 0
    && (qword_18025DE78 & 0x400000000000LL) == qword_18025DE78 )
  {
    v25 = *(volatile signed __int64 **)(a1 + 112);
    if ( v25 )
    {
      _InterlockedExchangeAdd64(v25 + 18, 0LL);
      sub_18011BA5C((void *)v25);
    }
    else
    {
      v39[0] = 0;
    }
    v26 = -1LL;
    do
      ++v26;
    while ( v39[v26] );
    v43 = 0;
    v42 = v26 + 1;
    v41 = v39;
    v44 = &v38;
    v46 = *(_QWORD *)(a1 + 16);
    v48 = *a2;
    v27 = -1LL;
    v38 = 1;
    v45 = 4LL;
    v47 = 16LL;
    v49 = 16LL;
    do
      ++v27;
    while ( v24[v27] );
    v50 = v24;
    v51 = v27 + 1;
    LODWORD(v27) = 0;
    v52 = 0;
    if ( a4 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( a4[v27] );
    }
    v55 = 0;
    v57 = 4LL;
    if ( !a4 )
      a4 = &unk_18014302A;
    LODWORD(v28) = 0;
    v53 = a4;
    v54 = v27 + 1;
    v56 = &a5;
    v29 = a6;
    v30 = a6 == 0;
    if ( a6 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( *(_BYTE *)(a6 + v28) );
      v30 = a6 == 0;
    }
    if ( v30 )
      v29 = (__int64)&unk_18014302A;
    v60 = 0;
    v58 = v29;
    v31 = v28 + 1;
    v32 = a7;
    v59 = v31;
    LODWORD(v29) = 0;
    v33 = a7 == 0LL;
    if ( a7 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( *((_BYTE *)a7 + v29) );
      v33 = a7 == 0LL;
    }
    if ( v33 )
      v32 = &unk_18014302A;
    v63 = 0;
    v61 = v32;
    v34 = a19;
    v62 = v29 + 1;
    v64 = &a8;
    v66 = &a9;
    v68 = &a10;
    v70 = &a11;
    v72 = &a12;
    v74 = &a13;
    v76 = &a14;
    v78 = &a15;
    v80 = &a16;
    v82 = &a17;
    v84 = &a18;
    LODWORD(v29) = 0;
    v65 = 8LL;
    v67 = 8LL;
    v69 = 8LL;
    v71 = 8LL;
    v73 = 8LL;
    v75 = 8LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    v85 = 4LL;
    v35 = a19 == 0LL;
    if ( a19 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( *((_BYTE *)a19 + v29) );
      v35 = a19 == 0LL;
    }
    if ( v35 )
      v34 = &unk_18014302A;
    v88 = 0;
    v86 = v34;
    v87 = v29 + 1;
    sub_180001128((__int64)&dword_18025DE60, (unsigned __int8 *)dword_1802246A4, 0LL, 0LL, 0x17u, &v40);
  }
  result = sub_18011B798((char *)(a1 + 120));
  v37 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v37 )
    return o__aligned_free(v37);
  return result;
}
