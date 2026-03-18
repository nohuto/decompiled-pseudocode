/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14015D6FC
 * Callers:
 *     KiBugCheckProgress @ 0x140292320 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140292474 (KiDisplayBlueScreen.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E54 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406F3E88 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F5774 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406F5A30 (PiDevCfgBuildDriverConfigurationId.c)
 *     CmSetAcpiHwProfile @ 0x140730EF0 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x140731CD4 (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083ECF8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BC0 (PiCreateDriverSwDeviceCallback.c)
 *     PopDiagIdleSystemImageCallback @ 0x14086FB50 (PopDiagIdleSystemImageCallback.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14086FDDC (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     CmpCreateControlSet @ 0x1409C12B4 (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x1409C172C (CmpCreateHardwareProfiles.c)
 *     CmpAddAliasEntry @ 0x1409F3728 (CmpAddAliasEntry.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x14015D770 (RtlUnicodeStringValidateDestWorker.c)
 *     _vsnwprintf @ 0x140194C00 (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  int v3; // ebx
  int v4; // eax
  size_t v6; // [rsp+20h] [rbp-38h]
  ULONG v7; // [rsp+28h] [rbp-30h]
  size_t Count; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *Dest; // [rsp+38h] [rbp-20h] BYREF
  __int64 Args; // [rsp+70h] [rbp+18h] BYREF
  size_t *v12; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF
  va_list Argsa; // [rsp+70h] [rbp+18h]

  va_start(va1, pszFormat);
  va_start(Argsa, pszFormat);
  Args = va_arg(va1, _QWORD);
  v12 = va_arg(va1, size_t *);
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &Dest, &Count, v12, v6, v7);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = vsnwprintf(Dest, Count, pszFormat, Argsa);
    if ( v4 < 0 || v4 > Count )
    {
      LOWORD(v4) = Count;
      v3 = -2147483643;
    }
    DestinationString->Length = 2 * v4;
  }
  return v3;
}
