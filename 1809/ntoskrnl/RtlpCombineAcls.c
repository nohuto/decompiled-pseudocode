/*
 * XREFs of RtlpCombineAcls @ 0x140630720
 * Callers:
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        char **a7,
        _DWORD *a8)
{
  unsigned __int8 *v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned __int8 *v11; // r12
  char *PoolWithTag; // rsi
  unsigned int v16; // r8d
  unsigned __int8 *v17; // rcx
  unsigned int j; // edx
  unsigned int v19; // r14d
  _WORD *v20; // rbp
  unsigned int v21; // r14d
  char *v22; // r15
  __int64 v23; // rax
  char *v24; // rbp
  unsigned int v25; // r14d
  __int64 result; // rax
  unsigned __int8 *v27; // rcx
  unsigned int n; // edx
  _WORD *v29; // rbx
  unsigned int mm; // r14d
  __int64 v31; // rax
  unsigned __int8 *v32; // rdx
  unsigned int i; // r14d
  unsigned __int16 *v34; // r14
  unsigned int v35; // ecx
  char *v36; // r15
  __int64 v37; // rax
  unsigned __int8 *v38; // rcx
  unsigned int k; // edx
  unsigned __int8 *v40; // rdx
  unsigned int v41; // ecx
  unsigned __int8 *v42; // r9
  unsigned int v43; // ecx
  _WORD *v44; // rbx
  unsigned int jj; // r14d
  __int64 v46; // rax
  _WORD *v47; // r14
  unsigned int kk; // r15d
  __int64 v49; // rax
  _WORD *v50; // rbx
  __int64 v51; // rax
  unsigned int v52; // ecx
  unsigned int v53; // edx
  int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // edx
  int v57; // eax
  unsigned int v58; // [rsp+20h] [rbp-58h]
  unsigned int ii; // [rsp+20h] [rbp-58h]
  char *v60; // [rsp+28h] [rbp-50h]
  unsigned __int8 *m; // [rsp+30h] [rbp-48h]
  int v62; // [rsp+80h] [rbp+8h]
  unsigned int v63; // [rsp+80h] [rbp+8h]

  v8 = a5;
  v9 = 0;
  v10 = 2;
  v11 = a4;
  v62 = 2;
  PoolWithTag = 0LL;
  if ( __PAIR128__((unsigned __int64)a1, (unsigned __int64)a2) != 0 || a3 || a4 || a5 || a6 )
  {
    v16 = 8;
    if ( a1 )
    {
      v32 = a1 + 8;
      for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v32 += *((unsigned __int16 *)v32 + 1) )
      {
        switch ( *v32 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            if ( v16 + *((unsigned __int16 *)v32 + 1) < v16 )
              goto LABEL_106;
            v16 += *((unsigned __int16 *)v32 + 1);
            if ( a8 )
              *a8 |= 8u;
            if ( *a1 > v10 )
            {
              v10 = *a1;
              v62 = v10;
            }
            break;
          default:
            break;
        }
        ++i;
      }
    }
    if ( a2 )
    {
      v17 = a2 + 8;
      for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v17 += *((unsigned __int16 *)v17 + 1) )
      {
        if ( *v17 == 17 )
        {
          if ( v16 + *((unsigned __int16 *)v17 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v17 + 1);
          if ( a8 )
            *a8 |= 0x10u;
          if ( *a2 > v10 )
          {
            v10 = *a2;
            v62 = v10;
          }
        }
        ++j;
      }
    }
    if ( a5 )
    {
      v38 = a5 + 8;
      for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v38 += *((unsigned __int16 *)v38 + 1) )
      {
        if ( *v38 == 20 )
        {
          if ( v16 + *((unsigned __int16 *)v38 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v38 + 1);
          if ( a8 )
            *a8 |= 0x80u;
          if ( *a5 > v10 )
          {
            v10 = *a5;
            v62 = v10;
          }
        }
        ++k;
      }
    }
    if ( a6 )
    {
      v40 = a6 + 8;
      v41 = 0;
      v58 = 0;
      for ( m = a6 + 8; v41 < *((unsigned __int16 *)a6 + 2); m = v40 )
      {
        if ( *v40 == 21 )
        {
          v52 = v16;
          v53 = v16 + *((unsigned __int16 *)v40 + 1);
          v54 = -1;
          if ( v53 >= v16 )
            v54 = v53;
          v16 = v54;
          v25 = v53 < v52 ? 0xC0000095 : 0;
          if ( v53 < v52 )
            goto LABEL_36;
          if ( a8 )
            *a8 |= 0x100u;
          v40 = m;
          v41 = v58;
          if ( *a6 > v10 )
            v10 = *a6;
          v62 = v10;
        }
        ++v41;
        v40 += *((unsigned __int16 *)v40 + 1);
        v58 = v41;
      }
    }
    if ( a3 )
    {
      v27 = a3 + 8;
      for ( n = 0; n < *((unsigned __int16 *)a3 + 2); v27 += *((unsigned __int16 *)v27 + 1) )
      {
        if ( *v27 == 18 )
        {
          if ( v16 + *((unsigned __int16 *)v27 + 1) < v16 )
            goto LABEL_106;
          v16 += *((unsigned __int16 *)v27 + 1);
          if ( a8 )
            *a8 |= 0x20u;
          if ( *a3 > v10 )
          {
            v10 = *a3;
            v62 = v10;
          }
        }
        ++n;
      }
    }
    if ( a4 )
    {
      v42 = a4 + 8;
      v43 = 0;
      for ( ii = 0; v43 < *((unsigned __int16 *)v11 + 2); ii = v43 )
      {
        if ( *v42 == 19 )
        {
          v55 = v16;
          v56 = v16 + *((unsigned __int16 *)v42 + 1);
          v57 = -1;
          if ( v56 >= v16 )
            v57 = v16 + *((unsigned __int16 *)v42 + 1);
          v16 = v57;
          v25 = v56 < v55 ? 0xC0000095 : 0;
          if ( v56 < v55 )
            goto LABEL_36;
          if ( a8 )
            *a8 |= 0x40u;
          v43 = ii;
          if ( *v11 > v10 )
            v10 = *v11;
          v62 = v10;
        }
        ++v43;
        v42 += *((unsigned __int16 *)v42 + 1);
      }
    }
    if ( v16 + 3 < v16 )
    {
LABEL_106:
      v25 = -1073741675;
    }
    else
    {
      v19 = (v16 + 3) & 0xFFFFFFFC;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x64536553u);
      if ( PoolWithTag )
      {
        if ( v19 < 8 )
        {
          v25 = -1073741789;
        }
        else
        {
          if ( (unsigned int)(v62 - 2) <= 2 && v19 <= 0xFFFC )
          {
            memset(PoolWithTag, 0, v19);
            *PoolWithTag = v62;
            *((_WORD *)PoolWithTag + 1) = v19;
            PoolWithTag[1] = 0;
            *((_DWORD *)PoolWithTag + 1) = 0;
            v60 = 0LL;
            if ( PoolWithTag + 8 <= &PoolWithTag[(unsigned __int16)v19] )
              v60 = PoolWithTag + 8;
            if ( a1 )
            {
              v34 = (unsigned __int16 *)(a1 + 8);
              v35 = 0;
              v63 = 0;
              if ( *((_WORD *)a1 + 2) )
              {
                v36 = v60;
                do
                {
                  switch ( *(_BYTE *)v34 )
                  {
                    case 2:
                    case 3:
                    case 7:
                    case 8:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                    case 0x10:
                      memmove(v36, v34, v34[1]);
                      ++*((_WORD *)PoolWithTag + 2);
                      v37 = v34[1];
                      v35 = v63;
                      v36 += v37;
                      break;
                    case 4:
                    case 5:
                    case 6:
                    case 9:
                    case 0xA:
                    case 0xB:
                    case 0xC:
                      v35 = v63;
                      goto LABEL_58;
                    default:
LABEL_58:
                      LOWORD(v37) = v34[1];
                      break;
                  }
                  ++v35;
                  v34 = (unsigned __int16 *)((char *)v34 + (unsigned __int16)v37);
                  v63 = v35;
                }
                while ( v35 < *((unsigned __int16 *)a1 + 2) );
                v11 = a4;
                v60 = v36;
                v8 = a5;
              }
            }
            if ( a2 )
            {
              v20 = a2 + 8;
              v21 = 0;
              if ( *((_WORD *)a2 + 2) )
              {
                v22 = v60;
                do
                {
                  LOWORD(v23) = v20[1];
                  if ( *(_BYTE *)v20 == 17 )
                  {
                    memmove(v22, v20, (unsigned __int16)v23);
                    ++*((_WORD *)PoolWithTag + 2);
                    v23 = (unsigned __int16)v20[1];
                    v22 += v23;
                  }
                  ++v21;
                  v20 = (_WORD *)((char *)v20 + (unsigned __int16)v23);
                }
                while ( v21 < *((unsigned __int16 *)a2 + 2) );
                v60 = v22;
                v8 = a5;
              }
            }
            v24 = v60;
            if ( v8 )
            {
              v44 = v8 + 8;
              for ( jj = 0; jj < *((unsigned __int16 *)v8 + 2); v44 = (_WORD *)((char *)v44 + (unsigned __int16)v46) )
              {
                LOWORD(v46) = v44[1];
                if ( *(_BYTE *)v44 == 20 )
                {
                  memmove(v24, v44, (unsigned __int16)v46);
                  ++*((_WORD *)PoolWithTag + 2);
                  v46 = (unsigned __int16)v44[1];
                  v24 += v46;
                }
                ++jj;
              }
            }
            if ( a6 )
            {
              v47 = a6 + 8;
              for ( kk = 0; kk < *((unsigned __int16 *)a6 + 2); v47 = (_WORD *)((char *)v47 + (unsigned __int16)v49) )
              {
                LOWORD(v49) = v47[1];
                if ( *(_BYTE *)v47 == 21 )
                {
                  memmove(v24, v47, (unsigned __int16)v49);
                  ++*((_WORD *)PoolWithTag + 2);
                  v49 = (unsigned __int16)v47[1];
                  v24 += v49;
                }
                ++kk;
              }
            }
            if ( a3 )
            {
              v29 = a3 + 8;
              for ( mm = 0; mm < *((unsigned __int16 *)a3 + 2); v29 = (_WORD *)((char *)v29 + (unsigned __int16)v31) )
              {
                LOWORD(v31) = v29[1];
                if ( *(_BYTE *)v29 == 18 )
                {
                  memmove(v24, v29, (unsigned __int16)v31);
                  ++*((_WORD *)PoolWithTag + 2);
                  v31 = (unsigned __int16)v29[1];
                  v24 += v31;
                }
                ++mm;
              }
            }
            if ( v11 && (v50 = v11 + 8, *((_WORD *)v11 + 2)) )
            {
              do
              {
                LOWORD(v51) = v50[1];
                if ( *(_BYTE *)v50 == 19 )
                {
                  memmove(v24, v50, (unsigned __int16)v51);
                  ++*((_WORD *)PoolWithTag + 2);
                  v51 = (unsigned __int16)v50[1];
                  v24 += v51;
                }
                ++v9;
                v50 = (_WORD *)((char *)v50 + (unsigned __int16)v51);
              }
              while ( v9 < *((unsigned __int16 *)v11 + 2) );
              v25 = 0;
            }
            else
            {
              v25 = 0;
            }
            goto LABEL_36;
          }
          v25 = -1073741811;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      else
      {
        v25 = -1073741801;
      }
    }
LABEL_36:
    result = v25;
    *a7 = PoolWithTag;
    return result;
  }
  *a7 = 0LL;
  return 0LL;
}
