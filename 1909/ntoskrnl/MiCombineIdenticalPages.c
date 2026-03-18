/*
 * XREFs of MiCombineIdenticalPages @ 0x1406F8B84
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     MmManagePartitionCombineMemory @ 0x14089C66C (MmManagePartitionCombineMemory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x1400BAD8C (MiGetNextPageColor.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiCreateUltraThreadContext @ 0x1400F8D40 (MiCreateUltraThreadContext.c)
 *     MiDeleteUltraThreadContext @ 0x1400F92EC (MiDeleteUltraThreadContext.c)
 *     MiCombiningInProgress @ 0x140144254 (MiCombiningInProgress.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiCombineWorkingSet @ 0x1402E5F90 (MiCombineWorkingSet.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 */

__int64 __fastcall MiCombineIdenticalPages(
        ULONG_PTR *a1,
        void *a2,
        int a3,
        void *a4,
        KPROCESSOR_MODE AccessMode,
        _QWORD *a6)
{
  PVOID v9; // r15
  char *v10; // rsi
  __int64 v11; // rax
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR *v15; // rdi
  unsigned int NextPageColor; // eax
  unsigned int v17; // eax
  NTSTATUS v19; // eax
  _DWORD v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v22; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR *v23; // [rsp+48h] [rbp-B8h]
  _QWORD *v24; // [rsp+50h] [rbp-B0h]
  _QWORD v25[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v27[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[30]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v29[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v30[48]; // [rsp+1E0h] [rbp+E0h] BYREF

  v23 = a1;
  v24 = a6;
  memset(v27, 0, sizeof(v27));
  memset(v29, 0, sizeof(v29));
  memset(v28, 0, sizeof(v28));
  memset(v30, 0, sizeof(v30));
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741583;
  v11 = -1LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a4 )
      v11 = (__int64)a4;
    a4 = (void *)v11;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_140571188 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (v12 = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL),
        v9 = Object,
        v13 = v12,
        v12 >= 0) )
  {
    if ( a4 )
    {
      v19 = ObReferenceObjectByHandle(a4, 0x18u, (POBJECT_TYPE)PsProcessType, AccessMode, &v22, 0LL);
      v10 = (char *)v22;
      v13 = v19;
      if ( v19 < 0 )
      {
LABEL_14:
        if ( v10 )
        {
          KiUnstackDetachProcess((struct _KTHREAD *)v30, 0);
          ObfDereferenceObject(v10);
        }
        goto LABEL_16;
      }
      KiStackAttachProcess((_KPROCESS *)v22, 0, (__int64)v30);
    }
    CurrentThread = KeGetCurrentThread();
    v15 = v23 + 925;
    if ( (a3 & 1) == 0 || v23 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v15, v27, 1);
      v20[0] = 0;
      v20[1] = -1;
      v26[0] = qword_140466578;
      v26[1] = qword_140466580;
      v28[5] = v26;
      v28[6] = v20;
      v28[2] = v27;
      v28[3] = v29;
      LODWORD(v28[7]) = 2;
      v28[0] = v15;
      v28[1] = v9;
      HIDWORD(v28[7]) = a3;
      v25[0] = 0LL;
      v25[1] = 0LL;
      MiInitializePageColorBase((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6], 0, (__int64)v25);
      NextPageColor = MiGetNextPageColor((__int64)v25);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)&v28[14], NextPageColor, 8) )
      {
        if ( (a3 & 2) != 0 )
        {
          v28[4] = v10 + 1280;
          v17 = MiCombineWorkingSet((__int64)v28);
        }
        else
        {
          v28[4] = 0LL;
          v17 = MiCombineAllPhysicalMemory((__int64)v28);
        }
        v13 = v17;
        MiDeleteUltraThreadContext((__int64)&v28[14]);
        *v24 = v29[0];
        _InterlockedIncrement((volatile signed __int32 *)v15 + 96);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 47, v29[1]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 45, v29[2]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 46, v29[3]);
      }
      else
      {
        v13 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)v15, v27, 0);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      v13 = -1073741637;
    }
    goto LABEL_14;
  }
LABEL_16:
  if ( v9 )
    ObfDereferenceObject(v9);
  return v13;
}
