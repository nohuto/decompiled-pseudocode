/*
 * XREFs of ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x18000FA80
 * Callers:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x180026684 (--1UdwmDcompVisual@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x18000FB08 (-ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SharedDwmDcompVisual::ReleaseResources(SharedDwmDcompVisual *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  SharedDwmDcompVisual::ReleaseDCompResources(this);
  if ( *(_QWORD *)this )
  {
    CBaseObject::Release(*(CBaseObject **)this);
    *(_QWORD *)this = 0LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL) )
  {
    if ( *((_DWORD *)this + 6) )
    {
      v2 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                           + 16LL)
                                             + 136LL))(
        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
        *((unsigned int *)this + 6));
      *((_DWORD *)this + 6) = 0;
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
    }
  }
}
