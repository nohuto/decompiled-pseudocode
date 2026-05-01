/*
 * XREFs of ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x180381B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800E7180 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x18021DFD0 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopRegistryHelpers::EnumValues(
        __int64 a1,
        unsigned __int8 a2,
        const WCHAR *a3,
        _QWORD *a4)
{
  bool v5; // zf
  LSTATUS v7; // eax
  int v8; // ebx
  DWORD v9; // esi
  DWORD i; // edx
  int v11; // eax
  void *v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  LPVOID v15; // rax
  unsigned int v16; // eax
  const char *v17; // r9
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  DWORD cchValueName; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  WCHAR ValueName[264]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v25 = -2LL;
  if ( a2 )
    v5 = *(_QWORD *)(a1 + 24) == 0LL;
  else
    v5 = *(_QWORD *)(a1 + 16) == 0LL;
  if ( v5 )
    return 0LL;
  phkResult = 0LL;
  v7 = RegOpenKeyW(*(HKEY *)(a1 + 8LL * a2 + 16), a3, &phkResult);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
  }
  else
  {
    cchValueName = 260;
    v9 = 0;
    for ( i = 0; ; i = v9 )
    {
      v16 = RegEnumValueW(phkResult, i, ValueName, &cchValueName, 0LL, 0LL, 0LL, 0LL);
      if ( v16 )
        break;
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              &v22,
              (__int64)ValueName,
              0xFFFFFFFFFFFFFFFFuLL);
      v8 = v11;
      if ( v11 < 0 )
      {
        v18 = (unsigned int)v11;
        v19 = 140LL;
        goto LABEL_23;
      }
      v13 = a4[1];
      if ( v13 == a4[3] )
      {
        v8 = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
               (__int64)a4,
               v13 + 1,
               v12);
        if ( v8 < 0 )
        {
          v18 = (unsigned int)v8;
          v19 = 141LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
            (const char *)v18);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
          goto LABEL_25;
        }
      }
      v14 = (_QWORD *)(*a4 + 24 * a4[1]++);
      if ( v14 )
      {
        v14[1] = v23;
        v14[2] = v24;
        v15 = v22;
        v22 = 0LL;
        v24 = 0LL;
        v23 = 0LL;
        *v14 = v15;
      }
      cchValueName = 260;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
      ++v9;
    }
    v17 = 0LL;
    if ( v16 != 259 )
      v17 = (const char *)v16;
    if ( (_DWORD)v17 )
      v8 = wil::details::in1diag3::Return_Win32(
             retaddr,
             149LL,
             (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
             v17);
    else
      v8 = 0;
  }
LABEL_25:
  if ( phkResult )
    RegCloseKey(phkResult);
  return (unsigned int)v8;
}
