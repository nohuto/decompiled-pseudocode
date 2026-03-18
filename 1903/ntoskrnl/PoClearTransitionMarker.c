/*
 * XREFs of PoClearTransitionMarker @ 0x140769D38
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     RtlComputeCrc32 @ 0x140114880 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x140182500 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlLockBootStatusData @ 0x140738E00 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140744DE0 (RtlUnlockBootStatusData.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140769F44 (PopRecordLongPowerButtonPressDetected.c)
 *     RtlpSystemBootStatusRequest @ 0x14076A018 (RtlpSystemBootStatusRequest.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14076A064 (RtlInitializeBootStatusDataBlackBox.c)
 */

_UNKNOWN **PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  ULONG v1; // eax
  _UNKNOWN **result; // rax
  char v3; // [rsp+38h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-11h] BYREF
  int v5; // [rsp+48h] [rbp-9h] BYREF
  __int128 *v6; // [rsp+50h] [rbp-1h]
  int v7; // [rsp+58h] [rbp+7h]
  int v8; // [rsp+60h] [rbp+Fh]
  __int128 *v9; // [rsp+68h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+78h] [rbp+27h]
  char *v12; // [rsp+80h] [rbp+2Fh]
  int v13; // [rsp+88h] [rbp+37h]

  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v5 = 7;
  v7 = 32;
  v6 = &PopBsdPowerTransition;
  v8 = 16;
  v0 = 2;
  v9 = &PopBsdPowerTransitionExtension;
  v10 = 32;
  if ( ExIsSoftBoot() )
  {
    v3 = 0;
    v12 = &v3;
    v0 = 3;
    v11 = 5;
    v13 = 1;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  memset(&PopBsdPowerTransition, 0, 0x20uLL);
  memset(&PopBsdPowerTransitionExtension, 0, 0x20uLL);
  BYTE8(PopBsdPowerTransition) = 1;
  BYTE1(PopBsdPowerTransitionExtension) &= 0xF3u;
  *((_DWORD *)&Buffer + 3) = MEMORY[0xFFFFF780000002C4];
  BYTE11(PopBsdPowerTransition) |= 0xC0u;
  dword_140438AAC = BYTE11(PopBsdPowerTransition) >> 6;
  *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
  v1 = RtlComputeCrc32(0, &Buffer, 8u);
  BYTE14(PopBsdPowerTransition) &= ~0x10u;
  *((_DWORD *)&Buffer + 2) = v1;
  RtlpSystemBootStatusRequest(32LL, &v5, v0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  PopRecordLongPowerButtonPressDetected(0LL);
  result = wil_details_FeaturePropertyCache_ReportUsageToService(
             (__int64)&Feature_PdttSupport__private_propertyCache,
             16157197LL,
             (__int64)&Feature_PdttSupport_logged_traits,
             0,
             3);
  PopAcpiPdttSupportEnabled = 0;
  return result;
}
