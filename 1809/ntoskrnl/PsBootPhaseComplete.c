/*
 * XREFs of PsBootPhaseComplete @ 0x140734C1C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140734ED4 (RtlQueryImageFileExecutionOptions.c)
 *     PspQueryForwardersEnabled @ 0x140734F48 (PspQueryForwardersEnabled.c)
 *     PspIsDfssEnabled @ 0x140734FD0 (PspIsDfssEnabled.c)
 */

__int64 __fastcall PsBootPhaseComplete(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r8
  bool v7; // bl
  NTSTATUS v8; // eax
  HANDLE v9; // rcx
  unsigned int *v10; // rdi
  int v11; // edx
  unsigned int v12; // ebx
  NTSTATUS v13; // eax
  __int64 HostSilo; // rax
  _BYTE *ServerSiloGlobals; // rbx
  __int64 result; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[2]; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v25; // [rsp+BCh] [rbp-4Ch]
  int v26; // [rsp+C0h] [rbp-48h]
  int v27; // [rsp+C4h] [rbp-44h]
  _DWORD v28[2]; // [rsp+C8h] [rbp-40h] BYREF
  const wchar_t *v29; // [rsp+D0h] [rbp-38h]
  _DWORD v30[4]; // [rsp+D8h] [rbp-30h] BYREF
  const wchar_t *v31; // [rsp+E8h] [rbp-20h]
  int v32; // [rsp+F0h] [rbp-18h]
  int v33; // [rsp+F8h] [rbp-10h]
  const wchar_t *v34; // [rsp+100h] [rbp-8h]
  int v35; // [rsp+108h] [rbp+0h]

  LODWORD(v20[0]) = 8650882;
  v20[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\LsaInformation";
  *(_DWORD *)&ValueName.Length = 1703960;
  ValueName.Buffer = L"UACInstalled";
  LODWORD(v22[0]) = 9961622;
  v22[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
  v28[0] = 1310738;
  v29 = L"EnableLUA";
  v31 = L"EnableVirtualization";
  v34 = L"EnableInstallerDetection";
  v30[0] = 1;
  v30[2] = 2752552;
  v32 = 2;
  v33 = 3276848;
  v35 = 3;
  if ( (int)RtlQueryImageFileExecutionOptions(a1, L"DevOverrideEnable", a3, &v18) >= 0 )
  {
    v3 = v18 != 0;
    PspGlobalFlags = v3 | PspGlobalFlags & 0xFFFFFFFE;
  }
  RtlQueryImageFileExecutionOptions(v3, L"MaxLoaderThreads", v4, &PsDefaultLoaderThreads);
  RtlQueryImageFileExecutionOptions(v5, L"NoRemoteThreadBeforeProcessInit", v6, &PsNoRemoteThreadBeforeProcessInit);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v20;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = 0;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
      && v25 == 4
      && v26 == 4 )
    {
      v7 = v27 != 0;
    }
    ObCloseHandle(KeyHandle, 0);
    KeyHandle = 0LL;
    if ( v7 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v9 = KeyHandle;
      v10 = v30;
      v11 = v8;
      v12 = 0;
      if ( v8 < 0 )
        v9 = 0LL;
      KeyHandle = v9;
      do
      {
        if ( v9 )
        {
          v13 = ZwQueryValueKey(
                  v9,
                  (PUNICODE_STRING)&v28[6 * v12],
                  KeyValuePartialInformation,
                  KeyValueInformation,
                  0x10u,
                  &ResultLength);
          v9 = KeyHandle;
          v11 = v13;
        }
        if ( v11 < 0 || v27 || v25 != 4 || v26 != 4 )
        {
          _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, *v10);
          v9 = KeyHandle;
        }
        ++v12;
        v10 += 6;
      }
      while ( v12 < 3 );
      if ( v9 )
        ObCloseHandle(v9, 0);
    }
  }
  PsCpuFairShareEnabled = PspIsDfssEnabled();
  HostSilo = PsGetHostSilo();
  ServerSiloGlobals = PsGetServerSiloGlobals(HostSilo);
  ServerSiloGlobals[1040] = PspQueryForwardersEnabled();
  result = PspGlobalFlags & 0xFFFFFFF3 | 4;
  PspGlobalFlags = PspGlobalFlags & 0xFFFFFFF3 | 4;
  return result;
}
