/*
 * XREFs of ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x180077B5C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x180179C90 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x180077BBC (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDeviceManager::FlushAllDevices(CD3DDeviceManager *this)
{
  __int64 i; // rbx
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 52); i = (unsigned int)(i + 1) )
    CD3DDeviceLevel1::Flush(*(CD3DDeviceLevel1 **)(*((_QWORD *)this + 16) + 24 * i));
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
