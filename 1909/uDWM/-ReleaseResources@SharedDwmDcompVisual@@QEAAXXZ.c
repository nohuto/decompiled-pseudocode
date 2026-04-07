/*
 * XREFs of ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180024BB4
 * Callers:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x1800261C4 (--1UdwmDcompVisual@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180024C3C (-ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
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
