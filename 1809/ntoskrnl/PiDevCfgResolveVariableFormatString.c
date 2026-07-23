/*
 * XREFs of PiDevCfgResolveVariableFormatString @ 0x140831360
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     PnpValidateRegistryString @ 0x14015DA4C (PnpValidateRegistryString.c)
 *     PnpValidateRegistryMultiSz @ 0x140169A18 (PnpValidateRegistryMultiSz.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgResolveVariableFormatString(__int64 a1, void *a2, __int64 a3)
{
  __int64 v5; // r14
  NTSTATUS RegistryValue; // edi
  unsigned __int16 *v7; // r12
  NTSTATUS v8; // eax
  unsigned int *v9; // rbx
  unsigned int v10; // r10d
  const WCHAR *v11; // rsi
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  SIZE_T v14; // r14
  PVOID PoolWithTag; // rax
  unsigned int i; // r14d
  int v17; // eax
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  int v20; // r14d
  unsigned __int16 *v21; // rsi
  _QWORD *v22; // r13
  unsigned __int16 v23; // dx
  unsigned int v24; // ecx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  NTSTATUS v28; // eax
  unsigned int v29; // r14d
  PVOID v30; // rax
  void *v31; // r15
  unsigned __int16 *v32; // r8
  unsigned __int16 *v33; // r12
  unsigned __int16 v34; // ax
  unsigned __int16 v35; // dx
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // eax
  wchar_t *v40; // rdx
  __int64 v41; // rsi
  unsigned int v42; // esi
  __int64 v43; // rsi
  __int64 v44; // rcx
  NTSTATUS v46; // [rsp+20h] [rbp-50h]
  unsigned int v47; // [rsp+20h] [rbp-50h]
  unsigned int v48; // [rsp+24h] [rbp-4Ch]
  PVOID v49; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int16 *v50; // [rsp+30h] [rbp-40h]
  PVOID P; // [rsp+38h] [rbp-38h]
  PVOID v52; // [rsp+40h] [rbp-30h] BYREF
  __int64 v53; // [rsp+48h] [rbp-28h]
  wchar_t pszDest[12]; // [rsp+50h] [rbp-20h] BYREF

  v53 = a3;
  v52 = 0LL;
  v49 = 0LL;
  v48 = 0;
  P = 0LL;
  LODWORD(v5) = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Format", 0, &v52);
  if ( RegistryValue < 0 )
    goto LABEL_106;
  if ( !PnpValidateRegistryString(v52) )
  {
    RegistryValue = -1073741823;
    goto LABEL_106;
  }
  v7 = (unsigned __int16 *)((char *)v52 + *((unsigned int *)v52 + 2));
  v50 = v7;
  v8 = IopGetRegistryValue(a2, L"Variables", 0, &v49);
  v9 = (unsigned int *)v49;
  v10 = 0;
  v46 = v8;
  RegistryValue = v8;
  if ( v8 >= 0 )
  {
    if ( !PnpValidateRegistryMultiSz(v49) )
    {
      RegistryValue = -1073741823;
      goto LABEL_104;
    }
  }
  else
  {
    if ( v8 != -1073741772 )
      goto LABEL_104;
    RegistryValue = 0;
    v46 = 0;
  }
  if ( v9 )
  {
    v11 = (const WCHAR *)((char *)v9 + v9[2]);
    v12 = v11;
    if ( *v11 != (_WORD)v10 )
    {
      do
      {
        v5 = (unsigned int)(v5 + 1);
        v13 = -1LL;
        do
          ++v13;
        while ( v12[v13] != (_WORD)v10 );
        v12 += v13 + 1;
      }
      while ( *v12 != (_WORD)v10 );
      v48 = v5;
      if ( (_DWORD)v5 )
      {
        v14 = 8 * v5;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x63647050u);
        P = PoolWithTag;
        if ( !PoolWithTag )
        {
          RegistryValue = -1073741670;
          goto LABEL_104;
        }
        memset(PoolWithTag, 0, v14);
        v10 = 0;
        for ( i = 0; *v11 && i < v48; ++i )
        {
          v17 = PiDevCfgResolveVariable(a1, v11, (UNICODE_STRING **)P + i);
          v10 = 0;
          v46 = v17;
          RegistryValue = v17;
          if ( v17 < 0 )
          {
            if ( v17 == -1073741772 )
              RegistryValue = -1073741823;
            v46 = RegistryValue;
            break;
          }
          v18 = -1LL;
          do
            ++v18;
          while ( v11[v18] );
          v11 += v18 + 1;
        }
        if ( RegistryValue < 0 )
          goto LABEL_102;
      }
    }
  }
  v19 = *v7;
  v20 = v10;
  v21 = v7;
  if ( !*v7 )
    goto LABEL_56;
  v22 = P;
  do
  {
    ++v21;
    if ( v19 != 37 )
      goto LABEL_34;
    v23 = *v21;
    if ( *v21 == 37 )
    {
      ++v21;
LABEL_34:
      v20 += 2;
      goto LABEL_54;
    }
    if ( (unsigned __int16)(v23 - 48) <= 9u )
    {
      v24 = v10;
      while ( v23 && (unsigned __int16)(v23 - 48) <= 9u )
      {
        ++v21;
        v24 = v23 + 2 * (5 * v24 - 24);
        v23 = *v21;
      }
      if ( v24 < v48 )
      {
        _mm_lfence();
        v25 = v22[v24];
        if ( v25 )
        {
          v26 = *(_DWORD *)(v25 + 32);
          if ( v26 )
          {
            if ( v26 <= 2 )
            {
              v20 = *(_DWORD *)(v25 + 36) + v20 - 2;
            }
            else
            {
              if ( v26 != 4 )
              {
                if ( v26 != 7 )
                  goto LABEL_54;
                v27 = -1LL;
                do
                  ++v27;
                while ( *(_WORD *)(*(_QWORD *)(v25 + 40) + 2 * v27) != (_WORD)v10 );
                goto LABEL_48;
              }
              v28 = RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v25 + 40));
              v10 = 0;
              if ( v28 >= 0 )
              {
                v27 = -1LL;
                do
                  ++v27;
                while ( pszDest[v27] );
LABEL_48:
                v20 += 2 * v27;
              }
            }
          }
        }
      }
    }
LABEL_54:
    v19 = *v21;
  }
  while ( *v21 );
  v9 = (unsigned int *)v49;
  RegistryValue = v46;
LABEL_56:
  v29 = v20 + 2;
  v47 = v29;
  v30 = ExAllocatePoolWithTag(PagedPool, v29, 0x63647050u);
  v31 = v30;
  if ( !v30 )
  {
    RegistryValue = -1073741670;
    goto LABEL_102;
  }
  v32 = v50;
  v33 = (unsigned __int16 *)v30;
  v34 = *v50;
  if ( !*v50 )
    goto LABEL_96;
  while ( 2 )
  {
    if ( v34 == 37 )
    {
      v50 = ++v32;
      v35 = *v32;
      if ( *v32 == 37 )
      {
        if ( v29 <= 2 )
          goto LABEL_93;
        *v33 = 37;
LABEL_63:
        ++v33;
        ++v32;
        v29 -= 2;
LABEL_89:
        v34 = *v32;
        if ( !*v32 )
          goto LABEL_95;
        continue;
      }
      if ( (unsigned __int16)(v35 - 48) > 9u )
        goto LABEL_89;
      v36 = 0;
      if ( v35 )
      {
        do
        {
          if ( (unsigned __int16)(v35 - 48) > 9u )
            break;
          ++v32;
          v37 = v35;
          v35 = *v32;
          v36 = v37 + 2 * (5 * v36 - 24);
        }
        while ( *v32 );
        v50 = v32;
      }
      if ( v36 >= v48 )
        goto LABEL_89;
      _mm_lfence();
      v38 = *((_QWORD *)P + v36);
      if ( !v38 )
        goto LABEL_89;
      v39 = *(_DWORD *)(v38 + 32);
      if ( !v39 )
        goto LABEL_83;
      if ( v39 <= 2 )
      {
        v40 = *(wchar_t **)(v38 + 40);
        v42 = *(_DWORD *)(v38 + 36) - 2;
        goto LABEL_84;
      }
      if ( v39 == 4 )
      {
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v38 + 40)) >= 0 )
        {
          v40 = pszDest;
          v43 = -1LL;
          do
            ++v43;
          while ( pszDest[v43] );
          v32 = v50;
          v42 = 2 * v43;
          goto LABEL_85;
        }
      }
      else
      {
        if ( v39 == 7 )
        {
          v40 = *(wchar_t **)(v38 + 40);
          v41 = -1LL;
          do
            ++v41;
          while ( v40[v41] );
          v42 = 2 * v41;
          goto LABEL_84;
        }
LABEL_83:
        v40 = 0LL;
        v42 = 0;
LABEL_84:
        if ( !v40 )
          goto LABEL_89;
LABEL_85:
        if ( !v42 )
          goto LABEL_89;
        if ( v29 <= v42 )
        {
LABEL_93:
          v9 = (unsigned int *)v49;
          RegistryValue = -1073741823;
          goto LABEL_100;
        }
        memmove(v33, v40, v42);
        v29 -= v42;
        v33 += (unsigned __int64)v42 >> 1;
      }
      v32 = v50;
      goto LABEL_89;
    }
    break;
  }
  if ( v29 > 2 )
  {
    *v33 = v34;
    goto LABEL_63;
  }
  RegistryValue = -1073741823;
LABEL_95:
  v9 = (unsigned int *)v49;
LABEL_96:
  if ( RegistryValue >= 0 )
  {
    if ( v29 == 2 )
    {
      v44 = v53;
      *v33 = 0;
      *(_QWORD *)(v44 + 40) = v31;
      v31 = 0LL;
      *(_DWORD *)(v44 + 32) = 1;
      *(_DWORD *)(v44 + 36) = v47;
    }
    else
    {
      RegistryValue = -1073741823;
    }
  }
LABEL_100:
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
LABEL_102:
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_104:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_106:
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  return (unsigned int)RegistryValue;
}
