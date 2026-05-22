/*
 * XREFs of ??1ISMHeatFrameworkHost@@MEAA@XZ @ 0x18007ABC0
 * Callers:
 *     ??_EISMHeatFrameworkHost@@MEAAPEAXI@Z @ 0x18007ACC0 (--_EISMHeatFrameworkHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@IV?$allocator@I@std@@@std@@QEAAXXZ @ 0x1800344C0 (-clear@-$list@IV-$allocator@I@std@@@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ISMHeatFrameworkHost::~ISMHeatFrameworkHost(ISMHeatFrameworkHost *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &ISMHeatFrameworkHost::`vftable'{for `IHeatFrameworkHost'};
  *((_QWORD *)this + 1) = &ISMHeatFrameworkHost::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &ISMHeatFrameworkHost::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    *(_QWORD *)(v3 + 56) = 0LL;
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 12) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  std::list<unsigned int>::clear((__int64)this + 64);
  std::_Deallocate<16,0>(*((void **)this + 8), (const struct std::nothrow_t *)0x18);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
