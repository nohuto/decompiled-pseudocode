/*
 * XREFs of ?ConvertCapabilitiesFlagToCapabilitiesString@CortanaStoreAppHelper@@YAJW4CapabilityFlags@CortanaCapabilities@@PEAPEAUHSTRING__@@@Z @ 0x1801E569C
 * Callers:
 *     ?ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E51C8 (-ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E6ECC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034DA4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1801560AC (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

__int64 __fastcall CortanaStoreAppHelper::ConvertCapabilitiesFlagToCapabilitiesString(__int16 a1, HSTRING *a2)
{
  int v4; // ebx
  const WCHAR *v5; // rax
  const WCHAR *v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  PCNZWCH v16; // rsi
  wchar_t *v17; // rdi
  HRESULT String; // eax
  PCNZWCH sourceString; // [rsp+20h] [rbp-20h] BYREF
  UINT32 length[2]; // [rsp+28h] [rbp-18h]
  __int64 v22; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v22 = 0LL;
  if ( !is_mul_ok(1uLL, 2uLL) )
  {
    v4 = -2147024362;
LABEL_33:
    v8 = (unsigned int)v4;
    v9 = 675LL;
    goto LABEL_34;
  }
  v4 = 0;
  v5 = (const WCHAR *)CoTaskMemAlloc(2uLL);
  v6 = v5;
  if ( v5 )
  {
    v22 = 1LL;
    sourceString = v5;
    *v5 = 0;
  }
  else
  {
    v4 = -2147024882;
    v6 = 0LL;
  }
  if ( v4 < 0 )
    goto LABEL_33;
  *(_QWORD *)length = 0LL;
  *v6 = 0;
  if ( (a1 & 0x1000) != 0 )
  {
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
           &sourceString,
           (char *)L"BrowsingHistory,",
           0x10uLL);
    v4 = v7;
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v9 = 679LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
        (const char *)v8);
      goto LABEL_35;
    }
  }
  if ( (a1 & 0x800) != 0 )
  {
    v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
            &sourceString,
            (char *)L"CortanaExperience,",
            0x12uLL);
    v4 = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 683LL;
      goto LABEL_34;
    }
  }
  if ( (a1 & 0x80u) != 0 )
  {
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
            &sourceString,
            (char *)L"Microphone,",
            0xBuLL);
    v4 = v11;
    if ( v11 < 0 )
    {
      v8 = (unsigned int)v11;
      v9 = 687LL;
      goto LABEL_34;
    }
  }
  if ( (a1 & 0x100) != 0 )
  {
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
            &sourceString,
            (char *)L"Personalization,",
            0x10uLL);
    v4 = v12;
    if ( v12 < 0 )
    {
      v8 = (unsigned int)v12;
      v9 = 691LL;
      goto LABEL_34;
    }
  }
  if ( (a1 & 0x200) != 0 )
  {
    v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
            &sourceString,
            (char *)L"SpeechLanguage,",
            0xFuLL);
    v4 = v13;
    if ( v13 < 0 )
    {
      v8 = (unsigned int)v13;
      v9 = 695LL;
      goto LABEL_34;
    }
  }
  if ( (a1 & 0x400) != 0 )
  {
    v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
            &sourceString,
            (char *)L"InputPersonalization,",
            0x15uLL);
    v4 = v14;
    if ( v14 < 0 )
    {
      v8 = (unsigned int)v14;
      v9 = 699LL;
      goto LABEL_34;
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  v15 = *(_QWORD *)length;
  if ( *(_QWORD *)length )
  {
    v16 = sourceString;
    v17 = (wchar_t *)&sourceString[*(_QWORD *)length - 1];
    do
    {
      if ( !wcschr(L",", *v17) )
        break;
      --v17;
      --v15;
    }
    while ( v15 );
    if ( v15 != *(_QWORD *)length )
    {
      v16[v15] = 0;
      *(_QWORD *)length = v15;
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  String = WindowsCreateString(sourceString, length[0], a2);
  v4 = String;
  if ( String < 0 )
  {
    v8 = (unsigned int)String;
    v9 = 703LL;
    goto LABEL_34;
  }
LABEL_35:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  return (unsigned int)v4;
}
