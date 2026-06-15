/*
 * XREFs of ??0?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004CB5C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004ECFC (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14004D0E8 (--0CCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::CComAggObject<CCrossProcessClientOutputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint((CCrossProcessClientOutputEndpoint *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  v4[1] = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  v4[50] = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  v4[51] = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  v4[52] = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  v4[56] = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  v4[59] = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessControl'};
  v4[61] = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
