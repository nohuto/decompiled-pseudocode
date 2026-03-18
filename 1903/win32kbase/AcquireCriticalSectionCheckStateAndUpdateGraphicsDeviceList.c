/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A5640
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00B2240 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00B3720 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C0126910 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C0126BA0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C0126D00 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UpdateGraphicsDeviceList @ 0x1C004F09C (UpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00A56A0 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  __int64 v1; // rdx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v2 = result;
  if ( (int)result >= 0 )
  {
    UpdateGraphicsDeviceList(&v5, v1);
    if ( v5 && gfSwitchInProgress )
    {
      v2 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit(v4, v3);
      return (unsigned int)v2;
    }
    if ( gProtocolType )
      v2 = -1071774240;
    if ( v2 < 0 )
      goto LABEL_8;
    return 0LL;
  }
  return result;
}
