/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x140618AB0
 * Callers:
 *     SeQuerySigningPolicy @ 0x140618430 (SeQuerySigningPolicy.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x140084240 (AppModelPolicy_GetPolicy_Internal.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x140618D24 (SepIsNgenImage.c)
 *     SepIsLockedDown @ 0x1408D9E5C (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        PACCESS_TOKEN Token,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        _BYTE *a8)
{
  int Policy_Internal; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // edi
  unsigned __int8 v16; // cl
  void *v18; // r8
  __int64 v19; // rdx
  void *v20; // rcx
  unsigned __int8 v21; // al
  unsigned __int8 v22; // dl
  char v23; // cl
  unsigned __int8 v24; // dl
  NTSTATUS InformationToken; // eax
  __int64 v26; // rcx
  char v27[4]; // [rsp+30h] [rbp-20h] BYREF
  int TokenInformation; // [rsp+34h] [rbp-1Ch] BYREF
  _PS_PKG_CLAIM TokenInformation_4[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-8h] BYREF

  TokenInformation_4[0] = 0LL;
  TokenInformation_4[1] = 0LL;
  Policy_Internal = AppModelPolicy_GetPolicy_Internal(Token, a2, &TokenInformation, TokenInformation_4, &v30);
  v14 = (unsigned int)Policy_Internal;
  if ( Policy_Internal >= 0 )
  {
    v15 = TokenInformation;
    if ( (unsigned int)(TokenInformation - 3014657) <= 1 )
    {
      if ( (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 )
      {
        v18 = &Feature_LogErrorRecords_logged_traits;
        v19 = 17895887LL;
        v20 = &Feature_WCOSDeveloperMode__private_propertyCache;
      }
      else
      {
        v18 = &Feature_SchedulerAssistHRTimer_logged_traits;
        v19 = 15816256LL;
        v20 = &Feature_WldpDeveloperMode__private_propertyCache;
      }
      wil_details_FeaturePropertyCache_ReportUsageToService((__int64)v20, v19, (__int64)v18, 1u, 3);
      if ( v15 != 3014658 || (v13 = BYTE2(TokenInformation_4[0].Flags) - 4LL, v13 <= 1) )
      {
        if ( (a3 & 1) == 0 )
        {
          v16 = 6;
          if ( BYTE2(TokenInformation_4[0].Flags) > 6uLL )
            goto LABEL_9;
          if ( BYTE2(TokenInformation_4[0].Flags) <= 1u )
          {
            v16 = a5;
          }
          else
          {
            if ( BYTE2(TokenInformation_4[0].Flags) == 2 )
            {
              *a6 = 8;
              *a7 = a5;
              goto LABEL_8;
            }
            if ( BYTE2(TokenInformation_4[0].Flags) != 3 )
            {
              if ( BYTE2(TokenInformation_4[0].Flags) <= 5u )
              {
                v24 = a5 != 0 ? 3 : 0;
                *a6 = v24;
                *a7 = v24;
                goto LABEL_8;
              }
              if ( BYTE2(TokenInformation_4[0].Flags) != 6 )
                goto LABEL_9;
              v16 = a5 != 2 ? 0 : 2;
            }
          }
          *a6 = v16;
LABEL_7:
          *a7 = v16;
LABEL_8:
          *a8 = 0;
LABEL_9:
          LODWORD(v14) = 0;
          return (unsigned int)v14;
        }
        if ( !a4 )
        {
          v23 = 18;
          *a6 = 4;
          *a7 = 4;
          goto LABEL_34;
        }
      }
    }
    if ( a2 && (unsigned __int8)SepIsNgenImage(a2, v13, v14) )
    {
      TokenInformation = 0;
      InformationToken = SeQueryInformationToken(Token, TokenIsAppContainer, (PVOID *)&TokenInformation);
      LODWORD(v14) = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)v14;
      *a6 = 11;
      if ( (a3 & 1) == 0 )
      {
        LOBYTE(v26) = a5;
        if ( TokenInformation )
        {
          LODWORD(v14) = SepIsLockedDown(v26, v27, (unsigned int)InformationToken);
          if ( (int)v14 < 0 )
            return (unsigned int)v14;
          if ( v27[0] )
            v16 = 6;
          else
            v16 = a5 != 2 ? 0 : 2;
          goto LABEL_7;
        }
        *a7 = a5;
        v23 = a5 >= 2u ? 0x21 : 0;
LABEL_34:
        *a8 = v23;
        goto LABEL_9;
      }
      if ( !a4 )
      {
        *a7 = TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        goto LABEL_9;
      }
    }
    if ( (a3 & 1) != 0 )
    {
      v21 = a4;
      if ( !a4 )
        v21 = 18;
      *a8 = v21;
      *a6 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)v21 >> 4));
      v22 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)(unsigned __int8)*a8 >> 4) + 1);
      *a7 = v22;
      if ( a5 > *a6 )
      {
        *a6 = a5;
        v22 = *a7;
      }
      if ( a5 > v22 )
        *a7 = a5;
      goto LABEL_9;
    }
    v16 = a5;
    *a6 = a5;
    goto LABEL_7;
  }
  return (unsigned int)v14;
}
