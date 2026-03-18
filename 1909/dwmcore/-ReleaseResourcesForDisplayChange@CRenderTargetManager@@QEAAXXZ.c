/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x180187A00
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18002BF70 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  v5 = &stru_18033D458;
  EnterCriticalSection(&stru_18033D458);
  for ( j = qword_18033D510;
        j;
        CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(*(CD3DDeviceLevel1 **)(qword_18033D4C0 + 24LL * j)) )
  {
    --j;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
}
