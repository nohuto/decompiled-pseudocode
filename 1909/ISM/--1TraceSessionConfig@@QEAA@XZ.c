/*
 * XREFs of ??1TraceSessionConfig@@QEAA@XZ @ 0x18009C0CC
 * Callers:
 *     GetHolographicInputSession @ 0x18009CB68 (GetHolographicInputSession.c)
 *     _GetHolographicInputSession_::_1_::dtor$3 @ 0x18009CE36 (_GetHolographicInputSession_--_1_--dtor$3.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009E100 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _SpatialRimDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x18009E202 (_SpatialRimDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x18009E2B0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     _SpatialRimDeviceCollection::OnFinalRelease_::_1_::dtor$0 @ 0x18009E3C8 (_SpatialRimDeviceCollection--OnFinalRelease_--_1_--dtor$0.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x18009F670 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

void __fastcall TraceSessionConfig::~TraceSessionConfig(TraceSessionConfig *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 13);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(40 * ((*((_QWORD *)this + 15) - (_QWORD)v2) / 40LL)));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  std::wstring::_Tidy_deallocate((__int64)this + 48);
  std::wstring::_Tidy_deallocate((__int64)this);
}
