/*
 * XREFs of ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140029988
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002A540 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??0CStreamGroup@@QEAA@XZ @ 0x140010C84 (--0CStreamGroup@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CStreamGroup>::CComAggObject<CStreamGroup>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CStreamGroup>::`vftable';
  CStreamGroup::CStreamGroup((CStreamGroup *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
  *(_QWORD *)(a1 + 368) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
