/*
 * XREFs of ?EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800AE6AC
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800B0708 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180064E88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x1800A9408 (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800B5588 (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 *     ??$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAPEAVHString@Wrappers@WRL@Microsoft@@QEAV2345@$$QEAV2345@@Z @ 0x1800B5ABC (--$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@-$vector@VHString@Wrappers@WRL@Microsof.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnumerateDevices(
        LPGUID InterfaceClassGuid,
        __int64 a2)
{
  HSTRING *v4; // rsi
  HSTRING *v5; // rbx
  HSTRING *v6; // r13
  __int64 v7; // rdx
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  WCHAR *v10; // rax
  WCHAR *v11; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  const struct std::nothrow_t *v13; // rdx
  DWORD v14; // eax
  const struct std::nothrow_t *v15; // rdx
  const struct std::nothrow_t *v16; // rdx
  const WCHAR *v17; // r12
  HSTRING *v18; // r14
  int v19; // eax
  HSTRING v20; // rcx
  __int64 v21; // rax
  ULONG pulLen; // [rsp+30h] [rbp-68h] BYREF
  HSTRING string; // [rsp+38h] [rbp-60h] BYREF
  __int128 v25; // [rsp+40h] [rbp-58h] BYREF
  HSTRING *v26; // [rsp+50h] [rbp-48h]
  const WCHAR *v27[3]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v27[2] = (const WCHAR *)-2LL;
  v4 = *(HSTRING **)(a2 + 8);
  v5 = *(HSTRING **)a2;
  if ( *(HSTRING **)a2 != v4 )
  {
    do
    {
      WindowsDeleteString(*v5);
      *v5++ = 0LL;
    }
    while ( v5 != v4 );
    v5 = *(HSTRING **)a2;
  }
  *(_QWORD *)(a2 + 8) = v5;
  v25 = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  while ( 1 )
  {
    pulLen = 0;
    if ( CM_Get_Device_Interface_List_SizeW(&pulLen, InterfaceClassGuid, 0LL, 0) )
    {
      v7 = 51LL;
LABEL_9:
      v8 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)0x80070490LL);
      goto LABEL_34;
    }
    if ( pulLen <= 1 )
    {
      v7 = 52LL;
      goto LABEL_9;
    }
    v9 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v9 = -1LL;
    v10 = (WCHAR *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    v27[1] = v10;
    if ( !v10 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_34;
    }
    memset_0(v10, 0, 2LL * pulLen);
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(InterfaceClassGuid, 0LL, v11, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
      break;
    operator delete(v11, v13);
  }
  v14 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
  if ( v14 )
  {
    v8 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x46,
           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
           (const char *)v14);
  }
  else
  {
    v17 = v11;
    v27[0] = v11;
    v18 = (HSTRING *)*((_QWORD *)&v25 + 1);
    while ( 1 )
    {
      if ( !*v17 )
      {
        if ( (__int128 *)a2 != &v25 )
        {
          std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(a2);
          *(_QWORD *)a2 = v25;
          *(_QWORD *)(a2 + 8) = v18;
          *(_QWORD *)(a2 + 16) = v6;
          v25 = 0LL;
          v26 = 0LL;
        }
        if ( v11 )
          operator delete(v11, v15);
        v8 = 0;
        goto LABEL_34;
      }
      string = 0LL;
      v19 = Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(&string, v27);
      v8 = v19;
      if ( v19 < 0 )
        break;
      if ( v6 == v18 )
      {
        std::vector<Microsoft::WRL::Wrappers::HString>::_Emplace_reallocate<Microsoft::WRL::Wrappers::HString>(
          &v25,
          v18,
          &string);
        v6 = v26;
        v18 = (HSTRING *)*((_QWORD *)&v25 + 1);
        v20 = string;
      }
      else
      {
        *v18 = string;
        v20 = 0LL;
        string = 0LL;
        *((_QWORD *)&v25 + 1) = ++v18;
      }
      WindowsDeleteString(v20);
      v21 = -1LL;
      do
        ++v21;
      while ( v17[v21] );
      v17 += v21 + 1;
      v27[0] = v17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v19);
    WindowsDeleteString(string);
    string = 0LL;
    if ( !v11 )
      goto LABEL_34;
  }
  operator delete(v11, v16);
LABEL_34:
  std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(&v25);
  return v8;
}
