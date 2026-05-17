/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x180069D78
 * Callers:
 *     LdrpInitializePolicy @ 0x18007F434 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180069F50 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  int PackageClaims; // r8d
  _DWORD *v9; // rdx

  PackageClaims = RtlQueryPackageClaims(-4, 0, 0, 0, 0LL, 0LL, (__int64)a4, (__int64)a5);
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
      if ( (*(_BYTE *)a5 & 2) != 0 )
      {
        if ( (*(_BYTE *)a5 & 4) != 0 )
        {
          v9 = &unk_1801219C0;
        }
        else if ( (*(_QWORD *)a4 & 0x400LL) != 0 )
        {
          v9 = &unk_1801219D0;
        }
        else if ( (*(_QWORD *)a4 & 0x800LL) != 0 )
        {
          v9 = &unk_1801219D4;
        }
        else if ( (*(_BYTE *)a4 & 4) != 0 )
        {
          v9 = &unk_1801219B4;
        }
        else if ( (*(_BYTE *)a4 & 8) != 0 )
        {
          v9 = &unk_1801219C8;
        }
        else if ( (*(_BYTE *)a4 & 0x40) != 0 )
        {
          v9 = &unk_1801219CC;
        }
        else
        {
          v9 = &unk_1801219D8;
          if ( (*(_QWORD *)a4 & 0x1000LL) == 0 )
            v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
        }
      }
      else
      {
        v9 = &unk_1801219C4;
      }
    }
    else
    {
      v9 = &unk_1801219B8;
    }
    *a3 = v9[11 * (a2 - 1)];
  }
  return (unsigned int)PackageClaims;
}
