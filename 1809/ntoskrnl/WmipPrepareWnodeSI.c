/*
 * XREFs of WmipPrepareWnodeSI @ 0x140613888
 * Callers:
 *     WmipQuerySetExecuteSI @ 0x1405FCF88 (WmipQuerySetExecuteSI.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     _wtoi @ 0x140195DC0 (_wtoi.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipAddProviderIdToPIList @ 0x140613B34 (WmipAddProviderIdToPIList.c)
 *     WmipReferenceEntry @ 0x140613C30 (WmipReferenceEntry.c)
 *     WmipCountedToSz @ 0x140613C58 (WmipCountedToSz.c)
 *     WmipIsNumber @ 0x14071FF98 (WmipIsNumber.c)
 */

__int64 __fastcall WmipPrepareWnodeSI(__int64 a1, __int64 a2, int *a3, void **a4, _BYTE *a5, _BYTE *a6)
{
  volatile signed __int64 **v7; // rbx
  volatile signed __int64 **v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // r14d
  wchar_t *v12; // r12
  __int64 v13; // rax
  ULONG_PTR v14; // rsi
  int v15; // eax
  _DWORD *v17; // rax
  size_t v18; // rbx
  unsigned int v19; // r12d
  const wchar_t *v20; // rdx
  unsigned __int64 v21; // rax
  const wchar_t *v22; // rdi
  unsigned int v23; // ebx
  _BYTE *v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rdi
  _BYTE *v27; // rax
  volatile signed __int64 **v28; // rsi
  wchar_t *Str1; // [rsp+30h] [rbp-59h]
  unsigned int v30; // [rsp+38h] [rbp-51h] BYREF
  volatile signed __int64 **v31; // [rsp+40h] [rbp-49h]
  int v32; // [rsp+48h] [rbp-41h] BYREF
  volatile signed __int64 **v33; // [rsp+50h] [rbp-39h] BYREF
  _BYTE *v34; // [rsp+58h] [rbp-31h]
  int *v35; // [rsp+60h] [rbp-29h]
  void **v36; // [rsp+68h] [rbp-21h]
  __int64 v37; // [rsp+70h] [rbp-19h]
  wchar_t pszDest[8]; // [rsp+78h] [rbp-11h] BYREF

  v35 = a3;
  v36 = a4;
  v7 = 0LL;
  v34 = a5;
  v8 = 0LL;
  v31 = 0LL;
  v9 = 0LL;
  *a5 = 1;
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 && *(_DWORD *)(v10 + 36) )
  {
    v11 = 0;
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(v10 + 72);
    if ( (*(_DWORD *)(v10 + 16) & 1) != 0 )
    {
      *a6 = 1;
    }
    else
    {
      *a6 = 0;
      Str1 = (wchar_t *)WmipCountedToSz(a2 + *(unsigned int *)(a2 + 48));
      v12 = Str1;
      if ( Str1 )
      {
        v9 = 0LL;
        v30 = 0;
        v31 = (volatile signed __int64 **)*v36;
        v7 = v31;
        v33 = v31;
        v32 = *v35;
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( *(_DWORD *)(v10 + 36) )
        {
          v13 = v10 + 56;
          v14 = *(_QWORD *)(v10 + 56);
          v37 = v13;
          if ( v14 != v13 )
          {
            do
            {
              if ( (_BYTE)v8 )
                break;
              v15 = *(_DWORD *)(v14 + 16);
              if ( (v15 & 0x89000) == 0 )
              {
                if ( (v15 & 1) != 0 )
                {
                  v17 = *(_DWORD **)(v14 + 88);
                  v18 = -1LL;
                  v19 = *v17;
                  v20 = (const wchar_t *)(v17 + 1);
                  do
                    ++v18;
                  while ( v20[v18] );
                  v21 = -1LL;
                  do
                    ++v21;
                  while ( Str1[v21] );
                  if ( v21 <= v18 || wcsnicmp(Str1, v20, v18) )
                  {
                    v12 = Str1;
                  }
                  else
                  {
                    v22 = &Str1[v18];
                    v23 = wtoi(v22);
                    if ( (unsigned __int8)WmipIsNumber(v22) )
                    {
                      if ( v23 >= v19 && v23 < v19 + *(_DWORD *)(v14 + 72) && v23 < 0xF423F )
                      {
                        RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", v23);
                        if ( !wcsicmp(pszDest, v22) )
                        {
                          *(_DWORD *)(a2 + 44) |= 0x80u;
                          LOBYTE(v8) = 1;
                          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v14 + 80);
                          v24 = v34;
                          *(_DWORD *)(a2 + 52) = v23 - v19;
                          *v24 = 0;
                        }
                      }
                    }
                    v12 = Str1;
                  }
                }
                else if ( (v15 & 2) != 0 )
                {
                  v25 = 0;
                  v26 = *(_QWORD *)(v14 + 88);
                  if ( *(_DWORD *)(v14 + 72) )
                  {
                    while ( wcsicmp(*(const wchar_t **)(v26 + 8LL * v25), v12) )
                    {
                      if ( ++v25 >= *(_DWORD *)(v14 + 72) )
                        goto LABEL_12;
                    }
                    *(_DWORD *)(a2 + 44) |= 0x80u;
                    LOBYTE(v8) = 1;
                    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v14 + 80);
                    v27 = v34;
                    *(_DWORD *)(a2 + 52) = v25;
                    *v27 = 0;
                  }
                }
                else
                {
                  WmipReferenceEntry(v14);
                  v11 = WmipAddProviderIdToPIList(
                          (unsigned int)&v33,
                          (unsigned int)&v30,
                          (unsigned int)&v32,
                          (_DWORD)v31,
                          v14);
                  LOBYTE(v8) = v11 < 0;
                }
              }
LABEL_12:
              v14 = *(_QWORD *)v14;
            }
            while ( v14 != v37 );
            v7 = v33;
            v9 = v30;
          }
        }
        else
        {
          v11 = -1073741055;
        }
        ExFreePoolWithTag(v12, 0);
        KeReleaseMutex(&WmipSMMutex, 0);
        v8 = v31;
      }
      else
      {
        v11 = -1073741670;
      }
      if ( *v34 )
      {
        *v35 = v9;
        *v36 = v7;
      }
      else if ( v7 )
      {
        if ( (_DWORD)v9 )
        {
          v28 = v7;
          do
          {
            WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v28++);
            --v9;
          }
          while ( v9 );
          v8 = v31;
        }
        if ( v7 != v8 )
          ExFreePoolWithTag(v7, 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741055;
  }
  return (unsigned int)v11;
}
