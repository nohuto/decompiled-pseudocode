/*
 * XREFs of ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400573AC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005874C (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL.c)
 *     privateCreateSpatialCrossProcessEndpoint @ 0x140059040 (privateCreateSpatialCrossProcessEndpoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140057818 (--0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessServerInputEndpoint *__fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::CComObject<CSpatialCrossProcessServerInputEndpoint>(
        CSpatialCrossProcessServerInputEndpoint *a1)
{
  CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)a1 + 3) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)a1 + 115) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)a1 + 116) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *((_QWORD *)a1 + 133) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
