/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14015D81C
 * Callers:
 *     KiBugCheckProgress @ 0x140292610 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140292764 (KiDisplayBlueScreen.c)
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406F5108 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F69F4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406F6CB0 (PiDevCfgBuildDriverConfigurationId.c)
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x140732EA4 (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083FF38 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140841E00 (PiCreateDriverSwDeviceCallback.c)
 *     PopDiagIdleSystemImageCallback @ 0x140870D90 (PopDiagIdleSystemImageCallback.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14087101C (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     CmpCreateControlSet @ 0x1409C22B4 (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x1409C272C (CmpCreateHardwareProfiles.c)
 *     CmpAddAliasEntry @ 0x1409F4730 (CmpAddAliasEntry.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x14015D890 (RtlUnicodeStringValidateDestWorker.c)
 *     _vsnwprintf @ 0x140194D60 (_vsnwprintf.c)
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
