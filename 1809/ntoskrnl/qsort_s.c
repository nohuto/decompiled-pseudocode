/*
 * XREFs of qsort_s @ 0x1401967E0
 * Callers:
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140148484 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_check_icall @ 0x1401C5FE0 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(void *, const void *, const void *),
        void *Context)
{
  char *v7; // rsi
  char *v8; // r15
  __int64 v9; // rcx
  rsize_t v10; // rbx
  char *v11; // rbx
  unsigned __int64 v12; // rdi
  rsize_t v13; // r8
  char *v14; // rdx
  signed __int64 v15; // rbx
  char v16; // cl
  __int64 v17; // rax
  rsize_t v18; // rbx
  char *v19; // rdi
  rsize_t v20; // r9
  char *v21; // r8
  char v22; // cl
  rsize_t v23; // r8
  char *v24; // rdx
  signed __int64 v25; // r9
  char v26; // cl
  rsize_t v27; // r8
  char *v28; // rdx
  signed __int64 v29; // r9
  char v30; // cl
  unsigned __int64 v31; // rbx
  char *v32; // rsi
  char *v33; // rbp
  rsize_t v34; // r8
  char *v35; // rdx
  unsigned __int64 v36; // r9
  char v37; // cl
  char *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-448h]
  char *v40; // [rsp+38h] [rbp-440h]
  _QWORD v41[124]; // [rsp+40h] [rbp-438h]

  v40 = (char *)Base;
  v7 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v39 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - v7) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            if ( v8 > v7 )
            {
              do
              {
                v11 = v7;
                v12 = (unsigned __int64)&v7[SizeOfElements];
                if ( &v7[SizeOfElements] <= v8 )
                {
                  do
                  {
                    if ( ((int (__fastcall *)(void *, unsigned __int64, char *))PtFuncCompare)(Context, v12, v11) > 0 )
                      v11 = (char *)v12;
                    v12 += SizeOfElements;
                  }
                  while ( v12 <= (unsigned __int64)v8 );
                }
                v13 = SizeOfElements;
                v14 = v8;
                if ( v11 != v8 )
                {
                  v15 = v11 - v8;
                  do
                  {
                    v16 = v14[v15];
                    v14[v15] = *v14;
                    *v14++ = v16;
                    --v13;
                  }
                  while ( v13 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > v7 );
              v9 = v39;
            }
            goto LABEL_18;
          }
          v18 = SizeOfElements * (v10 >> 1);
          v19 = &v7[v18];
          if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v7, &v7[v18]) > 0 )
          {
            v20 = SizeOfElements;
            v21 = &v7[v18];
            if ( v7 != v19 )
            {
              do
              {
                v22 = v21[-v18];
                v21[-v18] = *v21;
                *v21++ = v22;
                --v20;
              }
              while ( v20 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *, rsize_t))PtFuncCompare)(Context, v7, v8, v20) > 0 )
          {
            v23 = SizeOfElements;
            v24 = v8;
            if ( v7 != v8 )
            {
              v25 = v7 - v8;
              do
              {
                v26 = v24[v25];
                v24[v25] = *v24;
                *v24++ = v26;
                --v23;
              }
              while ( v23 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, &v7[v18], v8) > 0 )
          {
            v27 = SizeOfElements;
            v28 = v8;
            if ( v19 != v8 )
            {
              v29 = v19 - v8;
              do
              {
                v30 = v28[v29];
                v28[v29] = *v28;
                *v28++ = v30;
                --v27;
              }
              while ( v27 );
            }
          }
          v31 = (unsigned __int64)v7;
          v32 = v8;
          while ( 1 )
          {
            if ( (unsigned __int64)v19 > v31 )
            {
              while ( 1 )
              {
                v31 += SizeOfElements;
                if ( v31 >= (unsigned __int64)v19 )
                  break;
                if ( ((int (__fastcall *)(void *, unsigned __int64, char *))PtFuncCompare)(Context, v31, v19) > 0 )
                {
                  if ( (unsigned __int64)v19 > v31 )
                    goto LABEL_38;
                  goto LABEL_36;
                }
              }
            }
            do
LABEL_36:
              v31 += SizeOfElements;
            while ( v31 <= (unsigned __int64)v8
                 && ((int (__fastcall *)(void *, unsigned __int64, char *))PtFuncCompare)(Context, v31, v19) <= 0 );
            do
            {
LABEL_38:
              v33 = v32;
              v32 -= SizeOfElements;
            }
            while ( v32 > v19 && ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v32, v19) > 0 );
            if ( (unsigned __int64)v32 < v31 )
              break;
            v34 = SizeOfElements;
            v35 = v32;
            if ( (char *)v31 != v32 )
            {
              v36 = v31 - (_QWORD)v32;
              do
              {
                v37 = v35[v36];
                v35[v36] = *v35;
                *v35++ = v37;
                --v34;
              }
              while ( v34 );
            }
            v38 = (char *)v31;
            if ( v19 != v32 )
              v38 = v19;
            v19 = v38;
          }
          if ( v19 < v33 )
          {
            while ( 1 )
            {
              v33 -= SizeOfElements;
              if ( v33 <= v19 )
                break;
              if ( ((unsigned int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v33, v19) )
              {
                if ( v19 >= v33 )
                  break;
                v7 = v40;
                goto LABEL_56;
              }
            }
          }
          v7 = v40;
          do
            v33 -= SizeOfElements;
          while ( v33 > v40 && !((unsigned int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v33, v19) );
LABEL_56:
          v9 = v39;
          if ( v33 - v7 >= (__int64)&v8[-v31] )
            break;
          if ( v31 < (unsigned __int64)v8 )
          {
            v41[v39] = v31;
            v41[v39 + 62] = v8;
            v9 = ++v39;
          }
          if ( v7 >= v33 )
          {
LABEL_18:
            v17 = v9--;
            v39 = v9;
            if ( v17 <= 0 )
              return;
            v7 = (char *)v41[v9];
            v8 = (char *)v41[v9 + 62];
            v40 = v7;
          }
          else
          {
            v8 = v33;
          }
        }
        if ( v7 < v33 )
        {
          v41[v39] = v7;
          v41[v39 + 62] = v33;
          v9 = ++v39;
        }
        if ( v31 >= (unsigned __int64)v8 )
          goto LABEL_18;
        v7 = (char *)v31;
        v40 = (char *)v31;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
