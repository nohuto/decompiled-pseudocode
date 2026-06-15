/*
 * XREFs of ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140010DAC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140010E18 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     ??0CStreamGroup@@QEAA@XZ @ 0x140010C84 (--0CStreamGroup@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CStreamGroup *__fastcall ATL::CComObject<CStreamGroup>::CComObject<CStreamGroup>(CStreamGroup *a1)
{
  CStreamGroup::CStreamGroup(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IFastRundown'};
  *((_QWORD *)a1 + 3) = &ATL::CComObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
