/*
 * XREFs of ?bSrcCopySRLE4D24@@YAHPEAUBLTINFO@@@Z @ 0x1C02AF9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // r14d
  int v3; // r12d
  int v4; // r13d
  int v5; // r15d
  unsigned __int8 *v6; // r11
  __int64 v7; // rbp
  int v8; // r9d
  unsigned int v9; // r8d
  __int64 result; // rax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  int v13; // ecx
  unsigned __int8 *v14; // r11
  unsigned __int64 v15; // rdi
  unsigned int v16; // ebx
  BOOL v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rax
  unsigned int v23; // r15d
  int v24; // r9d
  int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // r10
  __int64 v28; // r13
  unsigned __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // r10
  int v35; // r8d
  unsigned __int64 v36; // r11
  int v37; // eax
  unsigned __int8 *v38; // r11
  int v39; // ecx
  int v40; // eax
  int v41; // r8d
  __int64 v42; // r14
  __int64 v43; // rcx
  int v44; // r9d
  unsigned int v45; // edx
  int v46; // edi
  int v47; // eax
  __int64 v48; // r15
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // r15
  __int64 v52; // rcx
  int v53; // [rsp+0h] [rbp-98h]
  BOOL v54; // [rsp+10h] [rbp-88h]
  int v55; // [rsp+14h] [rbp-84h]
  int v56; // [rsp+18h] [rbp-80h]
  unsigned int v57; // [rsp+1Ch] [rbp-7Ch]
  __int64 v58; // [rsp+20h] [rbp-78h]
  int v59; // [rsp+28h] [rbp-70h]
  int v60; // [rsp+3Ch] [rbp-5Ch]
  int v61; // [rsp+40h] [rbp-58h]
  int v63; // [rsp+A8h] [rbp+10h]
  int v64; // [rsp+B0h] [rbp+18h]
  int v65; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 23);
  v3 = *((_DWORD *)a1 + 15);
  v4 = *((_DWORD *)a1 + 22);
  v5 = *((_DWORD *)a1 + 24);
  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a1 + 32);
  v65 = *((_DWORD *)a1 + 11);
  v56 = v4;
  v64 = v5;
  v61 = v2;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v57 = v9;
  v63 = v3;
  v58 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v55 = *((_DWORD *)a1 + 25);
  v59 = *((_DWORD *)a1 + 14);
  if ( v3 < v2 )
    return 1LL;
  v11 = *((_DWORD *)a1 + 30) + 2;
  if ( v11 > v9 )
    return 0LL;
  while ( 1 )
  {
    v12 = *v6;
    v13 = v3;
    v14 = v6 + 1;
    v15 = *v14;
    v6 = v14 + 1;
    if ( v12 )
    {
      if ( v3 >= v55 || v8 >= v5 || (int)(v12 + v8) <= v4 )
      {
        v8 += v12;
      }
      else
      {
        if ( v8 < v4 )
        {
          v40 = v4 - v8;
          v8 = v4;
          v12 -= v40;
        }
        if ( (int)(v12 + v8) <= v5 )
        {
          v41 = 0;
        }
        else
        {
          v41 = v8 + v12 - v5;
          v12 = v5 - v8;
        }
        v42 = (unsigned int)(3 * v8);
        v43 = v15 & 0xF;
        v60 = v12 & 1;
        v44 = v12 + v8;
        v45 = v12 >> 1;
        v46 = *(_DWORD *)(v58 + 4 * (v15 >> 4));
        v47 = *(_DWORD *)(v58 + 4 * v43);
        if ( v45 )
        {
          v48 = (unsigned int)(v42 + 1);
          v49 = (unsigned int)(v42 + 2);
          do
          {
            *(_BYTE *)(v42 + v7) = v46;
            v50 = (unsigned int)(v42 + 3);
            *(_BYTE *)(v48 + v7) = BYTE1(v46);
            v51 = (unsigned int)(v48 + 3);
            *(_BYTE *)(v49 + v7) = BYTE2(v46);
            v52 = (unsigned int)(v49 + 3);
            *(_BYTE *)(v50 + v7) = v47;
            v42 = (unsigned int)(v50 + 3);
            *(_BYTE *)(v51 + v7) = BYTE1(v47);
            v48 = (unsigned int)(v51 + 3);
            *(_BYTE *)(v52 + v7) = BYTE2(v47);
            v49 = (unsigned int)(v52 + 3);
            --v45;
          }
          while ( v45 );
          v1 = a1;
          v3 = v63;
          v4 = v56;
          v5 = v64;
        }
        if ( v60 )
        {
          *(_BYTE *)(v42 + v7) = v46;
          *(_BYTE *)((unsigned int)(v42 + 1) + v7) = BYTE1(v46);
          *(_BYTE *)((unsigned int)(v42 + 2) + v7) = BYTE2(v46);
        }
        v8 = v41 + v44;
        v9 = v57;
      }
      goto LABEL_51;
    }
    if ( !(_DWORD)v15 )
      break;
    if ( (_DWORD)v15 == 1 )
      return 0LL;
    if ( (_DWORD)v15 == 2 )
    {
      v11 += 2;
      if ( v11 > v9 )
        return 0LL;
      v37 = *v6;
      v38 = v6 + 1;
      v8 += v37;
      v39 = *v38;
      v6 = v38 + 1;
      v3 -= v39;
      v63 = v3;
      v7 += v65 * v39;
      if ( v3 < v2 )
      {
        *((_DWORD *)v1 + 34) = v8;
        goto LABEL_32;
      }
    }
    else
    {
      v16 = ((unsigned int)(v15 + 1) >> 1) + v11;
      if ( v16 > v9 )
        return 0LL;
      v17 = (((_DWORD)v15 + 1) & 2) != 0;
      v54 = v17;
      if ( v3 >= v55 || v8 >= v5 || (int)v15 + v8 <= v4 )
      {
        v8 += v15;
        v36 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(v15 + 1) >> 1];
      }
      else
      {
        if ( v8 >= v4 )
        {
          v19 = (unsigned int)(3 * v8);
        }
        else
        {
          v18 = v4 - v8;
          v19 = (unsigned int)(3 * v4);
          LODWORD(v15) = v15 - (v4 - v8);
          v8 = v4;
          v6 += (unsigned __int64)v18 >> 1;
          if ( (v18 & 1) != 0 )
          {
            v8 = v4 + 1;
            v20 = *v6++ & 0xF;
            v21 = *(_DWORD *)(v58 + 4 * v20);
            *(_BYTE *)(v19 + v7) = v21;
            *(_BYTE *)((unsigned int)(v19 + 1) + v7) = BYTE1(v21);
            v22 = (unsigned int)(v19 + 2);
            v19 = (unsigned int)(v19 + 3);
            *(_BYTE *)(v22 + v7) = BYTE2(v21);
            LODWORD(v15) = v15 - 1;
          }
        }
        if ( (int)v15 + v8 <= v5 )
        {
          v23 = 0;
        }
        else
        {
          v23 = v8 + v15 - v64;
          LODWORD(v15) = v64 - v8;
        }
        v24 = v15 + v8;
        v25 = v15 & 1;
        v26 = (unsigned int)v15 >> 1;
        v53 = v25;
        if ( v26 )
        {
          v27 = (unsigned int)(v19 + 2);
          v28 = (unsigned int)(v19 + 1);
          do
          {
            v29 = *v6++;
            v30 = *(_DWORD *)(v58 + 4 * (v29 >> 4));
            v31 = *(_DWORD *)(v58 + 4 * (v29 & 0xF));
            *(_BYTE *)(v19 + v7) = v30;
            *(_BYTE *)(v28 + v7) = BYTE1(v30);
            *(_BYTE *)(v27 + v7) = BYTE2(v30);
            v32 = (unsigned int)(v19 + 3);
            v33 = (unsigned int)(v28 + 3);
            v34 = (unsigned int)(v27 + 3);
            *(_BYTE *)(v32 + v7) = v31;
            v19 = (unsigned int)(v32 + 3);
            *(_BYTE *)(v33 + v7) = BYTE1(v31);
            v28 = (unsigned int)(v33 + 3);
            *(_BYTE *)(v34 + v7) = BYTE2(v31);
            v27 = (unsigned int)(v34 + 3);
            --v26;
          }
          while ( v26 );
          v1 = a1;
          v3 = v63;
          v4 = v56;
          v25 = v53;
        }
        if ( v25 )
        {
          v35 = *(_DWORD *)(v58 + 4 * ((unsigned __int64)*v6 >> 4));
          *(_BYTE *)(v19 + v7) = v35;
          *(_BYTE *)((unsigned int)(v19 + 1) + v7) = BYTE1(v35);
          *(_BYTE *)((unsigned int)(v19 + 2) + v7) = BYTE2(v35);
          v36 = (unsigned __int64)&v6[((unsigned __int64)v23 >> 1) + 1];
        }
        else
        {
          v36 = (unsigned __int64)&v6[(unsigned __int64)(v23 + 1) >> 1];
        }
        v17 = v54;
        v8 = v23 + v24;
        v5 = v64;
        v9 = v57;
      }
      v11 = v17 + v16;
      v6 = (unsigned __int8 *)(v17 + v36);
    }
LABEL_51:
    v11 += 2;
    if ( v11 > v9 )
      return 0LL;
    v2 = v61;
  }
  --v3;
  v7 += v65;
  v63 = v3;
  v8 = v59;
  if ( v13 > v2 )
    goto LABEL_51;
  *((_DWORD *)v1 + 34) = v59;
LABEL_32:
  *((_QWORD *)v1 + 14) = v7;
  result = 1LL;
  *((_QWORD *)v1 + 13) = v6;
  *((_DWORD *)v1 + 31) = v11;
  *((_DWORD *)v1 + 33) = v3;
  return result;
}
