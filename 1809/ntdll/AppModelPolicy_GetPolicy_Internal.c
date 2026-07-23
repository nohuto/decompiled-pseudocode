/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x18007456C
 * Callers:
 *     LdrpInitializePolicy @ 0x180083408 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180074730 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _PS_PKG_CLAIM *a4,
        unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // r9d
  int v9; // r8d

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
          v9 = 5;
        }
        else if ( (*(_QWORD *)a4 & 0x400LL) != 0 )
        {
          v9 = 9;
        }
        else if ( (a4->Flags & 4) != 0 )
        {
          v9 = 2;
        }
        else if ( (a4->Flags & 8) != 0 )
        {
          v9 = 7;
        }
        else if ( (a4->Flags & 0x40) != 0 )
        {
          v9 = 8;
          if ( a2 == 1 )
            __fastfail(5u);
        }
        else
        {
          v9 = 1;
        }
      }
      else
      {
        v9 = 6;
      }
    }
    else
    {
      v9 = 3;
    }
    *a3 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table[9 * (a2 - 1) + v9 - 1];
  }
  return PackageClaims | 0x10000000u;
}
