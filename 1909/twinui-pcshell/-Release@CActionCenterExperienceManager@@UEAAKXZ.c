/*
 * XREFs of ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x180076AE0
 * Callers:
 *     ?Release@CActionCenterExperienceManager@@W7EAAKXZ @ 0x1800D70E0 (-Release@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x1800D70F0 (-Release@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x1800D7100 (-Release@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x1800D7110 (-Release@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x1800D7120 (-Release@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x1800D7130 (-Release@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x1800D7140 (-Release@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x1800D7150 (-Release@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x1800D7160 (-Release@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WFA@EAAKXZ @ 0x1800D7170 (-Release@CActionCenterExperienceManager@@WFA@EAAKXZ.c)
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180193810 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 *     ??1?$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180193E58 (--1-$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Release(CActionCenterExperienceManager *this)
{
  signed __int64 v1; // rax
  CActionCenterExperienceManager *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 12);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 12, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(CActionCenterExperienceManager *, __int64))(*(_QWORD *)v2 + 48LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
