/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0016260
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FA30 (ACPIBuildCompleteCommon.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  void *v5; // rax
  void *v6; // rdx
  signed __int32 v7; // ecx
  KIRQL v8; // di
  int v9; // edx
  volatile signed __int32 *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  v3 = 0;
  memset((void *)(a1 + 88), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v11 = *(volatile signed __int32 **)(a1 + 56);
    if ( v11 )
    {
      AMLIDereferenceHandleEx(v11);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v12 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1346716767);
    *(_QWORD *)(a1 + 56) = v12;
    if ( v12 )
    {
      v3 = AMLIAsyncEvalObject(v12, (_SLIST_ENTRY *)(a1 + 88), 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = &unk_1C006FE7D;
  v6 = &unk_1C006FE7D;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(void **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      6,
      61,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      v3,
      v1,
      (__int64)v5,
      v13);
  }
  if ( v3 != 259 )
  {
    v7 = *(_DWORD *)(a1 + 32);
    if ( v3 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v3 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v3;
        KeBugCheckEx(0xA5u, 3uLL, 0LL, v3, 0LL);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v7, 1);
      v8 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v9 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v9;
      if ( (v9 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v9 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v8);
    }
  }
  return (unsigned int)v3;
}
