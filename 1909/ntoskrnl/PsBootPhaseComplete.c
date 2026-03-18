/*
 * XREFs of PsBootPhaseComplete @ 0x1407639C8
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140759428 (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140763C9C (RtlQueryImageFileExecutionOptions.c)
 *     PspQueryForwardersEnabled @ 0x140763D10 (PspQueryForwardersEnabled.c)
 *     PspIsDfssEnabled @ 0x140763D94 (PspIsDfssEnabled.c)
 */

__int64 PsBootPhaseComplete()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  _BOOL8 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // bl
  NTSTATUS v7; // eax
  HANDLE v8; // rcx
  unsigned int *v9; // rdi
  int v10; // edx
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  __int64 HostSilo; // rax
  _BYTE *ServerSiloGlobals; // rbx
  __int64 result; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v20[2]; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  __int128 KeyValueInformation; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v23[2]; // [rsp+C8h] [rbp-40h] BYREF
  const wchar_t *v24; // [rsp+D0h] [rbp-38h]
  _DWORD v25[4]; // [rsp+D8h] [rbp-30h] BYREF
  const wchar_t *v26; // [rsp+E8h] [rbp-20h]
  int v27; // [rsp+F0h] [rbp-18h]
  int v28; // [rsp+F8h] [rbp-10h]
  const wchar_t *v29; // [rsp+100h] [rbp-8h]
  int v30; // [rsp+108h] [rbp+0h]

  v18[0] = 8650882LL;
  KeyValueInformation = 0uLL;
  *(_QWORD *)&ValueName.Length = 1703960LL;
  v18[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\LsaInformation";
  ValueName.Buffer = L"UACInstalled";
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v20[0] = 9961622LL;
  v20[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
  v23[0] = 1310738;
  v24 = L"EnableLUA";
  v25[0] = 1;
  v26 = L"EnableVirtualization";
  v25[2] = 2752552;
  v29 = L"EnableInstallerDetection";
  v27 = 2;
  v28 = 3276848;
  v30 = 3;
  if ( (int)RtlQueryImageFileExecutionOptions(v0, L"DevOverrideEnable", v1, ResultLength) >= 0 )
  {
    v2 = ResultLength[0] != 0;
    PspGlobalFlags = v2 | PspGlobalFlags & 0xFFFFFFFE;
  }
  RtlQueryImageFileExecutionOptions(v2, L"MaxLoaderThreads", v3, &PsDefaultLoaderThreads);
  RtlQueryImageFileExecutionOptions(v4, L"NoRemoteThreadBeforeProcessInit", v5, &PsNoRemoteThreadBeforeProcessInit);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = 0;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           &ValueName,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x10u,
           &ResultLength[1]) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      v6 = HIDWORD(KeyValueInformation) != 0;
    }
    ObCloseHandle(KeyHandle, 0);
    KeyHandle = 0LL;
    if ( v6 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v20;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v8 = KeyHandle;
      v9 = v25;
      v10 = v7;
      v11 = 0;
      if ( v7 < 0 )
        v8 = 0LL;
      KeyHandle = v8;
      do
      {
        if ( v8 )
        {
          v12 = ZwQueryValueKey(
                  v8,
                  (PUNICODE_STRING)&v23[6 * v11],
                  KeyValuePartialInformation,
                  &KeyValueInformation,
                  0x10u,
                  &ResultLength[1]);
          v8 = KeyHandle;
          v10 = v12;
        }
        if ( v10 < 0 || HIDWORD(KeyValueInformation) || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
        {
          _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, *v9);
          v8 = KeyHandle;
        }
        ++v11;
        v9 += 6;
      }
      while ( v11 < 3 );
      if ( v8 )
        ObCloseHandle(v8, 0);
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
