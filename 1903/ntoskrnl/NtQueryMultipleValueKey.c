/*
 * XREFs of NtQueryMultipleValueKey @ 0x14063B060
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F5C0 (ExIsResourceAcquiredSharedLite.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010A0C0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmpBounceContextCleanup @ 0x1405FE050 (CmpBounceContextCleanup.c)
 *     CmObReferenceObjectByHandle @ 0x1405FE0E0 (CmObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FE180 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextStart @ 0x1405FE880 (CmpBounceContextStart.c)
 *     CmPostCallbackNotification @ 0x1405FECFC (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1405FEDC8 (CmpCallCallBacks.c)
 *     CmQueryMultipleValueKey @ 0x140630040 (CmQueryMultipleValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14063AD8C (CmpCaptureKeyValueArray.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x14064E780 (CmpBounceContextCopyDataToCallerBuffer.c)
 */

NTSTATUS __stdcall NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // rsi
  __int64 v9; // r8
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // edi
  PULONG v12; // rax
  SIZE_T v13; // rdi
  __int64 v14; // rcx
  SIZE_T v15; // rdx
  volatile void *v16; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // r10d
  __int64 i; // r9
  __int64 v22; // r8
  PPRIVILEGE_SET v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rcx
  char v27; // [rsp+40h] [rbp-1B8h]
  char v28; // [rsp+41h] [rbp-1B7h]
  char v29; // [rsp+42h] [rbp-1B6h]
  unsigned int v30[3]; // [rsp+44h] [rbp-1B4h] BYREF
  PVOID Object; // [rsp+50h] [rbp-1A8h] BYREF
  ULONG v32; // [rsp+58h] [rbp-1A0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-198h]
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-190h] BYREF
  int v35; // [rsp+70h] [rbp-188h]
  PVOID v36; // [rsp+78h] [rbp-180h] BYREF
  __int64 v37; // [rsp+80h] [rbp-178h]
  PPRIVILEGE_SET v38; // [rsp+88h] [rbp-170h] BYREF
  _QWORD v39[4]; // [rsp+90h] [rbp-168h] BYREF
  _QWORD v40[10]; // [rsp+B0h] [rbp-148h] BYREF
  LARGE_INTEGER v41[4]; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE v42[48]; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v43[12]; // [rsp+150h] [rbp-A8h] BYREF

  Address = ValueBuffer;
  v6 = EntryCount;
  v39[2] = ValueEntries;
  v30[1] = EntryCount;
  v32 = 0;
  memset(v42, 0, sizeof(v42));
  memset(v43, 0, 0x58uLL);
  memset(v41, 0, sizeof(v41));
  v37 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v41, 0x20000u);
  v27 = 0;
  v28 = 0;
  Object = 0LL;
  memset(v40, 0, 0x48uLL);
  v39[1] = v39;
  v39[0] = v39;
  v36 = 0LL;
  Privileges = 0LL;
  v38 = 0LL;
  v29 = CmpAcquireShutdownRundown();
  if ( !v29 )
  {
    v11 = -1073741431;
    goto LABEL_31;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = CmObReferenceObjectByHandle(KeyHandle, 1u, v9, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_31;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && Object )
    v37 = *((_QWORD *)Object + 1);
  if ( PreviousMode == 1 )
  {
    v12 = BufferLength;
    if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
      v12 = (PULONG)0x7FFFFFFF0000LL;
    v13 = *v12;
    v30[0] = *v12;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    ProbeForWrite(ValueEntries, 24 * v6, 4u);
    if ( RequiredBufferLength )
    {
      v14 = (__int64)RequiredBufferLength;
      if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    v15 = v13;
    v16 = Address;
    ProbeForWrite(Address, v15, 4u);
  }
  else
  {
    v30[0] = *BufferLength;
    v16 = Address;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    goto LABEL_21;
  v40[0] = Object;
  v40[1] = ValueEntries;
  LODWORD(v40[2]) = v6;
  v40[3] = v16;
  v40[4] = BufferLength;
  v40[5] = RequiredBufferLength;
  v19 = CmpCallCallBacks(9u, (__int64)v40, v18, 0x18u, (__int64)Object, (__int64)v39);
  v11 = v19;
  if ( v19 >= 0 )
  {
    v27 = 1;
LABEL_21:
    v11 = CmKeyBodyRemapToVirtualForEnum(&Object, PreviousMode, 1, &v36);
    if ( v11 >= 0 )
    {
      v11 = CmpCaptureKeyValueArray((__int64)ValueEntries, v6, PreviousMode, &Privileges, &v38);
      if ( v11 >= 0 )
      {
        v11 = CmpBounceContextStart((__int64)v43, (void *)Address, v30[0], (unsigned int)PreviousMode, 4);
        if ( v11 >= 0 )
        {
          CmpAttachToRegistryProcess((__int64)v42);
          v11 = CmQueryMultipleValueKey((__int64)Object, (__int64)v36, (__int64)Privileges, v6, v43[1], v30, &v32);
          LODWORD(Address) = v11;
          CmpDetachFromRegistryProcess((struct _KTHREAD *)v42);
          v20 = v30[0];
          *BufferLength = v30[0];
          if ( RequiredBufferLength )
            *RequiredBufferLength = v32;
          if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v35 = i;
              if ( (unsigned int)i >= (unsigned int)v6 )
                break;
              v22 = 32LL * (unsigned int)i;
              v23 = Privileges;
              v24 = i;
              ValueEntries[v24].DataLength = *(ULONG *)((char *)&Privileges->Privilege[0].Attributes + v22);
              ValueEntries[v24].DataOffset = *(ULONG *)((char *)&v23[1].PrivilegeCount + v22);
              ValueEntries[v24].Type = *(ULONG *)((char *)&v23[1].Control + v22);
            }
            CmpBounceContextCopyDataToCallerBuffer(v43, v20);
          }
        }
      }
    }
    goto LABEL_31;
  }
  if ( v19 == -1073740541 )
    v11 = 0;
LABEL_31:
  if ( v36 )
    ObfDereferenceObject(v36);
  if ( v27 )
    v11 = CmPostCallbackNotification(0x18u, (__int64)Object, v11, (__int64)v40, v39);
  if ( v28 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  CmpBounceContextCleanup((__int64)v43);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v26 = v37;
    LOBYTE(v26) = 19;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v26,
      v41,
      (unsigned int)v11,
      (unsigned int)v6,
      v37,
      0LL);
  }
  if ( v29 )
    CmpReleaseShutdownRundown();
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v38 )
    CmSiFreeMemory(v38);
  return v11;
}
