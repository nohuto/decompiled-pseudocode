/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00C03E0
 * Callers:
 *     NtGdiCreateOPMProtectedOutput @ 0x1C00C62A0 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00C63C0 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificate @ 0x1C00C6510 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00C6650 (NtGdiGetCertificateByHandle.c)
 *     NtGdiGetCertificateSize @ 0x1C00C6770 (NtGdiGetCertificateSize.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C00C67F0 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00C6970 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UpdateGraphicsDeviceList @ 0x1C0042224 (UpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00C03A0 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 __fastcall AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState(a1, a2, a3);
  v4 = result;
  if ( (int)result >= 0 )
  {
    UpdateGraphicsDeviceList(&v6);
    if ( v6 && gfSwitchInProgress )
    {
      v4 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit(v5);
      return (unsigned int)v4;
    }
    if ( gProtocolType )
      v4 = -1071774240;
    if ( v4 < 0 )
      goto LABEL_8;
    return 0LL;
  }
  return result;
}
