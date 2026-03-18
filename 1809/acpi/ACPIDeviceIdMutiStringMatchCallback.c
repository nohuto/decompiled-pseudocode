/*
 * XREFs of ACPIDeviceIdMutiStringMatchCallback @ 0x1C00542C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIAnsiStringToWideHelper @ 0x1C000C680 (ACPIAnsiStringToWideHelper.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIConvertWideStringToUpperCaseHelper @ 0x1C005E638 (ACPIConvertWideStringToUpperCaseHelper.c)
 */

__int64 __fastcall ACPIDeviceIdMutiStringMatchCallback(
        __int64 **a1,
        int a2,
        const void **a3,
        unsigned int a4,
        _DWORD *a5,
        int a6)
{
  const void **v6; // r15
  unsigned int v9; // ebp
  wchar_t *v10; // rdi
  unsigned int v12; // r14d
  __int64 *v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // r13d
  _DWORD *v18; // rax
  _BYTE *v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rbx
  _WORD *PoolWithTag; // rax
  size_t v23; // r8
  __int64 v24; // rcx
  wchar_t *v25; // rax
  const wchar_t *v26; // rsi
  __int64 v27; // r13
  __int64 v28; // rax
  unsigned int v29; // r15d
  const wchar_t **v30; // rbx
  unsigned __int64 v31; // r12
  PVOID *v32; // rbx
  __int64 v33; // rsi
  int v35; // [rsp+20h] [rbp-168h]
  const void **v36; // [rsp+28h] [rbp-160h]
  SIZE_T v37; // [rsp+30h] [rbp-158h]
  _WORD *v38; // [rsp+38h] [rbp-150h]
  _QWORD v39[32]; // [rsp+40h] [rbp-148h] BYREF

  v6 = a3;
  v36 = a3;
  v9 = 0;
  v10 = 0LL;
  memset(v39, 0, sizeof(v39));
  v12 = 1;
  if ( a2 == 1 )
  {
    v13 = *a1;
    if ( *((_DWORD *)v13 + 2) >= 0x18u )
    {
      v14 = *v13;
      if ( v14 )
      {
        if ( a6 == a4 )
        {
          v15 = *(_QWORD *)(v14 + 8);
          if ( v15 >= 4 )
          {
            if ( v15 == 4 )
            {
              return 0;
            }
            else if ( a4 <= 0x10 )
            {
              v16 = *(_DWORD *)(v14 + 16);
              v17 = 0;
              v35 = v16;
              if ( !a4 )
                goto LABEL_32;
              v18 = a5;
              do
              {
                v19 = *v6;
                if ( *v6 && *v18 == v16 )
                {
                  v20 = -1LL;
                  do
                    ++v20;
                  while ( v19[v20] );
                  if ( (unsigned int)v20 > 0x7FFE )
                    goto LABEL_33;
                  v21 = 2LL * v9;
                  LOWORD(v39[v21]) = 2 * v20;
                  v37 = (unsigned __int16)(2 * v20 + 2);
                  WORD1(v39[v21]) = v37;
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v37, 0x53706341u);
                  v39[2 * v9 + 1] = PoolWithTag;
                  v38 = PoolWithTag;
                  if ( !PoolWithTag )
                    goto LABEL_33;
                  v23 = (unsigned int)(v20 + 1);
                  v6 = v36;
                  memmove(PoolWithTag, *v36, v23);
                  ACPIAnsiStringToWideHelper(v38, v37);
                  ACPIConvertWideStringToUpperCaseHelper(v24, v37);
                  v18 = a5;
                  v16 = v35;
                  ++v9;
                }
                ++v18;
                ++v6;
                ++v17;
                a5 = v18;
                v36 = v6;
              }
              while ( v17 < a4 );
              if ( v9 )
              {
                v25 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, *(_QWORD *)(v14 + 8), 0x53706341u);
                v10 = v25;
                if ( v25 )
                {
                  memmove(v25, *(const void **)v14, *(_QWORD *)(v14 + 8));
                  ACPIConvertWideStringToUpperCaseHelper(v10, *(_QWORD *)(v14 + 8) - 4LL);
                  v12 = 0;
                  v26 = v10;
                  LODWORD(v27) = 0;
                  if ( *v10 )
                  {
                    while ( 2 )
                    {
                      v28 = -1LL;
                      do
                        ++v28;
                      while ( v26[v28] );
                      v29 = 0;
                      v27 = (unsigned int)(v28 + v27 + 1);
                      v30 = (const wchar_t **)&v39[1];
                      v31 = 2LL * (unsigned int)v28;
                      do
                      {
                        if ( v31 >= *((unsigned __int16 *)v30 - 4) && wcsstr(v26, *v30) )
                        {
                          v12 = 2;
                          goto LABEL_33;
                        }
                        ++v29;
                        v30 += 2;
                      }
                      while ( v29 < v9 );
                      v26 = &v10[v27];
                      if ( *v26 )
                        continue;
                      break;
                    }
                  }
                }
              }
              else
              {
LABEL_32:
                v12 = 0;
              }
LABEL_33:
              if ( v9 )
              {
                v32 = (PVOID *)&v39[1];
                v33 = v9;
                do
                {
                  if ( *v32 )
                    ExFreePoolWithTag(*v32, 0x53706341u);
                  v32 += 2;
                  --v33;
                }
                while ( v33 );
              }
              if ( v10 )
                ExFreePoolWithTag(v10, 0x53706341u);
            }
          }
        }
      }
    }
  }
  return v12;
}
