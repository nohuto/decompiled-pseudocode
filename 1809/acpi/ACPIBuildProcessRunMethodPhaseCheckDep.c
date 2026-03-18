/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001F750
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  void *v7; // rax
  void *v8; // rdx
  signed __int32 v9; // ecx
  KIRQL v10; // di
  int v11; // edx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  v3 = 0;
  memset((void *)(a1 + 88), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    if ( v13 )
    {
      AMLIDereferenceHandleEx(v13);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v14 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1346716767LL, v4, v5);
    *(_QWORD *)(a1 + 56) = v14;
    if ( v14 )
    {
      v3 = AMLIAsyncEvalObject(v14, (_SLIST_ENTRY *)(a1 + 88), 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v6 = *(_QWORD *)(v1 + 8);
  v7 = &unk_1C006E28A;
  v8 = &unk_1C006E28A;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v7 = *(void **)(v1 + 560);
    if ( (v6 & 0x400000000000LL) != 0 )
      v8 = *(void **)(v1 + 568);
  }
  v15 = (__int64)v8;
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v8,
    6,
    61,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v3,
    v1,
    (__int64)v7,
    v15);
  if ( v3 != 259 )
  {
    v9 = *(_DWORD *)(a1 + 32);
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
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v9, 1);
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v11 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v11;
      if ( (v11 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v11 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v10);
    }
  }
  return (unsigned int)v3;
}
