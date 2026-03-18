/*
 * XREFs of fsc_OverscaleToBold @ 0x1C02C1EB0
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     EmboldenOverscaleConst @ 0x1C02C1BBC (EmboldenOverscaleConst.c)
 *     FindNext @ 0x1C02C1CA8 (FindNext.c)
 */

char __fastcall fsc_OverscaleToBold(unsigned __int16 a1, unsigned __int16 *a2, __int64 a3)
{
  _WORD *v3; // r13
  unsigned __int16 v4; // di
  unsigned __int64 v5; // r15
  unsigned __int8 *v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  unsigned __int64 i; // rcx
  unsigned __int16 v11; // r10
  unsigned __int8 *v12; // r13
  char *v13; // r9
  char *v14; // r12
  unsigned __int8 *v15; // r14
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r9
  unsigned __int8 *v18; // r8
  _BYTE *v19; // r14
  unsigned __int16 v20; // bx
  int v21; // r12d
  unsigned __int16 v22; // r13
  BOOL v23; // r10d
  __int16 v24; // dx
  unsigned __int8 *v25; // r11
  unsigned __int8 v26; // al
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // dx
  int Next; // eax
  int v30; // ecx
  unsigned int v31; // eax
  char *v32; // r11
  unsigned __int8 v33; // dl
  unsigned __int16 v34; // r8
  unsigned __int16 v35; // si
  unsigned __int8 *v36; // r13
  unsigned __int8 **v37; // rdi
  unsigned __int8 v38; // bl
  char v39; // r10
  char v40; // r9
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int8 *v43; // r10
  size_t v44; // r8
  char result; // al
  unsigned __int8 v46; // [rsp+40h] [rbp-C0h] BYREF
  char v47; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int16 v48; // [rsp+42h] [rbp-BEh]
  unsigned __int16 v49; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v50; // [rsp+46h] [rbp-BAh]
  int v51; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v52; // [rsp+50h] [rbp-B0h]
  unsigned __int8 *v53; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 *v54; // [rsp+60h] [rbp-A0h]
  char *v55; // [rsp+68h] [rbp-98h]
  char *v56; // [rsp+70h] [rbp-90h]
  unsigned __int8 *v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  unsigned __int64 v61; // [rsp+98h] [rbp-68h]
  unsigned __int64 v62; // [rsp+A0h] [rbp-60h]
  _QWORD v63[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v64[48]; // [rsp+230h] [rbp+130h] BYREF

  v3 = (_WORD *)a3;
  v4 = a2[1] - a2[2];
  v58 = a3;
  v50 = v4;
  if ( a1 > 0x18u || v4 > 0x30u )
    return EmboldenOverscaleConst(a2);
  v5 = *a2;
  v6 = *(unsigned __int8 **)(a3 + 40);
  v7 = *((_QWORD *)a2 + 5);
  v54 = v6;
  v61 = v5;
  if ( v4 )
  {
    v8 = v4;
    do
    {
      v9 = v5;
      if ( v7 > v5 + v7 )
        v9 = 0LL;
      if ( v9 )
      {
        for ( i = 0LL; i < v9; ++i )
          v6[i] = *(_BYTE *)(i + v7);
      }
      v6 += v5;
      v7 += v5;
      --v8;
    }
    while ( v8 );
    v3 = (_WORD *)v58;
    v7 = *((_QWORD *)a2 + 5);
    v6 = *(unsigned __int8 **)(v58 + 40);
    v54 = v6;
  }
  v47 = 0;
  v11 = 0;
  v49 = 0;
  if ( v4 )
  {
    v60 = 8LL;
    do
    {
      v7 += v5;
      v12 = &v6[v5];
      v62 = v7;
      v59 = &v6[v5];
      v13 = &v47;
      v55 = &v47;
      v14 = (char *)(v7 - 1);
      v56 = (char *)(v7 - 1);
      if ( &v6[v5 - 1] >= v6 )
      {
        v15 = v12 - 1;
        v57 = v12 - 1;
        do
        {
          while ( 1 )
          {
            v16 = *v15;
            if ( !*v15 || v16 == 0xFF && ((unsigned __int8)*v13 >> 7 == 1 || v13 == &v47) )
              break;
            v17 = StartMask[(unsigned __int8)(v16 & (((unsigned __int8)*v13 >> 7 == 0) | (2 * ~(v16 | *v14)))) + 16];
            if ( v17 == 8 )
              break;
            v18 = v15;
            v53 = v15;
            v19 = v6;
            v48 = 0;
            v20 = v11;
            v46 = v17;
            v21 = 0;
            v22 = 0;
            while ( 1 )
            {
              v23 = 0;
              v24 = ~v17;
              v25 = v18;
              v64[v22] = v17;
              v63[v22] = v18;
              v52 = (unsigned __int64)&v19[v5];
              v26 = *v18 & StartMask[v17 + 1];
              do
              {
                if ( v24 >= 10 )
                  break;
                if ( v18 <= &v19[v5 - 1] )
                {
                  ++v25;
                  v27 = byte_1C02EC920[v26];
                  v26 = *v25;
                  v24 += v27;
                  v23 = v27 < (unsigned __int16)v60;
                }
                else
                {
                  v24 = 10;
                }
              }
              while ( !v23 );
              v4 = v50;
              v5 = v61;
              if ( v24 > 4 )
                v28 = v24 < 10 ? v24 - 4 : 6;
              else
                v28 = 0;
              v21 += v28;
              v22 = ++v48;
              Next = FindNext(v50, v61, v20, v19, v18, v17, &v53, &v46);
              v19 = (_BYTE *)v52;
              ++v20;
              if ( !Next )
                break;
              v17 = v46;
              v18 = v53;
            }
            v6 = v54;
            v15 = v57;
            v11 = v49;
            v13 = v55;
            v30 = v22;
            v31 = v21 + (v22 >> 1);
            v14 = v56;
            v32 = v56;
            v33 = v31 / v22;
            if ( v33 < 2u )
              v33 = 2;
            v52 = (unsigned __int64)&v54[v5 - 1];
            v34 = 0;
            if ( v22 )
            {
              v35 = v48;
              v36 = v64;
              v37 = (unsigned __int8 **)v63;
              v38 = EndMask[v33];
              do
              {
                LODWORD(v41) = *v36;
                v53 = *v37;
                v51 = v41;
                v39 = v38 >> (v41 + 1);
                v40 = v38 << (7 - v41);
                LOBYTE(v41) = 8;
                if ( v39 )
                {
                  v41 = byte_1C02EC920[*v32 & StartMask[v51 + 1]];
                  *v32 |= v39 & EndMask[v41];
                }
                v42 = v52;
                v43 = v53;
                if ( v40 && (_BYTE)v41 == 8 && (unsigned __int64)v53 < v52 )
                {
                  v42 = v52;
                  v32[1] |= v40 & EndMask[byte_1C02EC920[(unsigned __int8)v32[1]]];
                }
                if ( v34 < v30 - 1 )
                  v32 += v63[(unsigned int)v34 + 1] - (_QWORD)v43;
                ++v34;
                v52 = v5 + v42;
                ++v36;
                ++v37;
              }
              while ( v34 < v35 );
              v6 = v54;
              v4 = v50;
              v15 = v57;
              v14 = v56;
              v11 = v49;
              v13 = v55;
            }
          }
          --v15;
          v55 = v14;
          v13 = v14;
          v57 = v15;
          v56 = --v14;
        }
        while ( v15 >= v6 );
        v7 = v62;
        v12 = v59;
      }
      ++v11;
      v6 = v12;
      v54 = v12;
      v49 = v11;
    }
    while ( v11 < v4 );
    v3 = (_WORD *)v58;
    v6 = *(unsigned __int8 **)(v58 + 40);
  }
  v44 = v4 * (unsigned __int16)*v3;
  result = v4 * *v3 + (_BYTE)v6;
  if ( v6 > &v6[v44] )
    v44 = 0LL;
  if ( v44 )
    return (unsigned __int8)memset(v6, 0, v44);
  return result;
}
