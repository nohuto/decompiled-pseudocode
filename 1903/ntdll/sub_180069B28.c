/*
 * XREFs of sub_180069B28 @ 0x180069B28
 * Callers:
 *     sub_18007ED94 @ 0x18007ED94 (sub_18007ED94.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180069D00 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall sub_180069B28(__int64 a1, int a2, _DWORD *a3, _PS_PKG_CLAIM *a4, unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // r8d
  _DWORD *v9; // rdx

  PackageClaims = RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    PackageClaims = 0;
    LOWORD(a4->Flags) = 0;
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
          v9 = &unk_1801218A0;
        }
        else if ( (*(_QWORD *)a4 & 0x400LL) != 0 )
        {
          v9 = &unk_1801218B0;
        }
        else if ( (*(_QWORD *)a4 & 0x800LL) != 0 )
        {
          v9 = &unk_1801218B4;
        }
        else if ( (a4->Flags & 4) != 0 )
        {
          v9 = &unk_180121894;
        }
        else if ( (a4->Flags & 8) != 0 )
        {
          v9 = &unk_1801218A8;
        }
        else if ( (a4->Flags & 0x40) != 0 )
        {
          v9 = &unk_1801218AC;
        }
        else
        {
          v9 = &unk_1801218B8;
          if ( (*(_QWORD *)a4 & 0x1000LL) == 0 )
            v9 = &unk_180121890;
        }
      }
      else
      {
        v9 = &unk_1801218A4;
      }
    }
    else
    {
      v9 = &unk_180121898;
    }
    *a3 = v9[11 * (a2 - 1)];
  }
  return (unsigned int)PackageClaims;
}
