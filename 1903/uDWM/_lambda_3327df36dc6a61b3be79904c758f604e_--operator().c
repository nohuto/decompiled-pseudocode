/*
 * XREFs of _lambda_3327df36dc6a61b3be79904c758f604e_::operator() @ 0x1800B3760
 * Callers:
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800B38FC (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_3327df36dc6a61b3be79904c758f604e_::operator()(__int64 *a1)
{
  __int64 v2; // rdx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = *a1;
  v3 = *(CBaseObject **)(*a1 + 16);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *(_QWORD *)(*a1 + 16) = 0LL;
    v2 = *a1;
  }
  v4 = *(CBaseObject **)(v2 + 56);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *(_QWORD *)(*a1 + 56) = 0LL;
    v2 = *a1;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL)
                                         + 136LL))(
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
    *(unsigned int *)(v2 + 40));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL)
                                         + 136LL))(
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
    *(unsigned int *)(*a1 + 80));
  v5 = (__int64 *)a1[1];
  v6 = *v5;
  *v5 = 0LL;
  *(_QWORD *)(*a1 + 16) = v6;
  v7 = (__int64 *)a1[2];
  v8 = *v7;
  *v7 = 0LL;
  *(_QWORD *)(*a1 + 56) = v8;
  *(_DWORD *)(*a1 + 40) = *(_DWORD *)a1[3];
  *(_DWORD *)(*a1 + 80) = *(_DWORD *)a1[4];
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
}
