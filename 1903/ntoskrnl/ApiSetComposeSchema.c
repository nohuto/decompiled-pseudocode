/*
 * XREFs of ApiSetComposeSchema @ 0x140343458
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x14091B534 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     ApiSetpSearchForApiSet @ 0x14017D27C (ApiSetpSearchForApiSet.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ApiSetValidateSchemaFormat @ 0x1403431A4 (ApiSetValidateSchemaFormat.c)
 *     AsiAddDataToSchema @ 0x140343A98 (AsiAddDataToSchema.c)
 *     AsiPopulateHashes @ 0x140343B30 (AsiPopulateHashes.c)
 *     AsiSortValueList @ 0x140343C80 (AsiSortValueList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ApiSetComposeSchema(unsigned int **a1, unsigned int *a2, _DWORD *a3, int a4)
{
  unsigned int *v4; // r13
  unsigned int v6; // r12d
  unsigned int v7; // r15d
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rbx
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // eax
  const WCHAR *v18; // r9
  _WORD *v19; // rcx
  unsigned __int16 v20; // ax
  _DWORD *v21; // rax
  int v22; // edx
  int v23; // r12d
  _DWORD *PoolWithTag; // rsi
  unsigned int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // r15d
  unsigned int i; // r11d
  char *v33; // rdx
  int v34; // eax
  int v35; // eax
  unsigned int j; // r8d
  char *v37; // r10
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  char *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  char *v45; // rdx
  __int64 v46; // rbx
  const WCHAR *v47; // r12
  _WORD *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r9
  __int64 v51; // rcx
  int v52; // r9d
  int v53; // r12d
  _DWORD *v54; // rcx
  ULONG_PTR v55; // rcx
  int v57; // [rsp+28h] [rbp-59h]
  unsigned int v58; // [rsp+2Ch] [rbp-55h]
  unsigned int v59; // [rsp+2Ch] [rbp-55h]
  int v60; // [rsp+2Ch] [rbp-55h]
  unsigned int v61; // [rsp+30h] [rbp-51h]
  unsigned int v62; // [rsp+34h] [rbp-4Dh]
  unsigned int v63; // [rsp+38h] [rbp-49h]
  int v64; // [rsp+38h] [rbp-49h]
  int v65; // [rsp+3Ch] [rbp-45h]
  int v66; // [rsp+3Ch] [rbp-45h]
  __int64 v67; // [rsp+40h] [rbp-41h]
  unsigned int v68; // [rsp+40h] [rbp-41h]
  __int64 v69; // [rsp+48h] [rbp-39h]
  int v70; // [rsp+48h] [rbp-39h]
  __int64 v71; // [rsp+50h] [rbp-31h]
  char *v72; // [rsp+58h] [rbp-29h]
  char *v73; // [rsp+60h] [rbp-21h]
  __int64 v74; // [rsp+68h] [rbp-19h]
  char *v75; // [rsp+70h] [rbp-11h]
  __int64 v76; // [rsp+78h] [rbp-9h] BYREF
  int v77; // [rsp+80h] [rbp-1h]
  int v78; // [rsp+84h] [rbp+3h]
  unsigned int v79; // [rsp+88h] [rbp+7h]
  _QWORD v80[2]; // [rsp+90h] [rbp+Fh] BYREF
  int v81; // [rsp+A0h] [rbp+1Fh]
  int v84; // [rsp+100h] [rbp+7Fh] BYREF

  v84 = a4;
  v4 = *a1;
  if ( **a1 < 5 || *a3 < 5u )
    return 3221225659LL;
  if ( (v4[2] & 1) != 0 )
    return 3221225485LL;
  if ( !v4[3] )
    return 3221225485LL;
  v6 = a3[3];
  if ( !v6 )
    return 3221225485LL;
  v61 = 0;
  v7 = 0;
  v8 = ApiSetValidateSchemaFormat(*a1, v4[1]);
  if ( v8 >= 0 )
  {
    v8 = ApiSetValidateSchemaFormat(a3, a3[1]);
    if ( v8 >= 0 )
    {
      v9 = 0LL;
      v10 = (unsigned int)a3[4];
      v67 = v10;
      while ( 1 )
      {
        v11 = 0LL;
        v84 = 0;
        v12 = (_DWORD *)((char *)&a3[6 * v9] + v10);
        v13 = 0;
        v63 = v12[5];
        if ( v63 )
          break;
LABEL_27:
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= v6 )
        {
          v23 = 24 * v61;
          v59 = v7 + 24 * v61 + v4[1] + 8 * v61;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v59, 0x68635341u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          v25 = v4[4] + 24 * v4[3];
          v26 = v25;
          memmove(PoolWithTag, v4, v25);
          v27 = v23 + v25;
          v28 = v4[5] - v25;
          v29 = v28 + v27;
          v57 = v28 + v27;
          v84 = v28 + v27;
          memmove((char *)PoolWithTag + v27, (char *)v4 + v26, v28);
          memset((char *)PoolWithTag + v29, 0, v7);
          v30 = v7 + v29;
          memmove((char *)PoolWithTag + v30, (char *)v4 + v4[5], 8 * v4[3]);
          v31 = v59;
          PoolWithTag[1] = v59;
          PoolWithTag[5] = v30;
          if ( v23 )
          {
            for ( i = 0; i < PoolWithTag[3]; ++i )
            {
              v33 = (char *)PoolWithTag + (unsigned int)PoolWithTag[4];
              v34 = *(_DWORD *)&v33[24 * i + 4];
              if ( v34 )
                *(_DWORD *)&v33[24 * i + 4] = v23 + v34;
              v35 = *(_DWORD *)&v33[24 * i + 16];
              if ( v35 )
                *(_DWORD *)&v33[24 * i + 16] = v23 + v35;
              for ( j = 0; j < *(_DWORD *)&v33[24 * i + 20]; ++j )
              {
                v37 = (char *)PoolWithTag + *(unsigned int *)&v33[24 * i + 16];
                v38 = *(_DWORD *)&v37[20 * j + 4];
                if ( v38 )
                  *(_DWORD *)&v37[20 * j + 4] = v23 + v38;
                v39 = *(_DWORD *)&v37[20 * j + 12];
                if ( v39 )
                  *(_DWORD *)&v37[20 * j + 12] = v23 + v39;
              }
            }
          }
          v8 = ApiSetValidateSchemaFormat(PoolWithTag, v59);
          if ( v8 < 0 )
            goto LABEL_74;
          v40 = 0LL;
          v60 = 0;
          v68 = 0;
          if ( a3[3] )
          {
            while ( 1 )
            {
              v41 = 3 * v40;
              v42 = (char *)a3 + (unsigned int)a3[4];
              v74 = v41;
              v75 = v42;
              v64 = 0;
              v73 = (char *)a3 + *(unsigned int *)&v42[24 * v40 + 4];
              v62 = *(_DWORD *)&v42[24 * v40 + 8];
              v43 = 0LL;
              v66 = 0;
              if ( *(_DWORD *)&v42[8 * v41 + 20] )
                break;
LABEL_70:
              v40 = (unsigned int)(v60 + 1);
              v60 = v40;
              if ( (unsigned int)v40 >= a3[3] )
                goto LABEL_71;
            }
            while ( 1 )
            {
              v44 = 5 * v43;
              v45 = (char *)a3 + *(unsigned int *)&v42[8 * v41 + 16];
              v71 = 5 * v43;
              v72 = v45;
              v46 = *(unsigned int *)&v45[20 * v43 + 16];
              v47 = (const WCHAR *)((char *)a3 + *(unsigned int *)&v45[20 * v43 + 12]);
              v48 = (_WORD *)((char *)v47 + v46);
              do
              {
                if ( (unsigned int)v46 <= 1 )
                  break;
                LODWORD(v46) = v46 - 2;
                --v48;
              }
              while ( *v48 != 45 );
              if ( !((unsigned __int16)v46 >> 1) )
                break;
              v70 = *(_DWORD *)&v45[4 * v44 + 4];
              v49 = ApiSetpSearchForApiSet(PoolWithTag, v47, (unsigned __int16)v46 >> 1);
              if ( v49 )
              {
                v52 = v57;
              }
              else
              {
                if ( v68 >= v61 )
                {
                  v8 = -2147483643;
                  goto LABEL_74;
                }
                v50 = (unsigned int)PoolWithTag[3];
                v51 = (unsigned int)PoolWithTag[4];
                ++v68;
                PoolWithTag[3] = v50 + 1;
                v49 = (__int64)&PoolWithTag[6 * v50] + v51;
                *(_QWORD *)v49 = 0LL;
                *(_QWORD *)(v49 + 8) = 0LL;
                *(_QWORD *)(v49 + 16) = 0LL;
                *(_DWORD *)(v49 + 4) = v57;
                *(_DWORD *)(v49 + 8) = *(_DWORD *)&v72[4 * v71 + 16];
                *(_DWORD *)(v49 + 12) = v46;
                v8 = AsiAddDataToSchema(PoolWithTag, &v84, v47, *(unsigned int *)&v72[4 * v71 + 16]);
                if ( v8 < 0 )
                  goto LABEL_74;
                *(_DWORD *)(v49 + 20) = 1;
                v80[0] = 0LL;
                v80[1] = 0LL;
                v81 = 0;
                *(_DWORD *)(v49 + 16) = v84;
                v8 = AsiAddDataToSchema(PoolWithTag, &v84, v80, 20LL);
                if ( v8 < 0 )
                  goto LABEL_74;
                v52 = v84;
                v57 = v84;
              }
              if ( (*(_DWORD *)v49 & 1) == 0 )
              {
                v53 = v64;
                if ( !v64 )
                {
                  v53 = v52;
                  v64 = v52;
                  v8 = AsiAddDataToSchema(PoolWithTag, &v84, v73, v62);
                  if ( v8 < 0 )
                    goto LABEL_74;
                  v57 = v84;
                }
                if ( !*(_DWORD *)(v49 + 20) )
                {
                  v8 = -1073741811;
                  goto LABEL_74;
                }
                v54 = (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(v49 + 16));
                if ( v54[4] && v70 )
                {
                  v54[2] = v62;
                  v54[1] = v53;
                  v8 = AsiAddDataToSchema(PoolWithTag, &v84, v54, (unsigned int)(20 * *(_DWORD *)(v49 + 20)));
                  if ( v8 < 0 )
                    goto LABEL_74;
                  v76 = 0LL;
                  v77 = 0;
                  *(_DWORD *)(v49 + 16) = v57;
                  v79 = v62;
                  v78 = v53;
                  v8 = AsiAddDataToSchema(PoolWithTag, &v84, &v76, 20LL);
                  if ( v8 < 0 )
                    goto LABEL_74;
                  ++*(_DWORD *)(v49 + 20);
                  AsiSortValueList(PoolWithTag, v49);
                  v57 = v84;
                }
                else
                {
                  v54[1] = 0;
                  v54[2] = 0;
                  v54[3] = v53;
                  v54[4] = v62;
                  *(_DWORD *)(v49 + 20) = 1;
                }
              }
              v41 = v74;
              v43 = (unsigned int)(v66 + 1);
              v42 = v75;
              v66 = v43;
              if ( (unsigned int)v43 >= *(_DWORD *)&v75[8 * v74 + 20] )
                goto LABEL_70;
            }
            v8 = -1073740670;
            goto LABEL_74;
          }
LABEL_71:
          if ( v61 && !(unsigned int)AsiPopulateHashes(PoolWithTag) )
          {
            v8 = -1073741823;
            goto LABEL_74;
          }
          v8 = ApiSetValidateSchemaFormat(PoolWithTag, v31);
          if ( v8 < 0 )
          {
LABEL_74:
            v55 = (ULONG_PTR)PoolWithTag;
          }
          else
          {
            v55 = (ULONG_PTR)v4;
            *a1 = PoolWithTag;
            *a2 = v31;
          }
          ExFreeHeapPool(v55);
          return (unsigned int)v8;
        }
      }
      v14 = (unsigned int)v12[4];
      v69 = v14;
      while ( 1 )
      {
        v15 = v14 + 20 * v11;
        v16 = *(unsigned int *)((char *)a3 + v15 + 16);
        v17 = *(_DWORD *)((char *)a3 + v15 + 16);
        v18 = (const WCHAR *)((char *)a3 + *(unsigned int *)((char *)a3 + v15 + 12));
        v58 = v17;
        v19 = (_WORD *)((char *)v18 + v16);
        if ( (unsigned int)v16 > 1 )
        {
          do
          {
            v17 -= 2;
            --v19;
          }
          while ( *v19 != 45 && v17 > 1 );
        }
        v20 = (unsigned __int16)v17 >> 1;
        if ( !v20 )
          break;
        v65 = *(_DWORD *)((char *)a3 + v15 + 4);
        v21 = (_DWORD *)ApiSetpSearchForApiSet(v4, v18, v20);
        if ( v21 )
        {
          if ( (*v21 & 1) == 0 )
          {
            if ( !v13 )
            {
              v13 = 1;
              v7 += (v12[2] + 3) & 0xFFFFFFFC;
            }
            v22 = v21[5];
            if ( !v22 )
              return (unsigned int)-1073741811;
            if ( *(unsigned int *)((char *)v4 + (unsigned int)v21[4] + 16) && v65 )
              v7 += 20 * v22 + 20;
          }
        }
        else
        {
          ++v61;
          v7 += ((v58 + 3) & 0xFFFFFFFC) + 20;
          if ( !v13 )
          {
            v13 = 1;
            v7 += (v12[2] + 3) & 0xFFFFFFFC;
          }
        }
        v14 = v69;
        v11 = (unsigned int)(v84 + 1);
        v84 = v11;
        if ( (unsigned int)v11 >= v63 )
        {
          v10 = v67;
          goto LABEL_27;
        }
      }
      return (unsigned int)-1073740670;
    }
  }
  return (unsigned int)v8;
}
