/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0091010
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00A1410 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00A25E0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C00FA480 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C00FA700 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00FA860 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UpdateGraphicsDeviceList @ 0x1C0016194 (UpdateGraphicsDeviceList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0091070 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  int v1; // ebx
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v1 = result;
  if ( (int)result >= 0 )
  {
    UpdateGraphicsDeviceList(&v2);
    if ( v2 && LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
    {
      v1 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit();
      return (unsigned int)v1;
    }
    if ( gProtocolType )
      v1 = -1071774240;
    if ( v1 < 0 )
      goto LABEL_8;
    return 0LL;
  }
  return result;
}
