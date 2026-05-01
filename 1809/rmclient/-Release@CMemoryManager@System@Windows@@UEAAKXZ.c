/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180005910
 * Callers:
 *     ?Release@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180009EC0 (-Release@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x180009ED0 (-Release@CMemoryManager@System@Windows@@WCI@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x180009EE0 (-Release@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x180009EF0 (-Release@CMemoryManager@System@Windows@@WDI@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x180009F00 (-Release@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800099E8 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Windows::System::CMemoryManager::Release(
        Windows::System::CMemoryManager *this,
        volatile int *a2)
{
  unsigned int result; // eax
  _DWORD *v3; // r10
  unsigned int v4; // ebx
  int v5; // edi
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx

  result = Microsoft::WRL::Details::SafeUnknownDecrementReference(
             (Windows::System::CMemoryManager *)((char *)this + 108),
             a2);
  v4 = result;
  v5 = v3[32] & 4;
  if ( !result )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
    if ( !v5 )
      return v4;
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( !Microsoft::WRL::Details::ModuleBase::module_ )
      return v4;
    goto LABEL_8;
  }
  if ( !v5 && result == 1 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
LABEL_8:
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 16LL))(v6);
    return v4;
  }
  return result;
}
