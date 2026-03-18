/*
 * XREFs of ACPIVectorConnect @ 0x1C00606B0
 * Callers:
 *     ACPIVectorConnect2 @ 0x1C0060850 (ACPIVectorConnect2.c)
 *     ACPIEcConnectGpeVector @ 0x1C00AE1B4 (ACPIEcConnectGpeVector.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0022134 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0023C40 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeValidIndex @ 0x1C0023E5C (ACPIGpeValidIndex.c)
 *     ACPIVectorInstall @ 0x1C0060CE4 (ACPIVectorInstall.c)
 */

__int64 __fastcall ACPIVectorConnect(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5, __int64 a6, char **a7)
{
  unsigned int v10; // ebx
  char *PoolWithTag; // rax
  char *v13; // rdi
  KIRQL v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x67706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_DWORD *)PoolWithTag + 1) = 0;
  *(_WORD *)(PoolWithTag + 25) = 0;
  PoolWithTag[27] = 0;
  *(_DWORD *)PoolWithTag = a2;
  *((_QWORD *)PoolWithTag + 1) = a5;
  *((_QWORD *)PoolWithTag + 2) = a6;
  *((_DWORD *)PoolWithTag + 7) = a3;
  PoolWithTag[24] = a4;
  v14 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v15);
  if ( ACPIGpeInstallRemoveIndex(a2, a3 == 0, 0, v13 + 25) )
  {
    if ( (unsigned __int8)ACPIVectorInstall(a2, v13) )
    {
      *a7 = v13;
      goto LABEL_13;
    }
    ACPIGpeInstallRemoveIndex(a2, 2, 0, v13 + 25);
  }
  ExFreePoolWithTag(v13, 0);
  v10 = -1073741823;
LABEL_13:
  ACPIGpeEnableDisableEvents(1, v16);
  KeReleaseSpinLock(&GpeTableLock, v14);
  return v10;
}
