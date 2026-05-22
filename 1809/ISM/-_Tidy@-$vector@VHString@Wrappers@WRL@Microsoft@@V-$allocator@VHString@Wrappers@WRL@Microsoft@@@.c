/*
 * XREFs of ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800B5588
 * Callers:
 *     ?EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800AE6AC (-EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800B0708 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ??1?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800B4AE4 (--1-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(__int64 a1)
{
  HSTRING *v1; // rbx
  HSTRING *v3; // rsi
  const struct std::nothrow_t *v4; // rdx
  __int64 v5; // rcx

  v1 = *(HSTRING **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(HSTRING **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        WindowsDeleteString(*v1);
        *v1++ = 0LL;
      }
      while ( v1 != v3 );
      v1 = *(HSTRING **)a1;
    }
    v4 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      v5 = (__int64)*(v1 - 1);
      v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
      if ( (unsigned __int64)v1 - v5 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v4);
        JUMPOUT(0x1800B561CLL);
      }
      v1 = (HSTRING *)*(v1 - 1);
    }
    operator delete(v1, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
