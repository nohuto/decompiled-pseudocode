/*
 * XREFs of ??0?$CComObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x1400124B8
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140003F9C (-CreateInstance@-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x1400104F4 (--0CSubmixImpl@@QEAA@XZ.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CProcessSubmix>::CComObject<CProcessSubmix>(__int64 a1)
{
  __int64 v2; // rbx

  *(_DWORD *)(a1 + 336) = 0;
  v2 = a1 + 344;
  memset_0((void *)(a1 + 344), 0, 0x28uLL);
  *(_BYTE *)(v2 + 40) = 0;
  CSubmixImpl::CSubmixImpl((CSubmixImpl *)(a1 + 16));
  *(_QWORD *)a1 = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 16) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
