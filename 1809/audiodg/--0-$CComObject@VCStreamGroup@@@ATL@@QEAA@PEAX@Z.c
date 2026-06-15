/*
 * XREFs of ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x1400123A4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400040A8 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x1400104F4 (--0CSubmixImpl@@QEAA@XZ.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CStreamGroup>::CComObject<CStreamGroup>(__int64 a1)
{
  __int64 v2; // rbx

  *(_DWORD *)(a1 + 344) = 0;
  v2 = a1 + 352;
  memset_0((void *)(a1 + 352), 0, 0x28uLL);
  *(_BYTE *)(v2 + 40) = 0;
  CSubmixImpl::CSubmixImpl((CSubmixImpl *)(a1 + 24));
  *(_QWORD *)a1 = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *(_QWORD *)(a1 + 16) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 24) = &ATL::CComObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
