/*
 * XREFs of ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x1803E78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180109198 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x1802738D0 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopRegistryHelpers::EnumKeys(__int64 a1, unsigned __int8 a2, const WCHAR *a3, _QWORD *a4)
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
  HKEY phkResult; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h]
  __int64 v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h]
  WCHAR Name[264]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]

  v24 = -2LL;
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
    v9 = 0;
    for ( i = 0; ; i = v9 )
    {
      v16 = RegEnumKeyW(phkResult, i, Name, 0x104u);
      if ( v16 )
        break;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              &v21,
              (__int64)Name,
              0xFFFFFFFFFFFFFFFFuLL);
      v8 = v11;
      if ( v11 < 0 )
      {
        v18 = (unsigned int)v11;
        v19 = 112LL;
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
          v19 = 113LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
            (const char *)v18);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
          goto LABEL_25;
        }
      }
      v14 = (_QWORD *)(*a4 + 24 * a4[1]++);
      if ( v14 )
      {
        v14[1] = v22;
        v14[2] = v23;
        v15 = v21;
        v21 = 0LL;
        v23 = 0LL;
        v22 = 0LL;
        *v14 = v15;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
      ++v9;
    }
    v17 = 0LL;
    if ( v16 != 259 )
      v17 = (const char *)v16;
    if ( (_DWORD)v17 )
      v8 = wil::details::in1diag3::Return_Win32(
             retaddr,
             120LL,
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
