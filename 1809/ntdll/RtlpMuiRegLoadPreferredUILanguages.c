/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14
 * Callers:
 *     InitializeUserOrMachineLangList @ 0x180039F7C (InitializeUserOrMachineLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x18003C1E4 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18003C454 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003FB5C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x18004C2EC (LdrpQueryValueKey.c)
 *     CloseGlobalizationUserSettingsKey @ 0x18004C41C (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004C444 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadUserUIByPolicy @ 0x18004C4C0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18004CAB0 (RtlpLoadMachineUIByPolicy.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800FF8CC (RtlpHasMachineUILock.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        _QWORD *a6)
{
  _BYTE *v6; // rdi
  BOOL v8; // r15d
  const WCHAR *v10; // r12
  int v11; // r8d
  int v12; // r9d
  HANDLE v13; // rcx
  int v14; // ebx
  const WCHAR *v15; // rdx
  int v16; // ecx
  const WCHAR *Heap; // rsi
  int v19; // ecx
  int v20; // r8d
  __int64 LanguageList; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v27; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v29; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]
  UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  __int128 v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+120h] [rbp+20h] BYREF
  __int64 v46; // [rsp+128h] [rbp+28h]
  UNICODE_STRING *v47; // [rsp+130h] [rbp+30h]
  int v48; // [rsp+138h] [rbp+38h]
  __int128 v49; // [rsp+140h] [rbp+40h]
  unsigned int v50; // [rsp+190h] [rbp+90h] BYREF
  int v51; // [rsp+198h] [rbp+98h] BYREF
  int v52; // [rsp+1A0h] [rbp+A0h] BYREF

  v51 = a2;
  v6 = a5;
  v26 = 0LL;
  Handle = 0LL;
  v8 = a3;
  v25 = 0LL;
  v52 = 7;
  v10 = 0LL;
  v50 = 0;
  LanguageList = 0LL;
  LOBYTE(v51) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    v14 = -1073741811;
LABEL_53:
    if ( v14 )
    {
LABEL_23:
      if ( v10 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
      goto LABEL_25;
    }
LABEL_18:
    Heap = 0LL;
    if ( v8 || LanguageList && *(_WORD *)(LanguageList + 4) )
    {
LABEL_19:
      if ( !LanguageList )
      {
        LanguageList = RtlpMuiRegCreateLanguageList(1, !v8, a1);
        if ( !LanguageList )
          v14 = -1073741801;
      }
      goto LABEL_22;
    }
    v14 = 0;
    v22 = 7;
    v27 = 0LL;
    v23 = 0;
    if ( a1 && v6 )
    {
      RtlInitUnicodeString(&v29, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v27 = 0LL;
      v47 = &v29;
      v45 = 48;
      v46 = 0LL;
      v48 = 64;
      v49 = 0LL;
      if ( (int)NtOpenKey(&v27, 131097LL, &v45) < 0 )
        goto LABEL_40;
      RtlInitUnicodeString(&v29, L"PreferredUILanguages");
      v19 = LdrpQueryValueKey(v27, &v29, &v22, 0LL, &v23);
      if ( v19 == -1073741772 || !v23 )
        goto LABEL_40;
      if ( v19 == -2147483643 )
      {
        Heap = (const WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v23 + 2);
        if ( !Heap )
        {
          v14 = -1073741801;
          goto LABEL_41;
        }
        v14 = LdrpQueryValueKey(v27, &v29, &v22, Heap, &v23);
        if ( v14 >= 0 )
        {
          if ( v22 != 7 && v22 != 1 )
          {
            v14 = 0;
LABEL_40:
            *v6 = 1;
            goto LABEL_41;
          }
          v20 = v23 >> 1;
          *v6 = 0;
          v14 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, Heap, v20, 8, 3, 1u, &LanguageList);
        }
      }
      else
      {
        v14 = -1073741772;
      }
    }
    else
    {
      v14 = -1073741811;
    }
LABEL_41:
    if ( v27 )
      NtClose(v27);
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    if ( v14 )
      goto LABEL_22;
    goto LABEL_19;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v25 = 0LL;
  p_DestinationString = &DestinationString;
  v30 = 48;
  v31 = 0LL;
  v33 = 64;
  v34 = 0LL;
  if ( (int)NtOpenKey(&v25, 131097LL, &v30) >= 0 )
  {
    v14 = RtlpLoadMachineUIByPolicy(v25, a1, &LanguageList);
    if ( !v14 && LanguageList )
      goto LABEL_18;
    v13 = v25;
  }
  else
  {
    v13 = 0LL;
    v25 = 0LL;
  }
  if ( v8 && v13 && (int)RtlpHasMachineUILock(v13, &v51) >= 0 )
    v8 = (_BYTE)v51 != 1;
  v14 = OpenGlobalizationUserSettingsKey(0x2000000, 0, v11, v12, (__int64)&v26);
  if ( v14 < 0 )
  {
LABEL_55:
    *v6 = 1;
    goto LABEL_53;
  }
  if ( v8 )
  {
    v14 = RtlpLoadUserUIByPolicy(v26, a1, &LanguageList);
    if ( !v14 )
    {
      if ( LanguageList )
      {
LABEL_22:
        *a6 = LanguageList;
        goto LABEL_23;
      }
    }
  }
  Handle = 0LL;
  if ( v8 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v36 = v26;
    v35 = 48;
    v37 = &DestinationString;
    v38 = 64;
    v39 = 0LL;
    v14 = NtOpenKey(&Handle, 131097LL, &v35);
    if ( v14 >= 0 )
    {
      v15 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v15 = L"PreferredUILanguagesPending";
      goto LABEL_16;
    }
    goto LABEL_55;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v41 = v26;
  v40 = 48;
  v42 = &DestinationString;
  v43 = 64;
  v44 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v40) < 0 )
    goto LABEL_17;
  v15 = L"MachinePreferredUILanguages";
LABEL_16:
  RtlInitUnicodeString(&DestinationString, v15);
  v14 = -1073741772;
  v16 = LdrpQueryValueKey(Handle, &DestinationString, &v52, 0LL, &v50);
  if ( v16 == -1073741772 || !v50 )
    goto LABEL_17;
  if ( v16 == -2147483643 )
  {
    v10 = (const WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v50 + 2);
    if ( v10 )
    {
      v14 = LdrpQueryValueKey(Handle, &DestinationString, &v52, v10, &v50);
      if ( v14 < 0 )
        goto LABEL_53;
      if ( v52 == 7 || v52 == 1 )
      {
        v14 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v10, v50 >> 1, 8, (unsigned int)!v8 + 2, 1u, &LanguageList);
        goto LABEL_53;
      }
LABEL_17:
      v14 = 0;
      *v6 = 1;
      goto LABEL_18;
    }
    v14 = -1073741801;
  }
LABEL_25:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v26 )
  {
    CloseGlobalizationUserSettingsKey(v26);
    v26 = 0LL;
  }
  if ( v25 )
    NtClose(v25);
  return (unsigned int)v14;
}
