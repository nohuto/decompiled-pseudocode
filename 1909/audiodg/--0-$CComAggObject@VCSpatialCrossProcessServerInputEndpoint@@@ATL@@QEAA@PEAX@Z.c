/*
 * XREFs of ??0?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140057120
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400583DC (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140057728 (--0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::CComAggObject<CSpatialCrossProcessServerInputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint((CSpatialCrossProcessServerInputEndpoint *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  v4[1] = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  v4[2] = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  v4[3] = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  v4[115] = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  v4[116] = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  v4[133] = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  v4[134] = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
