/*
 * XREFs of ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C0051684
 * Callers:
 *     ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C001EE60 (-DpiAcpiPowerStateCallback@@YAXPEAX00@Z.c)
 *     ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C00518F0 (-DpiAcpiEventCallback@@YAXPEAXK@Z.c)
 *     DpiAcpiDockEventCallback @ 0x1C02AC470 (DpiAcpiDockEventCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DpiAcpiCallAcpiEventHandler(PVOID Object, enum _DXGK_EVENT_TYPE a2, unsigned int a3, void *a4)
{
  __int64 v5; // rsi
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *PoolWithTag; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  _OWORD v23[5]; // [rsp+20h] [rbp-78h] BYREF

  v5 = a3;
  memset(v23, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)((char *)v23 + 8));
  v8 = 0;
  *(_QWORD *)&v23[4] = MEMORY[0xFFFFF78000000014];
  DWORD2(v23[1]) = 4;
  LOBYTE(v23[3]) = -1;
  LODWORD(v23[2]) = a2;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    ObfReferenceObject(Object);
    *((_QWORD *)PoolWithTag + 2) = Object;
    *((_DWORD *)PoolWithTag + 6) = a2;
    *((_DWORD *)PoolWithTag + 7) = v5;
    *((_QWORD *)PoolWithTag + 4) = a4;
    *(_OWORD *)(PoolWithTag + 40) = v23[0];
    *(_OWORD *)(PoolWithTag + 56) = v23[1];
    *(_OWORD *)(PoolWithTag + 72) = v23[2];
    *(_OWORD *)(PoolWithTag + 88) = v23[3];
    *((_QWORD *)PoolWithTag + 13) = *(_QWORD *)&v23[4];
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1C00A28E0);
    qword_1C00A2918 = (__int64)KeGetCurrentThread();
    v15 = (_QWORD *)qword_1C00A2928;
    if ( *(__int64 **)qword_1C00A2928 != &qword_1C00A2920 )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = &qword_1C00A2920;
    *((_QWORD *)PoolWithTag + 1) = v15;
    *v15 = PoolWithTag;
    qword_1C00A2928 = (__int64)PoolWithTag;
    if ( !IoWorkItem )
    {
      IoWorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( IoWorkItem )
      {
        v21 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v21 + 24) = v5;
        WdLogEvent5_WdEvent(v21);
        IoQueueWorkItemEx(IoWorkItem, DpiAcpiHandleAcpiEventWork, DelayedWorkQueue, 0LL);
      }
      else
      {
        v8 = -1073741670;
        v20 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
        *(_QWORD *)(v20 + 24) = -1073741670LL;
        WdLogEvent5_WdLowResource(v20);
      }
    }
    qword_1C00A2918 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1C00A28E0);
    if ( v8 < 0 )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    v8 = -1073741801;
    v14 = WdLogNewEntry5_WdLowResource(v10, v9, v12, v13);
    *(_QWORD *)(v14 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v14);
  }
  return (unsigned int)v8;
}
