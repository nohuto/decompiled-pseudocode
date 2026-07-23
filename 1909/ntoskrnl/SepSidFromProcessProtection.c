/*
 * XREFs of SepSidFromProcessProtection @ 0x14000CBAC
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14000C980 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14000CB30 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepSetTrustLevelForProcessToken @ 0x140085D08 (SepSetTrustLevelForProcessToken.c)
 * Callees:
 *     <none>
 */

PSID __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *a1 )
  {
    case 0x12:
      return (PSID)SeProcTrustAuthenticodeSid;
    case 0x31:
      return (PSID)SeProcTrustLiteAntimalwareSid;
    case 0x51:
      return (PSID)SeProcTrustLiteWinSid;
    case 0x52:
      return (PSID)SeProcTrustWinSid;
    case 0x61:
      return (PSID)SeProcTrustLiteWinTcbSid;
    case 0x62:
    case 0x72:
      return SeProcTrustWinTcbSid;
  }
  if ( (unsigned __int8)*a1 == 129 )
    return (PSID)SeProcTrustLiteAppSid;
  return (PSID)v1;
}
