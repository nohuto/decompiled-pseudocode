/*
 * XREFs of KappxParsePackageFullNameFromToken @ 0x1C029BF70
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0045744 (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     memmove @ 0x1C0025100 (memmove.c)
 *     KappxParseString @ 0x1C029C09C (KappxParseString.c)
 *     KappxSafeSearch @ 0x1C029C128 (KappxSafeSearch.c)
 */

__int64 __fastcall KappxParsePackageFullNameFromToken(unsigned __int16 *a1)
{
  char *PoolWithTag; // rax
  char *v3; // r14
  char *v5; // r15
  unsigned __int16 v6; // si
  unsigned int v7; // ebp
  unsigned __int16 v8; // di
  int v9; // ebx

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *a1, 0x58707041u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
  v5 = v3;
  v6 = *a1 >> 1;
  v7 = 0;
  while ( 1 )
  {
    v8 = KappxSafeSearch(v5, v6, 95LL);
    if ( v8 == v6 && v7 != 4 )
    {
      v9 = -2147483643;
LABEL_14:
      ExFreePoolWithTag(v3, 0x58707041u);
      return (unsigned int)v9;
    }
    if ( !v7 )
      goto LABEL_12;
    if ( v7 != 1 && v7 != 2 )
      break;
    v9 = 0;
LABEL_13:
    ++v7;
    v6 += -1 - v8;
    v5 += 2 * v8 + 2;
    if ( v7 >= 5 )
      goto LABEL_14;
  }
  if ( v7 - 3 <= 1 )
  {
LABEL_12:
    v9 = KappxParseString(v5);
    if ( v9 < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}
