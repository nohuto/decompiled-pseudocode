/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x14060B60C
 * Callers:
 *     SeQuerySigningPolicy @ 0x14060E5D0 (SeQuerySigningPolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1400A54D0 (RtlQueryPackageClaims.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400F2A84 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     SepIsNgenImage @ 0x14060B55C (SepIsNgenImage.c)
 *     PsQueryProcessAttributesByToken @ 0x140626980 (PsQueryProcessAttributesByToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     SepIsLockedDown @ 0x14089C93C (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        PACCESS_TOKEN Token,
        unsigned __int16 *a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  char v12; // di
  unsigned __int8 v13; // cl
  __int64 v14; // rcx
  int v16; // r8d
  unsigned __int8 v17; // al
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // dl
  NTSTATUS InformationToken; // eax
  char v21[8]; // [rsp+40h] [rbp-10h] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+48h] [rbp-8h] BYREF

  PkgClaim = 0LL;
  PsQueryProcessAttributesByToken(Token, 0LL, v21);
  v12 = v21[0];
  if ( v21[0] )
  {
    LODWORD(v14) = RtlQueryPackageClaims(Token, 0LL, 0LL, 0LL, 0LL, 0LL, &PkgClaim, 0LL);
    if ( (int)v14 < 0 )
      return (unsigned int)v14;
    if ( (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_WCOSDeveloperMode__private_propertyCache,
        11165540LL,
        (__int64)&Feature_PowerButtonBugcheck_logged_traits,
        0,
        3);
      v16 = 0;
    }
    else
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_WldpDeveloperMode__private_propertyCache,
        15816256LL,
        (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
        1u,
        3);
      v16 = 1;
    }
    if ( (PkgClaim.Flags & 4) != 0 && (!v16 || (unsigned __int64)BYTE2(PkgClaim.Flags) - 4 > 1) )
      v12 = 0;
    if ( v12 )
    {
      if ( (a3 & 1) == 0 )
      {
        v13 = 6;
        if ( BYTE2(PkgClaim.Flags) > 6uLL )
          goto LABEL_8;
        if ( BYTE2(PkgClaim.Flags) <= 1u )
        {
          v13 = a5;
        }
        else
        {
          if ( BYTE2(PkgClaim.Flags) == 2 )
          {
            *a6 = 8;
            *a7 = a5;
            goto LABEL_7;
          }
          if ( BYTE2(PkgClaim.Flags) != 3 )
          {
            if ( BYTE2(PkgClaim.Flags) <= 5u )
            {
              if ( v16 )
              {
                v19 = a5 != 0 ? 3 : 0;
                *a6 = v19;
                *a7 = v19;
                goto LABEL_7;
              }
            }
            else if ( BYTE2(PkgClaim.Flags) != 6 )
            {
              goto LABEL_8;
            }
            v13 = a5 != 2 ? 0 : 2;
          }
        }
        *a6 = v13;
        goto LABEL_6;
      }
      if ( !a4 )
      {
        *a6 = 4;
        *a7 = 4;
        *a8 = 18;
        goto LABEL_8;
      }
    }
  }
  if ( a2 && SepIsNgenImage(a2) )
  {
    PkgClaim.Flags = 0;
    InformationToken = SeQueryInformationToken(Token, TokenIsAppContainer, (PVOID *)&PkgClaim);
    v14 = (unsigned int)InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)v14;
    *a6 = 11;
    if ( (a3 & 1) == 0 )
    {
      LOBYTE(v14) = a5;
      if ( !PkgClaim.Flags )
      {
        *a7 = a5;
        *a8 = a5 >= 2u ? 0x21 : 0;
        goto LABEL_8;
      }
      LODWORD(v14) = SepIsLockedDown(v14, v21);
      if ( (int)v14 < 0 )
        return (unsigned int)v14;
      if ( v21[0] )
        v13 = 6;
      else
        v13 = a5 != 2 ? 0 : 2;
      goto LABEL_6;
    }
    if ( !a4 )
    {
      *a7 = PkgClaim.Flags != 0 ? 6 : 8;
      *a8 = 33;
      goto LABEL_8;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    v17 = a4;
    if ( !a4 )
      v17 = 18;
    *a8 = v17;
    *a6 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)v17 >> 4));
    v18 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)*a8 >> 4) + 1);
    *a7 = v18;
    if ( a5 > *a6 )
    {
      *a6 = a5;
      v18 = *a7;
    }
    if ( a5 > v18 )
      *a7 = a5;
    goto LABEL_8;
  }
  v13 = a5;
  *a6 = a5;
LABEL_6:
  *a7 = v13;
LABEL_7:
  *a8 = 0;
LABEL_8:
  LODWORD(v14) = 0;
  return (unsigned int)v14;
}
