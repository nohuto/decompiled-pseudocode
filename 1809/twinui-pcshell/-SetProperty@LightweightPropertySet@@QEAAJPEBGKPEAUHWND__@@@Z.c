/*
 * XREFs of ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18005A254
 * Callers:
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180059EC0 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z @ 0x18005A1C0 (-SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x180244080 (-SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x180244260 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18005F980 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::SetProperty(
        LightweightPropertySet *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HWND a4)
{
  unsigned __int64 v5; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  PCWSTR StringRawBuffer; // rax
  HSTRING v11; // rax
  HSTRING v12; // rbx
  HSTRING v13; // rax
  UINT32 v14; // edx
  HRESULT v15; // esi
  HSTRING v16; // rcx
  HSTRING v17; // rdi
  __int64 v18; // rdx
  HSTRING v19; // rdx
  HSTRING *v20; // r8
  __int64 v22; // rdx
  const WCHAR *v23; // rax
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v25; // [rsp+38h] [rbp-C8h]
  __int64 v26; // [rsp+40h] [rbp-C0h]
  WCHAR sourceString[256]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v26 = -2LL;
  v5 = a3;
  v25 = 0LL;
  v8 = 0LL;
  v9 = -1LL;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_4;
  while ( 1 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)this + 8 * v8) + 8LL), 0LL);
    if ( CompareStringOrdinal(StringRawBuffer + 20, -1, a2, -1, 1) == 2 )
      break;
    if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 1) )
      goto LABEL_4;
  }
  v12 = *(HSTRING *)(*(_QWORD *)this + 8 * v8);
  if ( !v12 )
  {
LABEL_4:
    v11 = (HSTRING)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      *((_QWORD *)v11 + 2) = 0LL;
      *((_QWORD *)v11 + 1) = 0LL;
      *((_DWORD *)v11 + 4) = 0;
      *(_QWORD *)v11 = &CRefCountedObject<LightweightPropertySet::LightweightProperty>::`vftable';
      *((_DWORD *)v11 + 6) = 0;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 8LL))(v12);
    v25 = v12;
    if ( v12 )
    {
      _o_wcscpy_s(sourceString, 256LL, L"LightweightProperty_");
      _o_wcscat_s(sourceString, 256LL, a2);
      v13 = 0LL;
      string = 0LL;
      do
        ++v9;
      while ( sourceString[v9] );
      v14 = -1;
      if ( v9 <= 0xFFFFFFFF )
        v14 = v9;
      v15 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
      if ( v9 <= 0xFFFFFFFF )
      {
        v15 = WindowsCreateString(sourceString, v14, &string);
        v13 = string;
      }
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8A,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
          (const char *)(unsigned int)v15);
      }
      else
      {
        v16 = (HSTRING)*((_QWORD *)v12 + 1);
        *((_QWORD *)v12 + 1) = v13;
        WindowsDeleteString(v16);
      }
      if ( v15 < 0 )
      {
        v22 = 59LL;
      }
      else
      {
        v17 = v12;
        string = v12;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 8LL))(v12);
        v15 = 0;
        v18 = *((_QWORD *)this + 1);
        if ( v18 != *((_QWORD *)this + 3)
          || (v15 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                      this,
                      v18 + 1),
              v19 = v12,
              v15 >= 0) )
        {
          v19 = v12;
          v20 = (HSTRING *)(*(_QWORD *)this + 8 * (*((_QWORD *)this + 1))++);
          if ( v20 )
          {
            *v20 = 0LL;
            if ( v20 != &string )
            {
              *v20 = v12;
              v17 = 0LL;
              v19 = 0LL;
            }
          }
        }
        if ( v19 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v15 >= 0 )
          goto LABEL_26;
        v22 = 60LL;
      }
    }
    else
    {
      v15 = -2147024882;
      v22 = 57LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_29;
  }
  string = *(HSTRING *)(*(_QWORD *)this + 8 * v8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&string);
LABEL_26:
  *((_DWORD *)v12 + 4) = v5;
  if ( a4 )
  {
    v23 = WindowsGetStringRawBuffer(*((HSTRING *)v12 + 1), 0LL);
    SetPropW(a4, v23, (HANDLE)v5);
  }
  v15 = 0;
LABEL_29:
  if ( v12 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v15;
}
