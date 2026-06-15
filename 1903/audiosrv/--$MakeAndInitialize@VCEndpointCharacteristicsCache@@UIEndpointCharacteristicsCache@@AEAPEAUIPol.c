/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Z @ 0x1800586F0
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005AB64 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x180053C8C (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@@Z @ 0x180058788 (-RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &>(
        __int64 a1,
        struct IPolicyConfigInternal **a2)
{
  CEndpointCharacteristicsCache *v3; // rax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  CEndpointCharacteristicsCache *v7; // rbx
  int v8; // edi

  g_pEndpointCharacteristicsCache = 0LL;
  v3 = (CEndpointCharacteristicsCache *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v7 = CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v3, v4, v5, v6);
    v8 = CEndpointCharacteristicsCache::RuntimeClassInitialize(v7, *a2);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(CEndpointCharacteristicsCache *, GUID *, PVOID *))v7)(
             v7,
             &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656,
             &g_pEndpointCharacteristicsCache);
    if ( v7 )
      (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
