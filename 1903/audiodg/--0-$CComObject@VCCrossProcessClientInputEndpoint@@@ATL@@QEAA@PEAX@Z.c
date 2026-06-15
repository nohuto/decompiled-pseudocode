/*
 * XREFs of ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004CF10
 * Callers:
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14000F268 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004F1F4 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x14004D160 (--0CCrossProcessClientInputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientInputEndpoint *__fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(
        CCrossProcessClientInputEndpoint *a1)
{
  CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)a1 + 50) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)a1 + 51) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)a1 + 52) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)a1 + 56) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  *((_QWORD *)a1 + 59) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessControl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
