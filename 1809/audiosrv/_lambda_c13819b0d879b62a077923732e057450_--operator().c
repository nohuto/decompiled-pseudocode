/*
 * XREFs of _lambda_c13819b0d879b62a077923732e057450_::operator() @ 0x180067C78
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c13819b0d879b62a077923732e057450___::Run @ 0x1800685B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c13819b0d879b62a077923732e057450___--Run.c)
 * Callees:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x18001CF34 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18002D194 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18013A8FC (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 */

void __fastcall lambda_c13819b0d879b62a077923732e057450_::operator()(int **a1)
{
  int *v2; // rcx
  bool *v3; // rdx
  const WCHAR *v4; // r8
  int *v5; // rax
  char v6; // cl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a1;
  v3 = (bool *)a1[3];
  if ( *((_BYTE *)v2 + 184) )
  {
    *a1[2] = AtmosCheck::PerformLicenseCheckForAllEndpoints((AtmosCheck *)v2, v3);
    *((_BYTE *)*a1 + 74) = 1;
  }
  else
  {
    *a1[2] = AtmosCheck::PerformLicenseCheckInternalLegacy((AtmosCheck *)v2, v3);
    if ( *a1[2] >= 0 )
    {
      pvData = 0;
      v4 = L"AudioSrvLicenseResult";
      v5 = *a1;
      pcbData = 4;
      v6 = *((_BYTE *)v5 + 75);
      pvData = 0;
      if ( !v6 )
        v4 = L"AudioDGLicenseResult";
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
        v4,
        0x10u,
        0LL,
        &pvData,
        &pcbData);
      if ( pvData < 0 )
      {
        *a1[1] = pvData;
        a1[1][1] = pvData;
        a1[1][2] = pvData;
        a1[1][3] = pvData;
      }
      Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)(*a1 + 8), &lpCriticalSection);
      if ( (*a1)[38] == 7 )
        *((_BYTE *)*a1 + 74) = 1;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
}
