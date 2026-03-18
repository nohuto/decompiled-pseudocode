/*
 * XREFs of PfTCreateTraceDump @ 0x14066D060
 * Callers:
 *     PfTGenerateTrace @ 0x14066D010 (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfTFreeBufferList @ 0x14066D834 (PfTFreeBufferList.c)
 */

__int64 __fastcall PfTCreateTraceDump(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  int v3; // edi
  int v4; // r15d
  unsigned int i; // edx
  SIZE_T v6; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v8; // r12
  __int64 *v9; // rsi
  __int16 v10; // r13
  unsigned int v11; // r11d
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // r10
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int16 v25; // r8
  int v26; // edi
  int v27; // r15d
  unsigned int v28; // ebx
  _QWORD *v29; // rax
  char *v30; // r13
  __int64 *v31; // r14
  unsigned int v32; // ebx
  unsigned int v33; // r12d
  __int64 v34; // rdx
  char *v35; // rdx
  unsigned int v36; // r15d
  unsigned __int64 v37; // rax
  _WORD *v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // r14
  unsigned int v41; // edi
  __int64 v42; // rcx
  _OWORD *v43; // r10
  _OWORD *v44; // r11
  unsigned __int16 v45; // r9
  unsigned __int16 v46; // r8
  unsigned __int16 v47; // dx
  unsigned __int64 v48; // r10
  unsigned __int16 v49; // dx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  char *v52; // r8
  unsigned __int16 v53; // cx
  unsigned __int16 v54; // r9
  unsigned __int16 v55; // cx
  __int16 v56; // cx
  unsigned int v58; // ecx
  __int16 v59; // bx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int16 v62; // r9
  __int64 v63; // r10
  unsigned __int16 v64; // dx
  __int64 v65; // r11
  unsigned __int16 v66; // dx
  __int64 v67; // r9
  unsigned __int16 v68; // bx
  __int64 v69; // r10
  unsigned __int16 v70; // bx
  _QWORD *v71; // [rsp+20h] [rbp-108h]
  _WORD *P; // [rsp+28h] [rbp-100h]
  unsigned __int64 v73; // [rsp+30h] [rbp-F8h]
  __int64 *v74; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v75; // [rsp+40h] [rbp-E8h]
  _QWORD v76[12]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int16 v78; // [rsp+138h] [rbp+10h]
  __int16 v79; // [rsp+140h] [rbp+18h]
  char *v80; // [rsp+148h] [rbp+20h]

  memset(v76, 0, sizeof(v76));
  v1 = qword_140467358;
  v2 = qword_140467360;
  v3 = 0;
  v4 = 0;
  for ( i = 0; (__int64 *)v1 != &qword_140467358; v1 = *(_QWORD *)v1 )
    i += *(_DWORD *)(v1 + 32);
  v6 = 2LL * i;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x74546650u);
  P = PoolWithTag;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    v9 = &qword_140467330;
    v10 = *(_WORD *)(qword_140467360 + 36);
    v79 = v10;
    do
    {
      v9 = (__int64 *)v9[1];
      v11 = 0;
      if ( *((_DWORD *)v9 + 4) )
      {
        while ( 1 )
        {
          v12 = (((unsigned __int64)v9 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v11;
          v13 = *(_QWORD *)v12;
          if ( ((unsigned __int8)*(_QWORD *)v12 & 3u) < 2 )
            break;
          v58 = ((unsigned int)v13 >> 2) & 0x3FF;
          v3 += v58;
          v11 = v58 + v11 - 1;
          if ( (v13 & 3) == 2 )
          {
            LODWORD(v13) = *(_DWORD *)(v12 + 16);
            v12 += 16LL;
            goto LABEL_8;
          }
LABEL_26:
          if ( ++v11 >= *((_DWORD *)v9 + 4) )
            goto LABEL_27;
        }
        ++v3;
LABEL_8:
        v14 = 0LL;
        v15 = 0LL;
        if ( (v13 & 3) != 0 )
        {
          v17 = -1;
          if ( (*(_BYTE *)v12 & 0x18) == 0x10 )
            v16 = *(_WORD *)(v12 + 10);
          else
            v16 = -1;
        }
        else
        {
          v16 = *(_WORD *)(v12 + 10);
          v17 = *(_WORD *)(v12 + 8);
        }
        if ( v17 != 0xFFFF )
        {
          v18 = *(_WORD *)(v2 + 36);
          if ( v17 < v18 || v17 >= *(_DWORD *)(v2 + 32) + (unsigned int)v18 )
          {
            v67 = v2;
            while ( 1 )
            {
              v67 = *(_QWORD *)(v67 + 8);
              if ( (__int64 *)v67 == &qword_140467358 )
                v67 = qword_140467360;
              if ( v67 == v2 )
                break;
              v68 = *(_WORD *)(v67 + 36);
              if ( v17 >= v68 && v17 < *(_DWORD *)(v67 + 32) + (unsigned int)v68 )
              {
                v2 = v67;
                v19 = v17 - (unsigned __int64)v68;
                v20 = v67 + 47;
                goto LABEL_14;
              }
            }
            v14 = 0LL;
          }
          else
          {
            v19 = v17 - (unsigned __int64)v18;
            v20 = v2 + 47;
LABEL_14:
            v14 = (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v19 + 8;
          }
        }
        if ( v16 != 0xFFFF )
        {
          v21 = *(_WORD *)(v2 + 36);
          if ( v16 < v21 || v16 >= *(_DWORD *)(v2 + 32) + (unsigned int)v21 )
          {
            v69 = v2;
            while ( 1 )
            {
              v69 = *(_QWORD *)(v69 + 8);
              if ( (__int64 *)v69 == &qword_140467358 )
                v69 = qword_140467360;
              if ( v69 == v2 )
                break;
              v70 = *(_WORD *)(v69 + 36);
              if ( v16 >= v70 && v16 < *(_DWORD *)(v69 + 32) + (unsigned int)v70 )
              {
                v2 = v69;
                v22 = v16 - (unsigned __int64)v70;
                v23 = v69 + 47;
                goto LABEL_19;
              }
            }
            v15 = 0LL;
          }
          else
          {
            v22 = v16 - (unsigned __int64)v21;
            v23 = v2 + 47;
LABEL_19:
            v15 = (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v22 + 8;
          }
        }
        if ( v14 )
        {
          v24 = (unsigned __int16)(v17 - v10);
          if ( v8[v24] != 0xFFFF )
          {
            v8[v24] = -1;
            ++v4;
          }
        }
        if ( v15 )
        {
          v25 = v16 - v10;
          if ( v8[v25] != 0xFFFF )
          {
            v8[v25] = -1;
            ++v4;
          }
        }
        goto LABEL_26;
      }
LABEL_27:
      ;
    }
    while ( v9 != (__int64 *)qword_140467330 );
    if ( v3 )
    {
      v26 = 16 * v3;
      v27 = 32 * v4;
      v28 = v27 + ((v26 + 63) & 0xFFFFFFF8);
      v29 = ExAllocatePoolWithTag(PagedPool, v28, 0x44546650u);
      v71 = v29;
      if ( v29 )
      {
        v30 = (char *)(v29 + 4);
        v29[2] = 0LL;
        v31 = &qword_140467330;
        v29[3] = 0LL;
        v29[4] = 0LL;
        v29[5] = 0LL;
        v29[6] = 0LL;
        *((_DWORD *)v29 + 6) = v28 - 16;
        v32 = 0;
        *((_DWORD *)v29 + 4) = 852013;
        *((_DWORD *)v29 + 5) = 1128485697;
        v33 = 0;
        *((_DWORD *)v29 + 7) = 0;
        v34 = (unsigned int)(v26 + 24);
        *((_DWORD *)v29 + 10) = v34;
        v35 = (char *)v29 + v34 + 32;
        *((_DWORD *)v29 + 8) = 24;
        v73 = (unsigned __int64)v29 + (unsigned int)(v26 + 24 + v27) + 32;
        v76[9] = v73;
        *((_DWORD *)v29 + 12) = v26 + 24 + v27;
        v80 = v35;
        v78 = 0;
        do
        {
          v31 = (__int64 *)v31[1];
          v36 = 0;
          v74 = v31;
          if ( *((_DWORD *)v31 + 4) )
          {
            v37 = ((unsigned __int64)v31 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
            v75 = v37;
            while ( 1 )
            {
              v38 = (_WORD *)(v37 + 16LL * v36);
              v39 = 16LL * v33;
              v40 = (__int64)&v30[v39 + 24];
              if ( ((unsigned __int8)*(_QWORD *)v38 & 3u) >= 2 )
              {
                v41 = ((unsigned int)*(_QWORD *)v38 >> 2) & 0x3FF;
                v36 = v41 + v36 - 1;
              }
              else
              {
                v41 = 1;
              }
              if ( v40 + (unsigned __int64)(16 * v41) > (unsigned __int64)v35 )
                break;
              memmove(&v30[v39 + 24], v38, 16 * v41);
              *((_DWORD *)v30 + 1) += v41;
              v33 += v41;
              if ( (*(_DWORD *)v38 & 3) == 2 )
              {
                v38 += 8;
                v40 = (__int64)&v30[v39 + 40];
              }
              v42 = *(_QWORD *)v38;
              if ( ((unsigned __int8)*(_QWORD *)v38 & 3u) < 2 )
              {
                v43 = 0LL;
                v44 = 0LL;
                if ( (v42 & 3) != 0 )
                {
                  v46 = -1;
                  if ( (v42 & 0x18) == 0x10 )
                    v45 = v38[5];
                  else
                    v45 = -1;
                }
                else
                {
                  v45 = v38[5];
                  v46 = v38[4];
                }
                if ( v46 != 0xFFFF )
                {
                  v47 = *(_WORD *)(v2 + 36);
                  if ( v46 < v47 || v46 >= *(_DWORD *)(v2 + 32) + (unsigned int)v47 )
                  {
                    v63 = v2;
                    while ( 1 )
                    {
                      v63 = *(_QWORD *)(v63 + 8);
                      if ( (__int64 *)v63 == &qword_140467358 )
                        v63 = qword_140467360;
                      if ( v63 == v2 )
                        break;
                      v64 = *(_WORD *)(v63 + 36);
                      if ( v46 >= v64 && v46 < *(_DWORD *)(v63 + 32) + (unsigned int)v64 )
                      {
                        v2 = v63;
                        v48 = ((v63 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v46 - (unsigned __int64)v64);
                        goto LABEL_45;
                      }
                    }
                    v43 = 0LL;
                  }
                  else
                  {
                    v48 = ((v2 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v46 - (unsigned __int64)v47);
LABEL_45:
                    v43 = (_OWORD *)(v48 + 8);
                  }
                }
                if ( v45 != 0xFFFF )
                {
                  v49 = *(_WORD *)(v2 + 36);
                  if ( v45 < v49 || v45 >= *(_DWORD *)(v2 + 32) + (unsigned int)v49 )
                  {
                    v65 = v2;
                    while ( 1 )
                    {
                      v65 = *(_QWORD *)(v65 + 8);
                      if ( (__int64 *)v65 == &qword_140467358 )
                        v65 = qword_140467360;
                      if ( v65 == v2 )
                        break;
                      v66 = *(_WORD *)(v65 + 36);
                      if ( v45 >= v66 && v45 < *(_DWORD *)(v65 + 32) + (unsigned int)v66 )
                      {
                        v2 = v65;
                        v50 = ((v65 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v45 - (unsigned __int64)v66);
                        goto LABEL_50;
                      }
                    }
                    v44 = 0LL;
                  }
                  else
                  {
                    v50 = ((v2 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v45 - (unsigned __int64)v49);
LABEL_50:
                    v44 = (_OWORD *)(v50 + 8);
                  }
                }
                if ( v43 )
                {
                  v51 = (unsigned __int16)(v46 - v79);
                  v52 = v80;
                  v53 = P[v51];
                  if ( v53 == 0xFFFF )
                  {
                    v53 = v78;
                    v59 = v78 + 1;
                    P[v51] = v78;
                    v60 = 32LL * v78++;
                    if ( (unsigned __int64)&v80[v60 + 32] > v73 )
                    {
                      v78 = v59 - 1;
                    }
                    else
                    {
                      *(_OWORD *)&v80[v60] = *v43;
                      *(_OWORD *)&v80[v60 + 16] = v43[1];
                      ++*((_WORD *)v71 + 22);
                    }
                  }
                  *(_WORD *)(v40 + 8) = v53;
                }
                else
                {
                  v52 = v80;
                }
                if ( v44 )
                {
                  v54 = v45 - v79;
                  v55 = P[v54];
                  if ( v55 == 0xFFFF )
                  {
                    v55 = v78;
                    P[v54] = v78;
                    v61 = 32LL * v78;
                    v62 = ++v78;
                    if ( (unsigned __int64)&v52[v61 + 32] > v73 )
                    {
                      v78 = v62 - 1;
                    }
                    else
                    {
                      *(_OWORD *)&v52[v61] = *v44;
                      *(_OWORD *)&v52[v61 + 16] = v44[1];
                      ++*((_WORD *)v71 + 22);
                    }
                  }
                  *(_WORD *)(v40 + 10) = v55;
                }
              }
              v31 = v74;
              ++v36;
              v35 = v80;
              v37 = v75;
              if ( v36 >= *((_DWORD *)v74 + 4) )
                goto LABEL_58;
            }
            v31 = v74;
LABEL_58:
            v32 = 0;
          }
        }
        while ( v31 != (__int64 *)qword_140467330 );
        v56 = HIWORD(v76[10]);
        v8 = P;
        *((_DWORD *)v30 + 5) = LODWORD(v76[9]) - *((_DWORD *)v30 + 4) - (_DWORD)v30;
        *((_WORD *)v30 + 7) = v56;
        *a1 = v71;
      }
      else
      {
        v32 = -1073741670;
      }
    }
    else
    {
      v32 = -2147483622;
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v32 = -1073741670;
  }
  PfTFreeBufferList(&unk_140467318);
  PfTFreeBufferList(&unk_140467340);
  return v32;
}
