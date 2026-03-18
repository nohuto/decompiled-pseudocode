/*
 * XREFs of PnpiAddSidebandResources @ 0x1C00AF094
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C0098ABC (PnpBiosUpdateResourceListWithSidebandResources.c)
 * Callees:
 *     memcmp @ 0x1C0030C80 (memcmp.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     PnpiValidateSidebandResources @ 0x1C00B0430 (PnpiValidateSidebandResources.c)
 */

__int64 __fastcall PnpiAddSidebandResources(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        char *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  unsigned int *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned int v11; // edi
  unsigned int *v13; // r12
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int v17; // r11d
  unsigned int v18; // eax
  unsigned int v19; // r12d
  unsigned int v20; // edi
  __int64 v21; // xmm0_8
  unsigned int v22; // eax
  unsigned int v23; // r9d
  unsigned int v24; // edx
  __int64 v25; // rcx
  BOOL v26; // ecx
  _DWORD *v27; // rdx
  char v28; // r8
  unsigned int v29; // r10d
  char *v30; // r9
  unsigned int v31; // r14d
  unsigned int v32; // r12d
  bool v33; // bp
  unsigned int v34; // ecx
  unsigned int v35; // edi
  __int64 v36; // rsi
  unsigned int v37; // edx
  __int64 v38; // r14
  __int64 v39; // rax
  unsigned int v40; // eax
  char *v41; // rcx
  unsigned int v42; // ebp
  unsigned int v43; // r13d
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rax
  char v47; // [rsp+20h] [rbp-98h]
  unsigned int v48; // [rsp+24h] [rbp-94h]
  int v49; // [rsp+28h] [rbp-90h]
  unsigned int v50; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v51; // [rsp+30h] [rbp-88h]
  int v52; // [rsp+34h] [rbp-84h]
  int v53; // [rsp+38h] [rbp-80h]
  int v54; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v55; // [rsp+40h] [rbp-78h]
  _DWORD *v56; // [rsp+48h] [rbp-70h]
  unsigned int v57; // [rsp+54h] [rbp-64h]
  __int64 v58; // [rsp+58h] [rbp-60h]
  char *v59; // [rsp+60h] [rbp-58h]

  v6 = 0;
  v50 = 0;
  v7 = a3;
  v48 = *a4;
  v8 = a2;
  v52 = 0;
  v9 = a1;
  v53 = 0;
  v10 = 0LL;
  v11 = 0;
  if ( a1 && !(unsigned __int8)PnpiValidateSidebandResources() )
    return 3221225524LL;
  v13 = a6;
  if ( a6 )
    v14 = *a6;
  else
    v14 = 0;
  v15 = 40LL;
  v51 = v14;
  if ( v14 >= 0x28 )
  {
    memset(a5, 0, 0x28uLL);
    v15 = 40LL;
    *((_DWORD *)a5 + 1) = 0;
  }
  v16 = v8 + 32;
  v17 = 8;
  v18 = 0;
  v49 = 8;
  v58 = v8 + 32;
  v55 = 0;
  if ( *(_DWORD *)(v8 + 28) )
  {
    v19 = v48;
    while ( 1 )
    {
      if ( v18 )
      {
        v22 = *(_DWORD *)(v16 + 4);
        if ( v22 > 1 )
        {
          v15 = 32LL * (v22 - 1);
          v16 += 40LL;
        }
        v16 += v15;
        v58 = v16;
      }
      else
      {
        v20 = v11 + 72;
        if ( v19 >= v20 )
        {
          if ( v9 )
          {
            *(_OWORD *)((char *)v7 + v10) = *(_OWORD *)v9;
            *(_OWORD *)((char *)v7 + v10 + 16) = *(_OWORD *)(v9 + 16);
            *(_OWORD *)((char *)v7 + v10 + 32) = *(_OWORD *)(v9 + 32);
            *(_OWORD *)((char *)v7 + v10 + 48) = *(_OWORD *)(v9 + 48);
            v21 = *(_QWORD *)(v9 + 64);
          }
          else
          {
            *(_OWORD *)((char *)v7 + v10) = *(_OWORD *)v8;
            *(_OWORD *)((char *)v7 + v10 + 16) = *(_OWORD *)(v8 + 16);
            *(_OWORD *)((char *)v7 + v10 + 32) = *(_OWORD *)(v8 + 32);
            *(_OWORD *)((char *)v7 + v10 + 48) = *(_OWORD *)(v8 + 48);
            v21 = *(_QWORD *)(v8 + 64);
          }
          *(_QWORD *)((char *)v7 + v10 + 64) = v21;
          v7[7] = 0;
        }
        v11 = v20 - 40;
        v10 += 32LL;
      }
      v23 = *(_DWORD *)(v16 + 4);
      v24 = 0;
      if ( v23 )
      {
        while ( 1 )
        {
          v25 = 32LL * v24;
          if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
            && *(_BYTE *)(v25 + v16 + 9) != 2 )
          {
            break;
          }
          if ( *(_DWORD *)(v25 + v16 + 16) == *(_DWORD *)(v25 + v16 + 20) )
            break;
          if ( ++v24 >= v23 )
            goto LABEL_28;
        }
      }
      else
      {
LABEL_28:
        if ( (unsigned int)++v53 > 1 )
          goto LABEL_73;
      }
      v26 = 1;
      if ( v9 )
      {
        v27 = (_DWORD *)(v9 + 32);
        v56 = (_DWORD *)(v9 + 32);
        v26 = *(_DWORD *)(v9 + 28) != 0;
      }
      else
      {
        v27 = 0LL;
        v56 = 0LL;
      }
      v28 = 1;
      v47 = 1;
      v57 = v26 + v50;
      if ( v50 < v26 + v50 )
      {
        v29 = v48;
        do
        {
          v30 = (char *)v7 + v10;
          v31 = 40;
          v59 = (char *)v7 + v10;
          if ( v27 )
          {
            v32 = v27[1];
            v33 = 0;
            if ( v32 <= 1 )
              v33 = v32 == 0;
            else
              v31 = 32 * v32 + 8;
            if ( v29 >= v31 + v11 )
            {
              memmove((char *)v7 + v10, v27, v31);
              v30 = (char *)v7 + v10;
              v27 = v56;
              v17 = v49;
              v28 = v47;
              v29 = v48;
              *((_DWORD *)v59 + 1) = 0;
              v32 = v56[1];
            }
            v34 = v31 - 32;
            v56 = (_DWORD *)((char *)v27 + v31);
            if ( !v33 )
              v34 = v31;
          }
          else
          {
            if ( v29 >= v11 + 40 )
            {
              *(_WORD *)v30 = *(_WORD *)v16;
              *((_WORD *)v30 + 1) = *(_WORD *)(v16 + 2);
              *((_DWORD *)v30 + 1) = 0;
            }
            v32 = 0;
            v34 = 8;
          }
          v35 = v34 + v11;
          v36 = v34 + v10;
          v54 = 0;
          v37 = 0;
          if ( *(_DWORD *)(v16 + 4) )
          {
            do
            {
              v38 = v16 + 32LL * v37;
              if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
                && *(_BYTE *)(v38 + 9) != 2
                || *(_DWORD *)(v38 + 16) == *(_DWORD *)(v38 + 20) )
              {
                v35 += 32;
                if ( v29 >= v35 )
                {
                  v39 = 32LL * v32;
                  *(_OWORD *)&v30[v39 + 8] = *(_OWORD *)(v38 + 8);
                  *(_OWORD *)&v30[v39 + 24] = *(_OWORD *)(v38 + 24);
                }
                v36 += 32LL;
                ++v52;
                ++v32;
                if ( v28 )
                {
                  v40 = v51;
                  if ( v51 < 0x28 )
                  {
                    v17 += 32;
                    v49 = v17;
                  }
                  else
                  {
                    v41 = a5;
                    v42 = 0;
                    v43 = *((_DWORD *)a5 + 1);
                    if ( v43 )
                    {
                      do
                      {
                        if ( !memcmp(&a5[32 * v42 + 8], (const void *)(v38 + 8), 0x20uLL) )
                          break;
                        ++v42;
                      }
                      while ( v42 < v43 );
                      v16 = v58;
                      v37 = v54;
                      v28 = v47;
                      v29 = v48;
                      v41 = a5;
                      v40 = v51;
                    }
                    v17 = v49;
                    if ( v42 == v43 )
                    {
                      v17 = v49 + 32;
                      v49 = v17;
                      if ( v40 >= v17 )
                      {
                        v44 = 32LL * v42;
                        *(_OWORD *)&v41[v44 + 8] = *(_OWORD *)(v38 + 8);
                        *(_OWORD *)&v41[v44 + 24] = *(_OWORD *)(v38 + 24);
                        ++*((_DWORD *)v41 + 1);
                      }
                    }
                  }
                }
              }
              v30 = v59;
              v54 = ++v37;
            }
            while ( v37 < *(_DWORD *)(v16 + 4) );
            v7 = a3;
          }
          v45 = v35 + 32;
          if ( v32 )
            v45 = v35;
          v11 = v45;
          v46 = v36 + 32;
          if ( v32 )
            v46 = v36;
          v10 = v46;
          if ( v29 >= v11 )
            *((_DWORD *)v59 + 1) = v32;
          v28 = 0;
          v27 = v56;
          v47 = 0;
          ++v50;
        }
        while ( v50 < v57 );
        v9 = a1;
        v8 = a2;
        v19 = v48;
      }
LABEL_73:
      v18 = v55 + 1;
      v55 = v18;
      if ( v18 >= *(_DWORD *)(v8 + 28) )
      {
        v13 = a6;
        break;
      }
      v15 = 40LL;
    }
  }
  if ( v13 )
  {
    if ( v17 < 0x28 )
      v17 = 40;
    *v13 = v17;
  }
  if ( v52 )
  {
    if ( v11 <= v48 )
    {
      v7[7] = v50;
      *v7 = v11;
    }
    else
    {
      v6 = -1073741789;
      *a4 = v11;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v6;
}
