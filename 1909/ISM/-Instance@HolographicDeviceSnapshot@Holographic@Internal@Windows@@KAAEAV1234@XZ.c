/*
 * XREFs of ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800D82C0
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_81a1f3a0b0089925dbb8abbd9e8c6b20___ @ 0x18014AC24 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_81a1f3a0b008992.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ae4609f332701fbf386e5d669d1e8a4c___ @ 0x18014ACD4 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_ae4609f332701fb.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ed6a7cdcc708de0d2bf982d91253a679___ @ 0x18014AD84 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_ed6a7cdcc708de0.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285___ @ 0x18014B660 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic-.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8___ @ 0x18014B760 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18014B760.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a___ @ 0x18014B860 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18014B860.c)
 *     ?AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180153374 (-AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@A.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x180162558 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_180162558.c)
 *     ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180163CC4 (-AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SA.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18002A59C (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     atexit @ 0x18002BC68 (atexit.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x18002CD10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18002CD78 (_Init_thread_header.c)
 *     ??0HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800D77D0 (--0HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800D7BA4 (--1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
struct Windows::Internal::Holographic::HolographicDeviceSnapshot *Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance(
        void)
{
  Windows::Internal::Holographic::HolographicDeviceSnapshot *v0; // rbx
  RegistryHelpers *v1; // rcx
  bool v2; // di
  Windows::Internal::Holographic::HolographicDeviceSnapshot *v3; // rax
  Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // rbx
  void *v6; // [rsp+58h] [rbp+10h]

  if ( __TSS0__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA);
    if ( __TSS0__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA == -1 )
    {
      InitializeCriticalSectionEx(
        &`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_Lock,
        0,
        0);
      atexit(`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::`dynamic atexit destructor for 's_Lock'');
      `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot = 0LL;
      atexit(`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::`dynamic atexit destructor for 's_spDeviceSnapshot'');
      Init_thread_footer(&__TSS0__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA);
    }
  }
  v0 = (Windows::Internal::Holographic::HolographicDeviceSnapshot *)`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot;
  if ( !`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot )
  {
    EnterCriticalSection(&`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_Lock);
    v0 = (Windows::Internal::Holographic::HolographicDeviceSnapshot *)`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot;
    if ( !`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot )
    {
      v2 = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                           v1,
                           (const WCHAR *)&stru_180185DC0,
                           L"HolographicSnapshotEnabled",
                           0LL) != 0;
      v6 = operator new(0x80uLL);
      memset_0(v6, 0, 0x80uLL);
      v3 = Windows::Internal::Holographic::HolographicDeviceSnapshot::HolographicDeviceSnapshot((Windows::Internal::Holographic::HolographicDeviceSnapshot *)v6);
      v4 = `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot;
      `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot = v3;
      if ( v4 )
      {
        Windows::Internal::Holographic::HolographicDeviceSnapshot::~HolographicDeviceSnapshot(v4);
        operator delete(v4, (const struct std::nothrow_t *)0x80);
        v3 = `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot;
      }
      *((_BYTE *)v3 + 120) = v2;
      v0 = `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot;
      _InterlockedExchange64(
        &`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot,
        (__int64)`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot);
    }
    LeaveCriticalSection(&`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_Lock);
  }
  return v0;
}
