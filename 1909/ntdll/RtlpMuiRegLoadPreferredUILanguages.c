/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x180008C14
 * Callers:
 *     InitializeUserOrMachineLangList @ 0x180007D24 (InitializeUserOrMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800151CC (RtlpSetProcUserMachineLangList.c)
 * Callees:
 *     RtlpLoadMachineUIByPolicy @ 0x180007950 (RtlpLoadMachineUIByPolicy.c)
 *     LdrpQueryValueKey @ 0x1800090D4 (LdrpQueryValueKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x180009204 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadUserUIByPolicy @ 0x180009270 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18001564C (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015FD0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800FD1B0 (RtlpHasMachineUILock.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        _QWORD *a6)
{
  _BYTE *v6; // rdi
  BOOL v8; // r15d
  PVOID v10; // r12
  HANDLE v11; // rcx
  int v12; // ebx
  const WCHAR *v13; // rdx
  int v14; // ecx
  PVOID Heap; // rsi
  int v17; // eax
  __int64 v18; // r8
  __int64 LanguageList; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h]
  _DWORD v21[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE v22; // [rsp+58h] [rbp-A8h]
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v24; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING ValueName; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES v28; // [rsp+C0h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES v29; // [rsp+F0h] [rbp-10h] BYREF
  _OBJECT_ATTRIBUTES v30; // [rsp+120h] [rbp+20h] BYREF
  __int64 v31; // [rsp+190h] [rbp+90h] BYREF
  int v32; // [rsp+198h] [rbp+98h]
  int v33; // [rsp+1A0h] [rbp+A0h]

  v32 = a2;
  v6 = a5;
  v22 = 0LL;
  *(_QWORD *)&v21[1] = 0LL;
  v8 = a3;
  KeyHandle = 0LL;
  v33 = 7;
  v10 = 0LL;
  LODWORD(v31) = 0;
  LanguageList = 0LL;
  LOBYTE(v32) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    v12 = -1073741811;
LABEL_37:
    if ( v12 )
    {
LABEL_22:
      if ( v10 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      goto LABEL_24;
    }
LABEL_17:
    Heap = 0LL;
    if ( v8 || LanguageList && *(_WORD *)(LanguageList + 4) )
    {
LABEL_18:
      if ( !LanguageList )
      {
        LOBYTE(a2) = !v8;
        LanguageList = RtlpMuiRegCreateLanguageList(1LL, a2, a1);
        if ( !LanguageList )
          v12 = -1073741801;
      }
      goto LABEL_21;
    }
    v12 = 0;
    v20 = 7;
    v24 = 0LL;
    v21[0] = 0;
    if ( a1 && v6 )
    {
      RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v30.Length = 48;
      v30.ObjectName = &ValueName;
      v30.RootDirectory = 0LL;
      v30.Attributes = 64;
      *(_OWORD *)&v30.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&v24, 0x20019u, &v30) < 0 )
        goto LABEL_47;
      RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
      v17 = LdrpQueryValueKey(v24, &ValueName, (__int64)v21);
      a2 = 3221225524LL;
      if ( v17 == -1073741772 || !v21[0] )
        goto LABEL_47;
      if ( v17 == -2147483643 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v21[0] + 2));
        if ( !Heap )
        {
          v12 = -1073741801;
          goto LABEL_48;
        }
        v12 = LdrpQueryValueKey(v24, &ValueName, (__int64)v21);
        if ( v12 >= 0 )
        {
          if ( v20 != 7 && v20 != 1 )
          {
            v12 = 0;
LABEL_47:
            *v6 = 1;
            goto LABEL_48;
          }
          v18 = v21[0] >> 1;
          *v6 = 0;
          v12 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, Heap, v18, 8LL, 3, 1, &LanguageList);
        }
      }
      else
      {
        v12 = -1073741772;
      }
    }
    else
    {
      v12 = -1073741811;
    }
LABEL_48:
    if ( v24 )
      NtClose(v24);
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v12 )
      goto LABEL_21;
    goto LABEL_18;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v12 = RtlpLoadMachineUIByPolicy(KeyHandle, a1, &LanguageList);
    if ( !v12 && LanguageList )
      goto LABEL_17;
    v11 = KeyHandle;
  }
  else
  {
    v11 = 0LL;
    KeyHandle = 0LL;
  }
  if ( v8 && v11 && (int)RtlpHasMachineUILock(v11) >= 0 )
    v8 = (_BYTE)v32 != 1;
  v12 = OpenGlobalizationUserSettingsKey(0x2000000u);
  if ( v12 < 0 )
  {
LABEL_60:
    *v6 = 1;
    goto LABEL_37;
  }
  if ( v8 )
  {
    v12 = RtlpLoadUserUIByPolicy(v22, a1, &LanguageList);
    if ( !v12 && LanguageList )
    {
LABEL_21:
      *a6 = LanguageList;
      goto LABEL_22;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v28.RootDirectory = v22;
    v28.Length = 48;
    v28.ObjectName = &DestinationString;
    v28.Attributes = 64;
    *(_OWORD *)&v28.SecurityDescriptor = 0LL;
    v12 = NtOpenKey((PHANDLE)&v21[1], 0x20019u, &v28);
    if ( v12 >= 0 )
    {
      v13 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v13 = L"PreferredUILanguagesPending";
      goto LABEL_15;
    }
    goto LABEL_60;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v29.RootDirectory = v22;
  v29.Length = 48;
  v29.ObjectName = &DestinationString;
  v29.Attributes = 64;
  *(_OWORD *)&v29.SecurityDescriptor = 0LL;
  if ( NtOpenKey((PHANDLE)&v21[1], 0x20019u, &v29) < 0 )
    goto LABEL_16;
  v13 = L"MachinePreferredUILanguages";
LABEL_15:
  RtlInitUnicodeString(&DestinationString, v13);
  v12 = -1073741772;
  v14 = LdrpQueryValueKey(*(HANDLE *)&v21[1], &DestinationString, (__int64)&v31);
  if ( v14 == -1073741772 || !(_DWORD)v31 )
    goto LABEL_16;
  if ( v14 == -2147483643 )
  {
    v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v31 + 2));
    if ( v10 )
    {
      v12 = LdrpQueryValueKey(*(HANDLE *)&v21[1], &DestinationString, (__int64)&v31);
      if ( v12 < 0 )
        goto LABEL_37;
      if ( v33 == 7 || v33 == 1 )
      {
        v12 = RtlpMuiRegAddMultiSzToLangFallbackList(
                a1,
                v10,
                (unsigned int)v31 >> 1,
                8LL,
                (unsigned int)!v8 + 2,
                1,
                &LanguageList);
        goto LABEL_37;
      }
LABEL_16:
      v12 = 0;
      *v6 = 1;
      goto LABEL_17;
    }
    v12 = -1073741801;
  }
LABEL_24:
  if ( *(_QWORD *)&v21[1] )
  {
    NtClose(*(HANDLE *)&v21[1]);
    *(_QWORD *)&v21[1] = 0LL;
  }
  if ( v22 )
  {
    NtClose(v22);
    v22 = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v12;
}
