/*
 * XREFs of ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18004C960
 * Callers:
 *     s_sndevtResolveSoundAlias @ 0x18004C110 (s_sndevtResolveSoundAlias.c)
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x18004C800 (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 * Callees:
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     StringExHandleOtherFlagsW @ 0x1800C1700 (StringExHandleOtherFlagsW.c)
 */

__int64 __fastcall StringCbCopyExW(
        STRSAFE_LPWSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        unsigned __int16 **a4,
        unsigned __int64 *a5,
        DWORD a6)
{
  DWORD dwFlags; // r15d
  wchar_t *v7; // rsi
  size_t v8; // rdi
  int v11; // ebx
  STRSAFE_LPWSTR v12; // rbp
  size_t v13; // rdx
  __int64 v14; // r9
  wchar_t v15; // ax
  STRSAFE_LPWSTR v16; // rax
  __int64 v17; // rcx
  void *v19; // rax
  size_t pcchRemaining[2]; // [rsp+30h] [rbp-38h] BYREF
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+78h] [rbp+10h] BYREF

  dwFlags = a6;
  v7 = pszDest;
  v8 = cbDest >> 1;
  v11 = 0;
  if ( (a6 & 0x100) != 0 )
  {
    if ( !pszDest && v8 || v8 > 0x7FFFFFFF )
      v11 = -2147024809;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -2147024809;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnd = pszDest;
    v12 = pszDest;
    pcchRemaining[0] = cbDest >> 1;
    if ( (a6 & 0x100) != 0 )
    {
      v19 = &unk_180162EC4;
      if ( cchOriginalDestLength )
        v19 = (void *)cchOriginalDestLength;
      cchOriginalDestLength = (size_t)v19;
    }
    v11 = 0;
    if ( (a6 & 0xFFFFE000) != 0 )
    {
      v11 = -2147024809;
      if ( v8 )
        *pszDest = 0;
    }
    else
    {
      if ( v8 )
      {
        v13 = cbDest >> 1;
        cchOriginalDestLength -= (unsigned __int64)pszDest;
        v14 = 0LL;
        do
        {
          if ( !(2147483646 - v8 + v13) )
            break;
          v15 = *(STRSAFE_LPWSTR)((char *)pszDest + cchOriginalDestLength);
          if ( !v15 )
            break;
          *pszDest = v15;
          ++v14;
          ++pszDest;
          --v13;
        }
        while ( v13 );
        v16 = pszDest - 1;
        if ( v13 )
          v16 = pszDest;
        v17 = v14 - 1;
        if ( v13 )
          v17 = v14;
        *v16 = 0;
        v12 = &v7[v17];
        ppszDestEnd = v12;
        v8 -= v17;
        pcchRemaining[0] = v8;
        v11 = v13 == 0 ? 0x8007007A : 0;
        if ( v13 )
        {
          if ( (dwFlags & 0x200) != 0 )
          {
            cchOriginalDestLength = (cbDest & 1) + 2 * v8;
            if ( cchOriginalDestLength > 2 )
              memset_0(v12 + 1, (unsigned __int8)dwFlags, cchOriginalDestLength - 2);
          }
        }
      }
      else
      {
        if ( !*(_WORD *)cchOriginalDestLength )
          goto LABEL_19;
        v11 = pszDest != 0LL ? -2147024774 : -2147024809;
      }
      if ( v11 >= 0 )
      {
LABEL_19:
        if ( a4 )
          *a4 = v12;
        if ( a5 )
          *a5 = (cbDest & 1) + 2 * v8;
        return (unsigned int)v11;
      }
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      StringExHandleOtherFlagsW(v7, cbDest, cchOriginalDestLength, &ppszDestEnd, pcchRemaining, dwFlags);
      v12 = ppszDestEnd;
      v8 = pcchRemaining[0];
    }
    if ( v11 == -2147024774 )
      goto LABEL_19;
  }
  return (unsigned int)v11;
}
