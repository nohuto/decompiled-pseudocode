/*
 * XREFs of NtGdiGetCertificateSize @ 0x1C0126D00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A5640 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C00B15BC (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C01266D0 (GetCertificateLengthAndMonitorPDO.c)
 */

__int64 __fastcall NtGdiGetCertificateSize(struct _UNICODE_STRING *a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int CertificateLengthAndMonitorPDO; // edi
  int v11; // [rsp+48h] [rbp+20h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v7 = 0;
  if ( (int)result >= 0 )
  {
    CertificateLengthAndMonitorPDO = GetCertificateLengthAndMonitorPDO(a1, a2, &v11, 0LL);
    if ( CertificateLengthAndMonitorPDO >= 0 )
      CertificateLengthAndMonitorPDO = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v11);
    UserSessionSwitchLeaveCrit(v9, v8);
    if ( CertificateLengthAndMonitorPDO < 0 )
      return (unsigned int)CertificateLengthAndMonitorPDO;
    return v7;
  }
  return result;
}
