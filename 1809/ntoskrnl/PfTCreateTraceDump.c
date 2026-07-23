/*
 * XREFs of PfTCreateTraceDump @ 0x140684C80
 * Callers:
 *     PfTGenerateTrace @ 0x140684C30 (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfTFreeBufferList @ 0x140685478 (PfTFreeBufferList.c)
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
  unsigned int v9; // ebx
  __int64 *v10; // rsi
  __int16 v11; // r13
  unsigned int v12; // r11d
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // r9
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int16 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int16 v26; // r8
  int v27; // edi
  int v28; // r15d
  unsigned int v29; // ebx
  _QWORD *v30; // rax
  char *v31; // r13
  __int64 *v32; // r14
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
  v1 = qword_14043CC58;
  v2 = qword_14043CC60;
  v3 = 0;
  v4 = 0;
  for ( i = 0; (__int64 *)v1 != &qword_14043CC58; v1 = *(_QWORD *)v1 )
    i += *(_DWORD *)(v1 + 32);
  v6 = 2LL * i;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x74546650u);
  P = PoolWithTag;
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_63;
  }
  memset(PoolWithTag, 0, v6);
  v10 = &qword_14043CC30;
  v11 = *(_WORD *)(qword_14043CC60 + 36);
  v79 = v11;
  do
  {
    v10 = (__int64 *)v10[1];
    v12 = 0;
    if ( *((_DWORD *)v10 + 4) )
    {
      while ( 1 )
      {
        v13 = (((unsigned __int64)v10 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v12;
        v14 = *(_QWORD *)v13;
        if ( ((unsigned __int8)*(_QWORD *)v13 & 3u) < 2 )
          break;
        v58 = ((unsigned int)v14 >> 2) & 0x3FF;
        v3 += v58;
        v12 = v58 + v12 - 1;
        if ( (v14 & 3) == 2 )
        {
          LODWORD(v14) = *(_DWORD *)(v13 + 16);
          v13 += 16LL;
          goto LABEL_9;
        }
LABEL_27:
        if ( ++v12 >= *((_DWORD *)v10 + 4) )
          goto LABEL_28;
      }
      ++v3;
LABEL_9:
      v15 = 0LL;
      v16 = 0LL;
      if ( (v14 & 3) != 0 )
      {
        v18 = -1;
        if ( (*(_BYTE *)v13 & 0x18) == 0x10 )
          v17 = *(_WORD *)(v13 + 10);
        else
          v17 = -1;
      }
      else
      {
        v17 = *(_WORD *)(v13 + 10);
        v18 = *(_WORD *)(v13 + 8);
      }
      if ( v18 != 0xFFFF )
      {
        v19 = *(_WORD *)(v2 + 36);
        if ( v18 < v19 || v18 >= *(_DWORD *)(v2 + 32) + (unsigned int)v19 )
        {
          v67 = v2;
          while ( 1 )
          {
            v67 = *(_QWORD *)(v67 + 8);
            if ( (__int64 *)v67 == &qword_14043CC58 )
              v67 = qword_14043CC60;
            if ( v67 == v2 )
              break;
            v68 = *(_WORD *)(v67 + 36);
            if ( v18 >= v68 && v18 < *(_DWORD *)(v67 + 32) + (unsigned int)v68 )
            {
              v2 = v67;
              v20 = v18 - (unsigned __int64)v68;
              v21 = v67 + 47;
              goto LABEL_15;
            }
          }
          v15 = 0LL;
        }
        else
        {
          v20 = v18 - (unsigned __int64)v19;
          v21 = v2 + 47;
LABEL_15:
          v15 = (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v20 + 8;
        }
      }
      if ( v17 != 0xFFFF )
      {
        v22 = *(_WORD *)(v2 + 36);
        if ( v17 < v22 || v17 >= *(_DWORD *)(v2 + 32) + (unsigned int)v22 )
        {
          v69 = v2;
          while ( 1 )
          {
            v69 = *(_QWORD *)(v69 + 8);
            if ( (__int64 *)v69 == &qword_14043CC58 )
              v69 = qword_14043CC60;
            if ( v69 == v2 )
              break;
            v70 = *(_WORD *)(v69 + 36);
            if ( v17 >= v70 && v17 < *(_DWORD *)(v69 + 32) + (unsigned int)v70 )
            {
              v2 = v69;
              v23 = v17 - (unsigned __int64)v70;
              v24 = v69 + 47;
              goto LABEL_20;
            }
          }
          v16 = 0LL;
        }
        else
        {
          v23 = v17 - (unsigned __int64)v22;
          v24 = v2 + 47;
LABEL_20:
          v16 = (v24 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v23 + 8;
        }
      }
      if ( v15 )
      {
        v25 = (unsigned __int16)(v18 - v11);
        if ( v8[v25] != 0xFFFF )
        {
          v8[v25] = -1;
          ++v4;
        }
      }
      if ( v16 )
      {
        v26 = v17 - v11;
        if ( v8[v26] != 0xFFFF )
        {
          v8[v26] = -1;
          ++v4;
        }
      }
      goto LABEL_27;
    }
LABEL_28:
    ;
  }
  while ( v10 != (__int64 *)qword_14043CC30 );
  if ( v3 )
  {
    v27 = 16 * v3;
    v28 = 32 * v4;
    v29 = v28 + ((v27 + 63) & 0xFFFFFFF8);
    v30 = ExAllocatePoolWithTag(PagedPool, v29, 0x44546650u);
    v71 = v30;
    if ( v30 )
    {
      v31 = (char *)(v30 + 4);
      v30[2] = 0LL;
      v32 = &qword_14043CC30;
      v30[3] = 0LL;
      v30[4] = 0LL;
      v30[5] = 0LL;
      v30[6] = 0LL;
      *((_DWORD *)v30 + 6) = v29 - 16;
      v9 = 0;
      *((_DWORD *)v30 + 4) = 852013;
      *((_DWORD *)v30 + 5) = 1128485697;
      v33 = 0;
      *((_DWORD *)v30 + 7) = 0;
      v34 = (unsigned int)(v27 + 24);
      *((_DWORD *)v30 + 10) = v34;
      v35 = (char *)v30 + v34 + 32;
      *((_DWORD *)v30 + 8) = 24;
      v73 = (unsigned __int64)v30 + (unsigned int)(v27 + 24 + v28) + 32;
      v76[9] = v73;
      *((_DWORD *)v30 + 12) = v27 + 24 + v28;
      v80 = v35;
      v78 = 0;
      do
      {
        v32 = (__int64 *)v32[1];
        v36 = 0;
        v74 = v32;
        if ( *((_DWORD *)v32 + 4) )
        {
          v37 = ((unsigned __int64)v32 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v75 = v37;
          while ( 1 )
          {
            v38 = (_WORD *)(v37 + 16LL * v36);
            v39 = 16LL * v33;
            v40 = (__int64)&v31[v39 + 24];
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
            memmove(&v31[v39 + 24], v38, 16 * v41);
            *((_DWORD *)v31 + 1) += v41;
            v33 += v41;
            if ( (*(_DWORD *)v38 & 3) == 2 )
            {
              v38 += 8;
              v40 = (__int64)&v31[v39 + 40];
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
                    if ( (__int64 *)v63 == &qword_14043CC58 )
                      v63 = qword_14043CC60;
                    if ( v63 == v2 )
                      break;
                    v64 = *(_WORD *)(v63 + 36);
                    if ( v46 >= v64 && v46 < *(_DWORD *)(v63 + 32) + (unsigned int)v64 )
                    {
                      v2 = v63;
                      v48 = ((v63 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v46 - (unsigned __int64)v64);
                      goto LABEL_46;
                    }
                  }
                  v43 = 0LL;
                }
                else
                {
                  v48 = ((v2 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v46 - (unsigned __int64)v47);
LABEL_46:
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
                    if ( (__int64 *)v65 == &qword_14043CC58 )
                      v65 = qword_14043CC60;
                    if ( v65 == v2 )
                      break;
                    v66 = *(_WORD *)(v65 + 36);
                    if ( v45 >= v66 && v45 < *(_DWORD *)(v65 + 32) + (unsigned int)v66 )
                    {
                      v2 = v65;
                      v50 = ((v65 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v45 - (unsigned __int64)v66);
                      goto LABEL_51;
                    }
                  }
                  v44 = 0LL;
                }
                else
                {
                  v50 = ((v2 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v45 - (unsigned __int64)v49);
LABEL_51:
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
            v32 = v74;
            ++v36;
            v35 = v80;
            v37 = v75;
            if ( v36 >= *((_DWORD *)v74 + 4) )
              goto LABEL_59;
          }
          v32 = v74;
LABEL_59:
          v9 = 0;
        }
      }
      while ( v32 != (__int64 *)qword_14043CC30 );
      v56 = HIWORD(v76[10]);
      v8 = P;
      *((_DWORD *)v31 + 5) = LODWORD(v76[9]) - *((_DWORD *)v31 + 4) - (_DWORD)v31;
      *((_WORD *)v31 + 7) = v56;
      *a1 = v71;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -2147483622;
  }
  ExFreePoolWithTag(v8, 0);
LABEL_63:
  PfTFreeBufferList(&unk_14043CC18);
  PfTFreeBufferList(&unk_14043CC40);
  return v9;
}
