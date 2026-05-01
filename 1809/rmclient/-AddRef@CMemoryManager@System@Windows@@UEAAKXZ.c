/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180005AF0
 * Callers:
 *     ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180009C40 (-AddRef@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x180009C50 (-AddRef@CMemoryManager@System@Windows@@WCI@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x180009C60 (-AddRef@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x180009C70 (-AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x180009C80 (-AddRef@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180009A10 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Windows::System::CMemoryManager::AddRef(
        Windows::System::CMemoryManager *this,
        volatile int *a2)
{
  unsigned int result; // eax
  __int64 v3; // r10
  unsigned int v4; // ebx

  result = Microsoft::WRL::Details::SafeUnknownIncrementReference(
             (Windows::System::CMemoryManager *)((char *)this + 108),
             a2);
  v4 = result;
  if ( (*(_BYTE *)(v3 + 128) & 4) == 0 && result == 2 )
  {
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v4;
  }
  return result;
}
