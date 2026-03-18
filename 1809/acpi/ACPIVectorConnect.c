/*
 * XREFs of ACPIVectorConnect @ 0x1C005E7E0
 * Callers:
 *     ACPIVectorConnect2 @ 0x1C005E980 (ACPIVectorConnect2.c)
 *     ACPIEcConnectGpeVector @ 0x1C00AAAC4 (ACPIEcConnectGpeVector.c)
 * Callees:
 *     ACPIGpeInstallRemoveIndex @ 0x1C0016EE4 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeValidIndex @ 0x1C0019D54 (ACPIGpeValidIndex.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0025D3C (ACPIGpeEnableDisableEvents.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIVectorInstall @ 0x1C005EDF4 (ACPIVectorInstall.c)
 */

__int64 __fastcall ACPIVectorConnect(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  unsigned int v10; // ebx
  PVOID PoolWithTag; // rax
  void *v13; // rdi
  KIRQL v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdx

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xEu,
    0xBu,
    (__int64)&WPP_54ed5c38fd043f43cce4e7311b7ced51_Traceguids);
  v10 = 0;
  *a7 = 0LL;
  if ( !*((_WORD *)AcpiInformation + 51) )
    return 3221225473LL;
  if ( !ACPIGpeValidIndex(a2) )
    return 3221225712LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x67706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x20uLL);
  *((_QWORD *)v13 + 1) = a5;
  *((_QWORD *)v13 + 2) = a6;
  *(_DWORD *)v13 = a2;
  *((_DWORD *)v13 + 7) = a3;
  *((_BYTE *)v13 + 24) = a4;
  v14 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v15);
  if ( ACPIGpeInstallRemoveIndex(a2, a3 == 0, 0, (char *)v13 + 25) )
  {
    if ( (unsigned __int8)ACPIVectorInstall(a2, v13) )
    {
      *a7 = v13;
      goto LABEL_11;
    }
    ACPIGpeInstallRemoveIndex(a2, 2, 0, (char *)v13 + 25);
  }
  ExFreePoolWithTag(v13, 0);
  v10 = -1073741823;
LABEL_11:
  ACPIGpeEnableDisableEvents(1, v16);
  KeReleaseSpinLock(&GpeTableLock, v14);
  return v10;
}
