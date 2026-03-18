/*
 * XREFs of NtGdiGetCertificateSize @ 0x1C00C6770
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00C03E0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C00C4D30 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C00C5A64 (GetCertificateLengthAndMonitorPDO.c)
 */

__int64 __fastcall NtGdiGetCertificateSize(struct _UNICODE_STRING *a1, __int64 a2, _DWORD *a3)
{
  int v4; // edi
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int CertificateLengthAndMonitorPDO; // edi
  int v10; // [rsp+48h] [rbp+20h] BYREF

  v4 = a2;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList((__int64)a1, a2, (__int64)a3);
  v7 = 0;
  if ( (int)result >= 0 )
  {
    CertificateLengthAndMonitorPDO = GetCertificateLengthAndMonitorPDO(a1, v4, &v10, 0LL);
    if ( CertificateLengthAndMonitorPDO >= 0 )
      CertificateLengthAndMonitorPDO = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v10);
    UserSessionSwitchLeaveCrit(v8);
    if ( CertificateLengthAndMonitorPDO < 0 )
      return (unsigned int)CertificateLengthAndMonitorPDO;
    return v7;
  }
  return result;
}
