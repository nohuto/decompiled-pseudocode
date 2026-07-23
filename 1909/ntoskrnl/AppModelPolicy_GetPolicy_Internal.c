/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x140084640
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14061A5C0 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140084770 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(
        void *a1,
        __int64 a2,
        int *a3,
        _PS_PKG_CLAIM *a4,
        unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // edx
  unsigned __int64 v8; // rax
  int v9; // eax
  _PS_PKG_CLAIM v11; // rcx

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    PackageClaims = 0;
    LOWORD(a4->Flags) = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    v8 = *a5;
    if ( (*a5 & 1) != 0 && (v8 & 2) != 0 )
    {
      if ( (v8 & 4) != 0 || (v11 = *a4, (*(_QWORD *)a4 & 0x400LL) != 0) || (v11.Flags & 0x800) != 0 )
      {
LABEL_17:
        v9 = 3014657;
        goto LABEL_6;
      }
      if ( (v11.Flags & 4) == 0 )
      {
        if ( (v11.Flags & 8) == 0 )
        {
          v9 = 3014656;
          if ( (v11.Flags & 0x40) == 0 )
            v9 = ((*(_QWORD *)a4 & 0x1000LL) == 0) | 0x2E0000;
          goto LABEL_6;
        }
        goto LABEL_17;
      }
      v9 = 3014658;
    }
    else
    {
      v9 = 3014656;
    }
LABEL_6:
    *a3 = v9;
  }
  return (unsigned int)PackageClaims;
}
