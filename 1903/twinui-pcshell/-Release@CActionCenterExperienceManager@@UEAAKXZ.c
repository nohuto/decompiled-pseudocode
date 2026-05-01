/*
 * XREFs of ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x180073A60
 * Callers:
 *     ?Release@CActionCenterExperienceManager@@W7EAAKXZ @ 0x1800B43A0 (-Release@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x1800B43B0 (-Release@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x1800B43C0 (-Release@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x1800B43D0 (-Release@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x1800B43E0 (-Release@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x1800B43F0 (-Release@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x1800B4400 (-Release@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x1800B4410 (-Release@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x1800B4420 (-Release@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WFA@EAAKXZ @ 0x1800B4430 (-Release@CActionCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Release(CActionCenterExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 12);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 12, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v2 )
  {
    if ( this )
      (*(void (__fastcall **)(CActionCenterExperienceManager *, __int64))(*(_QWORD *)this + 48LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
