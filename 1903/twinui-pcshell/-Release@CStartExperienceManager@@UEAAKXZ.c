/*
 * XREFs of ?Release@CStartExperienceManager@@UEAAKXZ @ 0x18006BA00
 * Callers:
 *     ?Release@CStartExperienceManager@@W7EAAKXZ @ 0x1800B50B0 (-Release@CStartExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCA@EAAKXZ @ 0x1800B50C0 (-Release@CStartExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCI@EAAKXZ @ 0x1800B50D0 (-Release@CStartExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WDA@EAAKXZ @ 0x1800B50E0 (-Release@CStartExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WDI@EAAKXZ @ 0x1800B50F0 (-Release@CStartExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WEA@EAAKXZ @ 0x1800B5100 (-Release@CStartExperienceManager@@WEA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Release(CStartExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 10);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 10, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v2 )
  {
    if ( this )
      (*(void (__fastcall **)(CStartExperienceManager *, __int64))(*(_QWORD *)this + 48LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
