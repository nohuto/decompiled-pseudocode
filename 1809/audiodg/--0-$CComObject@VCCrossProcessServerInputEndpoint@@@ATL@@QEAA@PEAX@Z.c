/*
 * XREFs of ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140005018
 * Callers:
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140004F54 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400517AC (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 * Callees:
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x1400055CC (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessServerInputEndpoint *__fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::CComObject<CCrossProcessServerInputEndpoint>(
        CCrossProcessServerInputEndpoint *a1)
{
  CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)a1 + 50) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  *((_QWORD *)a1 + 57) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
