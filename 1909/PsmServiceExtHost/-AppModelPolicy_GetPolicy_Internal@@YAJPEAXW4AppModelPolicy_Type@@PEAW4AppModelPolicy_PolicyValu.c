/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18003C508
 * Callers:
 *     ?HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z @ 0x18000F40C (-HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, _WORD *a4, _QWORD *a5)
{
  int PackageClaims; // ecx
  int v8; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    PackageClaims = 0;
    *a4 = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 2) == 0 || (*(_BYTE *)a5 & 4) != 0 )
      {
        v8 = 65538;
        goto LABEL_13;
      }
      if ( (*(_QWORD *)a4 & 0x400LL) == 0 )
      {
        if ( (*(_QWORD *)a4 & 0x800LL) != 0 )
          goto LABEL_12;
        if ( (*(_BYTE *)a4 & 4) == 0 && (*(_BYTE *)a4 & 8) == 0 )
        {
          v8 = 0x10000;
          if ( (*(_BYTE *)a4 & 0x40) != 0 )
          {
LABEL_13:
            *a3 = v8;
            return (unsigned int)PackageClaims;
          }
LABEL_12:
          v8 = 65537;
          goto LABEL_13;
        }
      }
    }
    v8 = 0x10000;
    goto LABEL_13;
  }
  return (unsigned int)PackageClaims;
}
