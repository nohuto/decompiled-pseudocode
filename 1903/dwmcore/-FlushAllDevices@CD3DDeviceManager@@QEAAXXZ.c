/*
 * XREFs of ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800D6AE0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180097A30 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1801AC3D0 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800D6B40 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 */

void __fastcall CD3DDeviceManager::FlushAllDevices(CD3DDeviceManager *this)
{
  __int64 i; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 52); i = (unsigned int)(i + 1) )
    CD3DDeviceLevel1::Flush(*(CD3DDeviceLevel1 **)(*((_QWORD *)this + 16) + 24 * i));
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
