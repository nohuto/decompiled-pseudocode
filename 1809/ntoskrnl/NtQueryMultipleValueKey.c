/*
 * XREFs of NtQueryMultipleValueKey @ 0x1405B8130
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCaptureKeyValueArray @ 0x1405CE130 (CmpCaptureKeyValueArray.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmQueryMultipleValueKey @ 0x1405D1194 (CmQueryMultipleValueKey.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1405D2B00 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmpBounceContextStart @ 0x1405D3F60 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1405D4F34 (CmpBounceContextCleanup.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 */

NTSTATUS __stdcall NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // r14
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // di
  int v10; // r8d
  int v11; // r9d
  NTSTATUS MultipleValueKey; // edi
  char PreviousMode; // si
  int v14; // r8d
  PULONG v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct _KTHREAD *v19; // rax
  int v20; // r9d
  int v21; // eax
  __int64 i; // r8
  __int64 v23; // rdx
  PPRIVILEGE_SET v24; // rcx
  __int64 v25; // rcx
  char v27; // [rsp+40h] [rbp-1E8h]
  char v28; // [rsp+41h] [rbp-1E7h]
  ULONG Length; // [rsp+44h] [rbp-1E4h] BYREF
  BOOLEAN Length_4; // [rsp+48h] [rbp-1E0h]
  ULONG v31; // [rsp+50h] [rbp-1D8h]
  PVOID v32; // [rsp+58h] [rbp-1D0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-1C8h] BYREF
  ULONG v34; // [rsp+68h] [rbp-1C0h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-1B8h]
  int v36; // [rsp+78h] [rbp-1B0h]
  volatile void *v37; // [rsp+80h] [rbp-1A8h]
  PVOID Object[3]; // [rsp+88h] [rbp-1A0h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-188h]
  PPRIVILEGE_SET v40; // [rsp+A8h] [rbp-180h] BYREF
  PPRIVILEGE_SET v41; // [rsp+B0h] [rbp-178h] BYREF
  _QWORD v42[2]; // [rsp+B8h] [rbp-170h] BYREF
  PVOID v43[3]; // [rsp+C8h] [rbp-160h] BYREF
  _QWORD v44[9]; // [rsp+E0h] [rbp-148h] BYREF
  LARGE_INTEGER v45[4]; // [rsp+130h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+150h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+158h] [rbp-D0h]
  char v48; // [rsp+160h] [rbp-C8h]
  _BYTE v49[48]; // [rsp+1B0h] [rbp-78h] BYREF

  v37 = ValueBuffer;
  v6 = EntryCount;
  Address = ValueEntries;
  v7 = (int)KeyHandle;
  Object[1] = ValueEntries;
  v31 = EntryCount;
  Object[2] = BufferLength;
  Length = 0;
  v34 = 0;
  memset(v45, 0, sizeof(v45));
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v45, 0x20000u);
  v27 = 0;
  v28 = 0;
  v32 = 0LL;
  memset(v44, 0, sizeof(v44));
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0;
  v42[1] = v42;
  v42[0] = v42;
  CmpInitializeThreadInfo(v43);
  Object[0] = 0LL;
  Privileges = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  Length_4 = v9;
  if ( !v9 )
  {
    MultipleValueKey = -1073741431;
LABEL_36:
    v16 = Address;
    goto LABEL_37;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v11) = PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(v7, 1, v10, v11, (__int64)&v32, 0LL);
  if ( MultipleValueKey < 0 )
    goto LABEL_36;
  if ( CmpTraceRoutine && v32 )
    v39 = *((_QWORD *)v32 + 1);
  if ( PreviousMode == 1 )
  {
    v15 = BufferLength;
    if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
      v15 = (PULONG)0x7FFFFFFF0000LL;
    Length = *v15;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    v16 = Address;
    ProbeForWrite(Address, 24 * v6, 4u);
    if ( RequiredBufferLength )
    {
      v17 = (__int64)RequiredBufferLength;
      if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
    }
    ProbeForWrite(v37, Length, 4u);
  }
  else
  {
    Length = *BufferLength;
    v16 = Address;
  }
  LOBYTE(v14) = PreviousMode;
  MultipleValueKey = CmpCaptureKeyValueArray(
                       (_DWORD)v16,
                       v6,
                       v14,
                       (unsigned int)&Privileges,
                       (__int64)&v40,
                       (__int64)&v41);
  if ( MultipleValueKey >= 0 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v28 = 1;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      v44[0] = v32;
      v44[1] = Privileges;
      LODWORD(v44[2]) = v6;
      v44[3] = v37;
      v44[4] = &Length;
      v44[5] = RequiredBufferLength;
      LOBYTE(v20) = 1;
      v21 = CmpCallCallBacksEx(9, (unsigned int)v44, 0, v20, 24, (__int64)v32, (__int64)v42);
      MultipleValueKey = v21;
      if ( v21 < 0 )
      {
        if ( v21 == -1073740541 )
          MultipleValueKey = 0;
        goto LABEL_37;
      }
      v27 = 1;
    }
    LOBYTE(v18) = PreviousMode;
    MultipleValueKey = CmKeyBodyRemapToVirtualForEnum(&v32, v18, 1LL, Object);
    if ( MultipleValueKey >= 0 )
    {
      MultipleValueKey = CmpBounceContextStart(&v46, v37, Length, (unsigned int)PreviousMode, 4);
      if ( MultipleValueKey >= 0 )
      {
        CmpAttachToRegistryProcess(v49);
        MultipleValueKey = CmQueryMultipleValueKey(
                             (_DWORD)v32,
                             Object[0],
                             (_DWORD)Privileges,
                             v6,
                             v47,
                             (__int64)&Length,
                             (__int64)&v34);
        KiUnstackDetachProcess((__int64)v49, 0LL);
        if ( RequiredBufferLength )
          *RequiredBufferLength = v34;
        if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
          CmpBounceContextCopyDataToCallerBuffer(&v46, Length);
      }
    }
  }
LABEL_37:
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v27 )
    MultipleValueKey = CmPostCallbackNotificationEx(
                         24,
                         (_DWORD)v32,
                         MultipleValueKey,
                         (unsigned int)v44,
                         0LL,
                         (__int64)v42);
  if ( Privileges )
  {
    *BufferLength = Length;
    if ( ((MultipleValueKey + 0x80000000) & 0x80000000) != 0 || MultipleValueKey == -2147483643 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v36 = i;
        if ( (unsigned int)i >= (unsigned int)v6 )
          break;
        v23 = 3 * i;
        v24 = Privileges;
        v16[2 * v23 + 2] = Privileges->Privilege[2 * i].Luid.LowPart;
        v16[2 * v23 + 3] = v24->Privilege[2 * i].Luid.HighPart;
        v16[2 * v23 + 4] = v24->Privilege[2 * i].Attributes;
      }
    }
  }
  if ( v28 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v32 )
    ObfDereferenceObject(v32);
  CmpBounceContextCleanup(&v46);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v25) = 19;
    CmpTraceRoutine(v25, v45, (unsigned int)MultipleValueKey, (unsigned int)v6, v39, 0LL);
  }
  if ( Length_4 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v40 )
    CmSiFreeMemory(v40);
  if ( v41 )
    CmSiFreeMemory(v41);
  CmCleanupThreadInfo(v43);
  return MultipleValueKey;
}
