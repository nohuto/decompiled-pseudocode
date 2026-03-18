/*
 * XREFs of NtQueryValueKey @ 0x1405FD5A0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406E4930 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A3AC (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A21504 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140A38740 (InitSafeBoot.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F5C0 (ExIsResourceAcquiredSharedLite.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008BCF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010A0C0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     CmQueryValueKey @ 0x1405FD190 (CmQueryValueKey.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmpBounceContextCleanup @ 0x1405FE050 (CmpBounceContextCleanup.c)
 *     CmObReferenceObjectByHandle @ 0x1405FE0E0 (CmObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FE180 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextStart @ 0x1405FE880 (CmpBounceContextStart.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405FE9C0 (CmpDoesBufferRequireCapturing.c)
 *     CmPostCallbackNotification @ 0x1405FECFC (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1405FEDC8 (CmpCallCallBacks.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x14064E780 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  int v10; // r8d
  char v11; // r13
  char PreviousMode; // r14
  NTSTATUS v13; // ebx
  int v14; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v16; // rdx
  ULONG v17; // esi
  __int64 v18; // rcx
  unsigned __int16 v19; // bx
  const void *v20; // rdi
  __int64 v21; // rcx
  KEY_VALUE_INFORMATION_CLASS v22; // edi
  __int64 v23; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v25; // r8d
  int v26; // eax
  int v27; // eax
  ULONG v28; // eax
  int ValueKey; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  char v32; // [rsp+41h] [rbp-1F7h]
  char v33; // [rsp+42h] [rbp-1F6h]
  __int64 v35; // [rsp+48h] [rbp-1F0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1E8h] BYREF
  ULONG v37; // [rsp+60h] [rbp-1D8h] BYREF
  int v38; // [rsp+64h] [rbp-1D4h]
  PVOID Object; // [rsp+68h] [rbp-1D0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-1C8h]
  KEY_VALUE_INFORMATION_CLASS v41; // [rsp+78h] [rbp-1C0h]
  __int64 v42; // [rsp+80h] [rbp-1B8h]
  PVOID v43; // [rsp+88h] [rbp-1B0h] BYREF
  __int128 v44; // [rsp+90h] [rbp-1A8h] BYREF
  UNICODE_STRING v45; // [rsp+A0h] [rbp-198h]
  PVOID v46; // [rsp+B0h] [rbp-188h] BYREF
  UNICODE_STRING v47; // [rsp+C0h] [rbp-178h] BYREF
  UNICODE_STRING v48; // [rsp+D0h] [rbp-168h] BYREF
  _QWORD v49[9]; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v50; // [rsp+130h] [rbp-108h] BYREF
  size_t v51; // [rsp+138h] [rbp-100h]
  char v52; // [rsp+140h] [rbp-F8h]
  _BYTE v53[71]; // [rsp+141h] [rbp-F7h] BYREF
  LARGE_INTEGER v54[4]; // [rsp+190h] [rbp-A8h] BYREF
  _BYTE v55[64]; // [rsp+1B0h] [rbp-88h] BYREF

  v41 = KeyValueInformationClass;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v44 = 0LL;
  memset(v53, 0, sizeof(v53));
  memset(v54, 0, sizeof(v54));
  v35 = 0LL;
  v42 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v54, 0x20000u);
  v32 = 0;
  v33 = 0;
  Object = 0LL;
  v37 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v49, 0, sizeof(v49));
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0;
  *((_QWORD *)&v44 + 1) = &v44;
  *(_QWORD *)&v44 = &v44;
  v43 = 0LL;
  v11 = CmpAcquireShutdownRundown();
  if ( !v11 )
  {
    v13 = -1073741431;
    v22 = KeyValueInformationClass;
    v23 = 0LL;
    goto LABEL_59;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformationAlign64 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && ObReferenceObjectByHandle(
           KeyHandle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v46,
           0LL) >= 0 )
    {
      v23 = *((_QWORD *)v46 + 1);
      ObfDereferenceObject(v46);
    }
    else
    {
      v23 = 0LL;
    }
    v13 = -1073741811;
    v22 = KeyValueInformationClass;
    goto LABEL_59;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = CmObReferenceObjectByHandle((int)KeyHandle, 1, v10, (unsigned __int8)PreviousMode, (__int64)&Object, 0LL);
  v38 = v13;
  if ( v13 < 0 )
  {
    v22 = KeyValueInformationClass;
    goto LABEL_53;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && Object )
  {
    v35 = *((_QWORD *)Object + 1);
    v42 = v35;
  }
  if ( PreviousMode == 1 )
  {
    v45 = (UNICODE_STRING)0LL;
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v14 = *(_DWORD *)&ValueName->Length;
    *(_DWORD *)&v45.Length = v14;
    Buffer = ValueName->Buffer;
    v45.Buffer = Buffer;
    DestinationString = v45;
    if ( (_WORD)v14 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (unsigned __int64)Buffer + (unsigned __int16)v14;
      if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v17 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
        || (char *)KeyValueInformation + Length < KeyValueInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v18 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  else
  {
    DestinationString = *ValueName;
    v17 = Length;
  }
  v19 = DestinationString.Length;
  DestinationString.MaximumLength = DestinationString.Length;
  v20 = DestinationString.Buffer;
  if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)PreviousMode, DestinationString.Buffer) )
  {
    if ( v19 )
    {
      if ( v19 > 0x40u )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v21, v19, 0x6E764D43u);
        if ( !Privileges )
        {
          v13 = -1073741670;
          v38 = -1073741670;
          v22 = KeyValueInformationClass;
          v23 = v35;
          goto LABEL_59;
        }
        v20 = DestinationString.Buffer;
        v19 = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v55;
      }
      if ( Privileges )
      {
        memmove(Privileges, v20, v19);
        v19 = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    v20 = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (DestinationString.Length & 1) != 0 )
  {
    v13 = -1073741811;
    v38 = -1073741811;
    v22 = KeyValueInformationClass;
    v23 = v35;
    goto LABEL_59;
  }
  while ( v19 && !*((_WORD *)v20 + ((unsigned __int64)v19 >> 1) - 1) )
  {
    v19 -= 2;
    DestinationString.Length = v19;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v33 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v22 = KeyValueInformationClass;
LABEL_47:
    v13 = CmKeyBodyRemapToVirtualForEnum(&Object, (unsigned __int8)PreviousMode, 1LL, &v43);
    if ( v13 < 0 )
      goto LABEL_53;
    v13 = CmpBounceContextStart(&v50, KeyValueInformation, v17, (unsigned int)PreviousMode, 3);
    if ( v13 < 0 )
      goto LABEL_53;
    if ( !v43 )
      goto LABEL_50;
    v47 = DestinationString;
    ValueKey = CmQueryValueKey((__int64)v43, (int)&v47, v22, v51, v17, (__int64)&v37);
    v13 = ValueKey;
    if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
    {
LABEL_54:
      v28 = v37;
      *ResultLength = v37;
      if ( v13 != -1073741789 )
      {
        if ( v28 < v17 )
          v17 = v28;
        CmpBounceContextCopyDataToCallerBuffer(&v50, v17);
      }
      v23 = v35;
      goto LABEL_59;
    }
    if ( ValueKey == -1073741772 )
    {
LABEL_50:
      v48 = DestinationString;
      v27 = CmQueryValueKey((__int64)Object, (int)&v48, v22, v51, v17, (__int64)&v37);
      v13 = v27;
      if ( v27 < 0 && v27 != -2147483643 && v27 != -1073741789 )
        goto LABEL_53;
      goto LABEL_54;
    }
LABEL_53:
    v23 = v35;
    goto LABEL_59;
  }
  v49[0] = Object;
  v49[1] = &DestinationString;
  v22 = KeyValueInformationClass;
  LODWORD(v49[2]) = KeyValueInformationClass;
  v49[3] = KeyValueInformation;
  LODWORD(v49[4]) = v17;
  v49[5] = ResultLength;
  v26 = CmpCallCallBacks(8, (unsigned int)v49, v25, 23, (__int64)Object, (__int64)&v44);
  v13 = v26;
  if ( v26 >= 0 )
  {
    v32 = 1;
    goto LABEL_47;
  }
  v23 = v35;
  if ( v26 == -1073740541 )
    v13 = 0;
LABEL_59:
  if ( v43 )
    ObfDereferenceObject(v43);
  if ( v32 )
    v13 = CmPostCallbackNotification(23, (_DWORD)Object, v13, (unsigned int)v49, (__int64)&v44);
  if ( v33 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  CmpBounceContextCleanup(&v50);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    (*(void (__fastcall **)(UNICODE_STRING *, LARGE_INTEGER *, _QWORD, _QWORD, __int64, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
      p_DestinationString,
      v54,
      (unsigned int)v13,
      (unsigned int)v22,
      v23,
      &DestinationString);
  }
  if ( Privileges && Privileges != (PPRIVILEGE_SET)v55 )
    CmSiFreeMemory(Privileges);
  if ( v11 )
    CmpReleaseShutdownRundown();
  return v13;
}
