/*
 * XREFs of ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x1800413BC
 * Callers:
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x18003DA44 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003DBD0 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180043A5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CQueryKnownGameList,CQueryKnownGameList,unsigned short const * &>(
        struct _RTL_CRITICAL_SECTION **a1,
        char **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)operator new(0x328uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&KnownGameList::IQueryKnownGameList::`vftable';
    v4->RecursionCount = 1;
    v4->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KnownGameList::IQueryKnownGameList>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v5 = v4;
    }
    v5->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CQueryKnownGameList::`vftable';
    v5->OwningThread = 0LL;
    v5->LockSemaphore = (HANDLE)-1LL;
    v5[18].LockSemaphore = 0LL;
    v5[18].SpinCount = 0LL;
    InitializeCriticalSectionEx(v5 + 19, 0, 0);
    LODWORD(v5[20].DebugInfo) = 0;
    memset_0(&v5->SpinCount, 0, 0x2C4uLL);
    v6 = CQueryKnownGameList::RuntimeClassInitialize((CQueryKnownGameList *)v5, *a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->CriticalSection)(v5);
      *a1 = v5;
      v6 = 0;
    }
    if ( v5 )
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->ProcessLocksList.Flink)(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
