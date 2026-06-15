/*
 * XREFs of ??0?$CComAggObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z @ 0x140042090
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140042218 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CAPOWrapperSrv>::CComAggObject<CAPOWrapperSrv>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CAPOWrapperSrv>::`vftable';
  memset_0((void *)(a1 + 64), 0, 0x28uLL);
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
  *(_QWORD *)(a1 + 56) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
