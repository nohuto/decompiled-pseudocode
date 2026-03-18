/*
 * XREFs of ?bSrcCopySRLE4D24@@YAHPEAUBLTINFO@@@Z @ 0x1C02C5F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // r13d
  int v3; // r8d
  unsigned __int8 *v4; // r11
  __int64 v5; // r14
  int v6; // r12d
  int v7; // r9d
  unsigned int v8; // r15d
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned int v11; // edx
  int v12; // ecx
  unsigned __int8 *v13; // r11
  unsigned __int64 v14; // rdi
  unsigned int v15; // ebx
  BOOL v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rax
  unsigned int v22; // r13d
  int v23; // eax
  int v24; // r9d
  unsigned int v25; // edi
  __int64 v26; // r10
  __int64 v27; // r13
  unsigned __int64 v28; // rax
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r15
  __int64 v32; // r13
  __int64 v33; // r10
  int v34; // r8d
  unsigned __int64 v35; // r11
  int v36; // eax
  unsigned __int8 *v37; // r11
  int v38; // ecx
  int v39; // eax
  int v40; // r8d
  __int64 v41; // r15
  __int64 v42; // rcx
  int v43; // r9d
  unsigned int v44; // edx
  int v45; // edi
  int v46; // eax
  __int64 v47; // r13
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // r13
  __int64 v51; // rcx
  int v52; // [rsp+8h] [rbp-50h]
  BOOL v53; // [rsp+Ch] [rbp-4Ch]
  int v54; // [rsp+10h] [rbp-48h]
  int v55; // [rsp+14h] [rbp-44h]
  int v56; // [rsp+18h] [rbp-40h]
  int v57; // [rsp+1Ch] [rbp-3Ch]
  unsigned int v58; // [rsp+20h] [rbp-38h]
  __int64 v59; // [rsp+28h] [rbp-30h]
  int v60; // [rsp+30h] [rbp-28h]
  int v61; // [rsp+40h] [rbp-18h]
  int v63; // [rsp+A8h] [rbp+50h]
  int v64; // [rsp+B0h] [rbp+58h]
  unsigned int v65; // [rsp+B8h] [rbp+60h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 22);
  v3 = *((_DWORD *)a1 + 24);
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 32);
  v54 = *((_DWORD *)a1 + 11);
  v57 = v2;
  v64 = v3;
  v63 = v6;
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v58 = v8;
  v59 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v56 = *((_DWORD *)a1 + 25);
  v60 = *((_DWORD *)a1 + 14);
  v55 = *((_DWORD *)a1 + 23);
  if ( v6 < v55 )
    return 1LL;
  v10 = *((_DWORD *)a1 + 30) + 2;
  if ( v10 > v8 )
    return 0LL;
  while ( 1 )
  {
    v11 = *v4;
    v12 = v6;
    v13 = v4 + 1;
    v14 = *v13;
    v4 = v13 + 1;
    if ( v11 )
    {
      if ( v6 >= v56 || v7 >= v3 || (int)(v11 + v7) <= v2 )
      {
        v7 += v11;
      }
      else
      {
        if ( v7 < v2 )
        {
          v39 = v2 - v7;
          v7 = v2;
          v11 -= v39;
        }
        if ( (int)(v11 + v7) <= v3 )
        {
          v40 = 0;
        }
        else
        {
          v40 = v7 + v11 - v64;
          v11 = v64 - v7;
        }
        v41 = (unsigned int)(3 * v7);
        v42 = v14 & 0xF;
        v61 = v11 & 1;
        v43 = v11 + v7;
        v44 = v11 >> 1;
        v45 = *(_DWORD *)(v59 + 4 * (v14 >> 4));
        v46 = *(_DWORD *)(v59 + 4 * v42);
        if ( v44 )
        {
          v47 = (unsigned int)(v41 + 1);
          v48 = (unsigned int)(v41 + 2);
          do
          {
            *(_BYTE *)(v41 + v5) = v45;
            v49 = (unsigned int)(v41 + 3);
            *(_BYTE *)(v47 + v5) = BYTE1(v45);
            v50 = (unsigned int)(v47 + 3);
            *(_BYTE *)(v48 + v5) = BYTE2(v45);
            v51 = (unsigned int)(v48 + 3);
            *(_BYTE *)(v49 + v5) = v46;
            v41 = (unsigned int)(v49 + 3);
            *(_BYTE *)(v50 + v5) = BYTE1(v46);
            v47 = (unsigned int)(v50 + 3);
            *(_BYTE *)(v51 + v5) = BYTE2(v46);
            v48 = (unsigned int)(v51 + 3);
            --v44;
          }
          while ( v44 );
          v1 = a1;
          v6 = v63;
          v2 = v57;
        }
        if ( v61 )
        {
          *(_BYTE *)(v41 + v5) = v45;
          *(_BYTE *)((unsigned int)(v41 + 1) + v5) = BYTE1(v45);
          *(_BYTE *)((unsigned int)(v41 + 2) + v5) = BYTE2(v45);
        }
        v8 = v58;
        v7 = v40 + v43;
      }
      goto LABEL_51;
    }
    if ( !(_DWORD)v14 )
      break;
    if ( (_DWORD)v14 == 1 )
      return 0LL;
    if ( (_DWORD)v14 == 2 )
    {
      v10 += 2;
      if ( v10 > v8 )
        return 0LL;
      v36 = *v4;
      v37 = v4 + 1;
      v7 += v36;
      v38 = *v37;
      v4 = v37 + 1;
      v6 -= v38;
      v63 = v6;
      v5 += v54 * v38;
      if ( v6 < v55 )
      {
        *((_DWORD *)v1 + 34) = v7;
        goto LABEL_32;
      }
    }
    else
    {
      v15 = ((unsigned int)(v14 + 1) >> 1) + v10;
      if ( v15 > v8 )
        return 0LL;
      v16 = (((_DWORD)v14 + 1) & 2) != 0;
      v53 = v16;
      if ( v6 >= v56 || v7 >= v3 || (int)v14 + v7 <= v2 )
      {
        v7 += v14;
        v35 = (unsigned __int64)&v4[(unsigned __int64)(unsigned int)(v14 + 1) >> 1];
      }
      else
      {
        if ( v7 >= v2 )
        {
          v18 = (unsigned int)(3 * v7);
        }
        else
        {
          v17 = v2 - v7;
          v18 = (unsigned int)(3 * v2);
          LODWORD(v14) = v14 - (v2 - v7);
          v7 = v2;
          v4 += (unsigned __int64)v17 >> 1;
          if ( (v17 & 1) != 0 )
          {
            v7 = v2 + 1;
            v19 = *v4++ & 0xF;
            v20 = *(_DWORD *)(v59 + 4 * v19);
            *(_BYTE *)(v18 + v5) = v20;
            *(_BYTE *)((unsigned int)(v18 + 1) + v5) = BYTE1(v20);
            v21 = (unsigned int)(v18 + 2);
            v18 = (unsigned int)(v18 + 3);
            *(_BYTE *)(v21 + v5) = BYTE2(v20);
            v3 = v64;
            LODWORD(v14) = v14 - 1;
          }
        }
        if ( (int)v14 + v7 <= v3 )
        {
          v22 = 0;
        }
        else
        {
          v22 = v7 + v14 - v3;
          LODWORD(v14) = v3 - v7;
        }
        v65 = v22;
        v23 = v14 & 1;
        v24 = v14 + v7;
        v25 = (unsigned int)v14 >> 1;
        v52 = v23;
        if ( v25 )
        {
          v26 = (unsigned int)(v18 + 2);
          v27 = (unsigned int)(v18 + 1);
          do
          {
            v28 = *v4++;
            v29 = *(_DWORD *)(v59 + 4 * (v28 >> 4));
            v30 = *(_DWORD *)(v59 + 4 * (v28 & 0xF));
            *(_BYTE *)(v18 + v5) = v29;
            *(_BYTE *)(v27 + v5) = BYTE1(v29);
            *(_BYTE *)(v26 + v5) = BYTE2(v29);
            v31 = (unsigned int)(v18 + 3);
            v32 = (unsigned int)(v27 + 3);
            v33 = (unsigned int)(v26 + 3);
            *(_BYTE *)(v31 + v5) = v30;
            v18 = (unsigned int)(v31 + 3);
            *(_BYTE *)(v32 + v5) = BYTE1(v30);
            v27 = (unsigned int)(v32 + 3);
            *(_BYTE *)(v33 + v5) = BYTE2(v30);
            v26 = (unsigned int)(v33 + 3);
            --v25;
          }
          while ( v25 );
          v1 = a1;
          v22 = v65;
          v6 = v63;
          v23 = v52;
        }
        if ( v23 )
        {
          v34 = *(_DWORD *)(v59 + 4 * ((unsigned __int64)*v4 >> 4));
          *(_BYTE *)(v18 + v5) = v34;
          *(_BYTE *)((unsigned int)(v18 + 1) + v5) = BYTE1(v34);
          *(_BYTE *)((unsigned int)(v18 + 2) + v5) = BYTE2(v34);
          v35 = (unsigned __int64)&v4[((unsigned __int64)v22 >> 1) + 1];
        }
        else
        {
          v35 = (unsigned __int64)&v4[(unsigned __int64)(v22 + 1) >> 1];
        }
        v16 = v53;
        v7 = v22 + v24;
        v2 = v57;
        v8 = v58;
      }
      v10 = v16 + v15;
      v4 = (unsigned __int8 *)(v16 + v35);
    }
LABEL_51:
    v10 += 2;
    if ( v10 > v8 )
      return 0LL;
    v3 = v64;
  }
  --v6;
  v5 += v54;
  v63 = v6;
  v7 = v60;
  if ( v12 > v55 )
    goto LABEL_51;
  *((_DWORD *)v1 + 34) = v60;
LABEL_32:
  *((_QWORD *)v1 + 14) = v5;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v4;
  *((_DWORD *)v1 + 31) = v10;
  *((_DWORD *)v1 + 33) = v6;
  return result;
}
