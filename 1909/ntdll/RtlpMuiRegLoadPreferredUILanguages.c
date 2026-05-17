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
  __int64 v10; // r12
  HANDLE v11; // rcx
  int v12; // ebx
  const WCHAR *v13; // rdx
  int v14; // ecx
  __int64 Heap; // rsi
  int v17; // eax
  __int64 v18; // r8
  __int64 LanguageList; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v24; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v25; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v27; // [rsp+80h] [rbp-80h] BYREF
  int v28; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h]
  UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  __int128 v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE v34; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  __int128 v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+F0h] [rbp-10h] BYREF
  HANDLE v39; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING *v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  __int128 v42; // [rsp+110h] [rbp+10h]
  int v43; // [rsp+120h] [rbp+20h] BYREF
  __int64 v44; // [rsp+128h] [rbp+28h]
  UNICODE_STRING *v45; // [rsp+130h] [rbp+30h]
  int v46; // [rsp+138h] [rbp+38h]
  __int128 v47; // [rsp+140h] [rbp+40h]
  unsigned int v48; // [rsp+190h] [rbp+90h] BYREF
  int v49; // [rsp+198h] [rbp+98h] BYREF
  int v50; // [rsp+1A0h] [rbp+A0h] BYREF

  v49 = a2;
  v6 = a5;
  v23 = 0LL;
  Handle = 0LL;
  v8 = a3;
  v24 = 0LL;
  v50 = 7;
  v10 = 0LL;
  v48 = 0;
  LanguageList = 0LL;
  LOBYTE(v49) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    v12 = -1073741811;
LABEL_37:
    if ( v12 )
    {
LABEL_22:
      if ( v10 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
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
    v25 = 0LL;
    v21 = 0;
    if ( a1 && v6 )
    {
      RtlInitUnicodeString(&v27, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v43 = 48;
      v45 = &v27;
      v44 = 0LL;
      v46 = 64;
      v47 = 0LL;
      if ( (int)NtOpenKey(&v25, 131097LL, &v43) < 0 )
        goto LABEL_47;
      RtlInitUnicodeString(&v27, L"PreferredUILanguages");
      v17 = LdrpQueryValueKey(v25, &v27, &v20, 0LL, &v21);
      a2 = 3221225524LL;
      if ( v17 == -1073741772 || !v21 )
        goto LABEL_47;
      if ( v17 == -2147483643 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v21 + 2);
        if ( !Heap )
        {
          v12 = -1073741801;
          goto LABEL_48;
        }
        v12 = LdrpQueryValueKey(v25, &v27, &v20, Heap, &v21);
        if ( v12 >= 0 )
        {
          if ( v20 != 7 && v20 != 1 )
          {
            v12 = 0;
LABEL_47:
            *v6 = 1;
            goto LABEL_48;
          }
          v18 = v21 >> 1;
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
    if ( v25 )
      NtClose(v25);
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    if ( v12 )
      goto LABEL_21;
    goto LABEL_18;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v28 = 48;
  p_DestinationString = &DestinationString;
  v29 = 0LL;
  v31 = 64;
  v32 = 0LL;
  if ( (int)NtOpenKey(&v24, 131097LL, &v28) >= 0 )
  {
    v12 = RtlpLoadMachineUIByPolicy(v24, a1, &LanguageList);
    if ( !v12 && LanguageList )
      goto LABEL_17;
    v11 = v24;
  }
  else
  {
    v11 = 0LL;
    v24 = 0LL;
  }
  if ( v8 && v11 && (int)RtlpHasMachineUILock(v11, &v49) >= 0 )
    v8 = (_BYTE)v49 != 1;
  v12 = OpenGlobalizationUserSettingsKey(0x2000000LL, a2, &v23);
  if ( v12 < 0 )
  {
LABEL_60:
    *v6 = 1;
    goto LABEL_37;
  }
  if ( v8 )
  {
    v12 = RtlpLoadUserUIByPolicy(v23, a1, &LanguageList);
    if ( !v12 && LanguageList )
    {
LABEL_21:
      *a6 = LanguageList;
      goto LABEL_22;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v34 = v23;
    v33 = 48;
    v35 = &DestinationString;
    v36 = 64;
    v37 = 0LL;
    v12 = NtOpenKey(&Handle, 131097LL, &v33);
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
  v39 = v23;
  v38 = 48;
  v40 = &DestinationString;
  v41 = 64;
  v42 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v38) < 0 )
    goto LABEL_16;
  v13 = L"MachinePreferredUILanguages";
LABEL_15:
  RtlInitUnicodeString(&DestinationString, v13);
  v12 = -1073741772;
  v14 = LdrpQueryValueKey(Handle, &DestinationString, &v50, 0LL, &v48);
  if ( v14 == -1073741772 || !v48 )
    goto LABEL_16;
  if ( v14 == -2147483643 )
  {
    v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v48 + 2);
    if ( v10 )
    {
      v12 = LdrpQueryValueKey(Handle, &DestinationString, &v50, v10, &v48);
      if ( v12 < 0 )
        goto LABEL_37;
      if ( v50 == 7 || v50 == 1 )
      {
        v12 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v10, v48 >> 1, 8LL, (unsigned int)!v8 + 2, 1, &LanguageList);
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
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v23 )
  {
    NtClose(v23);
    v23 = 0LL;
  }
  if ( v24 )
    NtClose(v24);
  return (unsigned int)v12;
}
