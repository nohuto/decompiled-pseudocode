/*
 * XREFs of PiDqActionDataGetChangedProperties @ 0x1406DC4E4
 * Callers:
 *     PiDqActionDataCreate @ 0x140592404 (PiDqActionDataCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     PnpFreeDevProperty @ 0x1405964EC (PnpFreeDevProperty.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x1405982F0 (PiDqPnPGetObjectProperty.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406DAB50 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqOpenObjectRegKey @ 0x1406DAEA4 (PiDqOpenObjectRegKey.c)
 *     PiDqGrowPropertyArray @ 0x1406DC6D0 (PiDqGrowPropertyArray.c)
 */

__int64 __fastcall PiDqActionDataGetChangedProperties(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        const wchar_t *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9,
        unsigned int *a10)
{
  __int64 v10; // r14
  int v11; // edi
  unsigned int v12; // r15d
  __int64 v13; // rax
  HANDLE v14; // rbx
  __int64 v15; // r14
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // esi
  __int64 v21; // rdx
  NTSTRSAFE_PCWSTR v23; // rcx
  const wchar_t *v24; // rsi
  const wchar_t *v25; // rbx
  const wchar_t *v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // r9d
  unsigned int v29; // r8d
  __int64 *v30; // rsi
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // ecx
  __int128 v35; // xmm1
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  int v39; // ecx
  int v42; // [rsp+58h] [rbp-71h]
  HANDLE Handle; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v44; // [rsp+68h] [rbp-61h]
  int v45[2]; // [rsp+70h] [rbp-59h]
  __int64 v46; // [rsp+78h] [rbp-51h]
  NTSTRSAFE_PCWSTR v47; // [rsp+80h] [rbp-49h]
  PVOID P; // [rsp+88h] [rbp-41h] BYREF
  __int64 v49; // [rsp+90h] [rbp-39h]
  __int128 v50; // [rsp+98h] [rbp-31h] BYREF
  wchar_t *Str1[2]; // [rsp+A8h] [rbp-21h]
  __int128 v52; // [rsp+B8h] [rbp-11h]

  v10 = a8;
  v47 = a5;
  v49 = a1;
  v11 = 0;
  Handle = 0LL;
  v12 = 0;
  P = 0LL;
  *a10 = 0;
  *(_QWORD *)v45 = a3;
  v46 = a8;
  v44 = a9;
  PiPnpRtlBeginOperation(&P);
  v13 = 0LL;
  v42 = 0;
  if ( *(_DWORD *)(a8 + 76) )
  {
    while ( 1 )
    {
      v14 = 0LL;
      v15 = 32 * v13 + v10;
      if ( a6 )
      {
        v16 = 0;
        if ( !a7 )
          goto LABEL_22;
        while ( 1 )
        {
          v17 = a6 + 32LL * v16;
          if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v17 + 16) )
          {
            v18 = *(_QWORD *)(v15 + 80) - *(_QWORD *)v17;
            if ( !v18 )
              v18 = *(_QWORD *)(v15 + 88) - *(_QWORD *)(v17 + 8);
            if ( !v18 )
            {
              v19 = *(_DWORD *)(v15 + 100);
              if ( v19 == *(_DWORD *)(v17 + 20) && (!*(_QWORD *)(v15 + 104) || a4) )
                break;
            }
          }
          if ( ++v16 >= a7 )
            goto LABEL_22;
        }
      }
      else
      {
        v19 = *(_DWORD *)(v15 + 100);
      }
      if ( !v19 )
        break;
      if ( v19 != 1 )
      {
        v11 = -1073741811;
        goto LABEL_23;
      }
      v20 = 0;
      if ( !Handle )
      {
        v11 = PiDqOpenObjectRegKey(1, *(__int64 *)v45, a2, 1, 0, v49, &Handle);
        if ( v11 == -1073741772 )
        {
          Handle = (HANDLE)-1LL;
          v11 = 0;
        }
      }
      v14 = Handle;
      if ( Handle != (HANDLE)-1LL )
        goto LABEL_14;
LABEL_22:
      v10 = v46;
      v13 = (unsigned int)(v42 + 1);
      v42 = v13;
      if ( (unsigned int)v13 >= *(_DWORD *)(v46 + 76) )
        goto LABEL_23;
    }
    v20 = a2;
LABEL_14:
    if ( v11 < 0 )
      goto LABEL_23;
    if ( a4 )
    {
      v11 = PiDqPnPGetObjectPropertyInBestLocale(v45[0], v20, (__int64)v14, v15 + 80, *(_DWORD *)(v15 + 100), v47, &v50);
      if ( v11 < 0 )
        goto LABEL_23;
      v23 = v47;
      v24 = Str1[1];
      while ( 1 )
      {
        v25 = (const wchar_t *)((unsigned __int64)v23 & -(__int64)(*v23 != 0));
        v26 = *(const wchar_t **)(v15 + 104);
        if ( v26 == v25 || v26 && v25 && !wcsicmp(v26, v25) )
          break;
        if ( v24 == v25 || v24 && (!v25 || !wcsicmp(v24, v25)) || !v25 )
          goto LABEL_62;
        v27 = -1LL;
        do
          ++v27;
        while ( v25[v27] );
        v23 = &v25[v27 + 1];
      }
      v28 = *a10;
      v29 = 0;
      v30 = v44;
      if ( *a10 )
      {
        v31 = *v44;
        while ( 1 )
        {
          v32 = 48LL * v29;
          if ( LODWORD(Str1[0]) == *(_DWORD *)(v32 + v31 + 16) )
          {
            v33 = v50 - *(_QWORD *)(v32 + v31);
            if ( (_QWORD)v50 == *(_QWORD *)(v32 + v31) )
              v33 = *((_QWORD *)&v50 + 1) - *(_QWORD *)(v32 + v31 + 8);
            if ( !v33 && HIDWORD(Str1[0]) == *(_DWORD *)(v32 + v31 + 20) )
              break;
          }
          if ( ++v29 >= v28 )
            goto LABEL_59;
        }
LABEL_62:
        PnpFreeDevProperty((__int64)&v50, 0x58706E50u);
        goto LABEL_22;
      }
LABEL_59:
      if ( v12 <= v28 )
      {
        if ( a7 )
        {
          v12 = a7;
        }
        else
        {
          v34 = 5;
          if ( *(_DWORD *)(v46 + 76) > 5u )
            v34 = *(_DWORD *)(v46 + 76);
          v12 += v34;
        }
        v11 = PiDqGrowPropertyArray(v44, v28, v12);
        if ( v11 < 0 )
        {
          PnpFreeDevProperty((__int64)&v50, 0x58706E50u);
          goto LABEL_23;
        }
      }
      v35 = *(_OWORD *)Str1;
      v36 = *v30;
      v37 = 6LL * *a10;
      *(_OWORD *)(v36 + 8 * v37) = v50;
      v38 = v52;
      *(_OWORD *)(v36 + 8 * v37 + 16) = v35;
      *(_OWORD *)(v36 + 8 * v37 + 32) = v38;
    }
    else
    {
      v21 = *a10;
      if ( v12 <= (unsigned int)v21 )
      {
        if ( a7 )
        {
          v12 = a7;
        }
        else
        {
          v39 = 5;
          if ( *(_DWORD *)(v46 + 76) > 5u )
            v39 = *(_DWORD *)(v46 + 76);
          v12 += v39;
        }
        v11 = PiDqGrowPropertyArray(v44, v21, v12);
        if ( v11 < 0 )
          goto LABEL_23;
      }
      v11 = PiDqPnPGetObjectProperty(
              v45[0],
              v20,
              (__int64)v14,
              v15 + 80,
              *(_DWORD *)(v15 + 100),
              *(NTSTRSAFE_PCWSTR *)(v15 + 104),
              (_OWORD *)(*v44 + 48LL * *a10));
      if ( v11 < 0 )
        goto LABEL_23;
    }
    ++*a10;
    goto LABEL_22;
  }
LABEL_23:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v11;
}
