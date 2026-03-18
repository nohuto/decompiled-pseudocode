/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x180152A28
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800E90C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ReleaseResourcesForDisplayChange(CRenderTargetManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  unsigned int j; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 128LL))(v3);
  }
  v5 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  for ( j = qword_180308B10;
        j;
        CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(*(CD3DDeviceLevel1 **)(qword_180308AC0 + 24LL * j)) )
  {
    --j;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
}
