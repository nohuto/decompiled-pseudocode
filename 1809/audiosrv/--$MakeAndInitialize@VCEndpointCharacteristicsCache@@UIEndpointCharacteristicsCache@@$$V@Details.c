/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x18005DEE4
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18004C3B0 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x18005DFD0 (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,>()
{
  CEndpointCharacteristicsCache *v0; // rax
  RTL_SRWLOCK *v1; // rbx
  unsigned int v2; // edi

  g_pEndpointCharacteristicsCache = 0LL;
  v0 = (CEndpointCharacteristicsCache *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = (RTL_SRWLOCK *)CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v0);
    InitializeSRWLock(v1 + 2);
    v2 = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, PVOID *))v1->Ptr)(
           v1,
           &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656,
           &g_pEndpointCharacteristicsCache);
    (*((void (__fastcall **)(RTL_SRWLOCK *))v1->Ptr + 2))(v1);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
