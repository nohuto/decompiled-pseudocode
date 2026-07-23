/*
 * XREFs of NtQueryValueKey @ 0x140641360
 * Callers:
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D6738 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x1409DF514 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x1409F4348 (InitSafeBoot.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpIsBufferGloballyVisible @ 0x1405E0288 (CmpIsBufferGloballyVisible.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  KEY_VALUE_INFORMATION_CLASS v7; // r13d
  ULONG v10; // r12d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v12; // bl
  NTSTATUS v13; // ebx
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rcx
  bool v16; // zf
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v18; // rcx
  int v19; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v21; // rdx
  PULONG v22; // r14
  unsigned __int16 v23; // bx
  const void *v24; // rdi
  struct _KTHREAD *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG v30; // edx
  char v31; // cl
  PSLIST_ENTRY v32; // rdi
  PVOID TransientPoolWithQuotaTag; // rax
  void *v34; // rdi
  int ValueKey; // eax
  int v36; // eax
  ULONG v37; // eax
  UNICODE_STRING *v38; // rcx
  struct _KTHREAD *v39; // rcx
  int v41; // [rsp+40h] [rbp-2E8h]
  char v42; // [rsp+44h] [rbp-2E4h]
  char v43; // [rsp+45h] [rbp-2E3h]
  char v45; // [rsp+4Ch] [rbp-2DCh] BYREF
  BOOLEAN v46; // [rsp+4Dh] [rbp-2DBh]
  __int64 v47; // [rsp+50h] [rbp-2D8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-2C8h] BYREF
  size_t Size; // [rsp+70h] [rbp-2B8h] BYREF
  PVOID v50; // [rsp+78h] [rbp-2B0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-2A8h]
  KEY_VALUE_INFORMATION_CLASS v52; // [rsp+88h] [rbp-2A0h]
  __int64 v53; // [rsp+90h] [rbp-298h]
  PVOID v54; // [rsp+98h] [rbp-290h] BYREF
  _SLIST_ENTRY v55; // [rsp+A0h] [rbp-288h] BYREF
  PULONG v56; // [rsp+B0h] [rbp-278h]
  PVOID v57; // [rsp+B8h] [rbp-270h]
  __int64 v58; // [rsp+C0h] [rbp-268h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-260h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-258h] BYREF
  PVOID v61[3]; // [rsp+D8h] [rbp-250h] BYREF
  _QWORD v62[3]; // [rsp+F0h] [rbp-238h] BYREF
  __int64 v63; // [rsp+108h] [rbp-220h]
  __int64 v64; // [rsp+110h] [rbp-218h]
  __int64 v65; // [rsp+118h] [rbp-210h]
  __int64 v66; // [rsp+120h] [rbp-208h]
  PVOID v67; // [rsp+130h] [rbp-1F8h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+138h] [rbp-1F0h]
  __int64 v69; // [rsp+140h] [rbp-1E8h]
  PVOID v70; // [rsp+148h] [rbp-1E0h]
  __int64 v71; // [rsp+150h] [rbp-1D8h]
  PULONG v72; // [rsp+158h] [rbp-1D0h]
  __int64 v73; // [rsp+160h] [rbp-1C8h]
  __int64 v74; // [rsp+168h] [rbp-1C0h]
  __int64 v75; // [rsp+170h] [rbp-1B8h]
  UNICODE_STRING v76; // [rsp+180h] [rbp-1A8h]
  UNICODE_STRING v77; // [rsp+190h] [rbp-198h] BYREF
  UNICODE_STRING v78; // [rsp+1A0h] [rbp-188h] BYREF
  PVOID v79[4]; // [rsp+1B0h] [rbp-178h] BYREF
  void *v80; // [rsp+1D0h] [rbp-158h]
  void *Src; // [rsp+1D8h] [rbp-150h]
  char v82; // [rsp+1E0h] [rbp-148h]
  _BYTE v83[79]; // [rsp+1E1h] [rbp-147h] BYREF
  LARGE_INTEGER v84[4]; // [rsp+230h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+250h] [rbp-D8h] BYREF
  __int64 *v86; // [rsp+270h] [rbp-B8h]
  __int64 v87; // [rsp+278h] [rbp-B0h]
  char *v88; // [rsp+280h] [rbp-A8h]
  __int64 v89; // [rsp+288h] [rbp-A0h]
  __int64 *v90; // [rsp+290h] [rbp-98h]
  __int64 v91; // [rsp+298h] [rbp-90h]
  _BYTE v92[64]; // [rsp+2A0h] [rbp-88h] BYREF

  v7 = KeyValueInformationClass;
  v10 = Length;
  v52 = KeyValueInformationClass;
  v56 = ResultLength;
  memset(v84, 0, sizeof(v84));
  v47 = 0LL;
  v53 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v84, 0x20000u);
  v42 = 0;
  v43 = 0;
  v50 = 0LL;
  LODWORD(Size) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  v67 = 0LL;
  p_DestinationString = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v80 = 0LL;
  Src = 0LL;
  v82 = 0;
  *((_QWORD *)&v55.Next + 1) = &v55;
  v55.Next = &v55;
  CmpInitializeThreadInfo(v79);
  v54 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v46 = v12;
  if ( !v12 )
  {
    v13 = -1073741431;
    v41 = -1073741431;
    v14 = 0LL;
    goto LABEL_14;
  }
  if ( (unsigned int)v7 > KeyValuePartialInformationAlign64 )
  {
    if ( CmpTraceRoutine
      && KeyHandle
      && ObReferenceObjectByHandle(
           KeyHandle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL) >= 0 )
    {
      v47 = *((_QWORD *)Object + 1);
      ObfDereferenceObject(Object);
    }
    v13 = -1073741811;
    v41 = -1073741811;
    goto LABEL_13;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v79[2] = 0LL;
  v13 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, v61, 0LL);
  v18 = (__int64)v61[0];
  v57 = v61[0];
  if ( v13 >= 0 )
  {
    if ( *(_DWORD *)v61[0] == 1803104306 )
    {
      v50 = v61[0];
      v18 = 0LL;
      v57 = 0LL;
      v13 = 0;
    }
    else
    {
      v13 = -1073741816;
    }
  }
  if ( v18 )
    ObfDereferenceObject((PVOID)v18);
  v41 = v13;
  if ( v13 < 0 )
  {
    v14 = 0LL;
    v7 = KeyValueInformationClass;
    goto LABEL_14;
  }
  if ( CmpTraceRoutine )
  {
    v18 = (__int64)v50;
    if ( v50 )
    {
      v47 = *((_QWORD *)v50 + 1);
      v53 = v47;
    }
  }
  if ( PreviousMode == 1 )
  {
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v19 = *(_DWORD *)&ValueName->Length;
    *(_DWORD *)&v76.Length = v19;
    Buffer = ValueName->Buffer;
    v76.Buffer = Buffer;
    DestinationString = v76;
    if ( (_WORD)v19 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (unsigned __int64)Buffer + (unsigned __int16)v19;
      if ( v21 > 0x7FFFFFFF0000LL || v21 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
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
    v22 = v56;
    v18 = (__int64)v56;
    if ( (unsigned __int64)v56 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  else
  {
    DestinationString = *ValueName;
    v22 = v56;
  }
  v23 = DestinationString.Length;
  DestinationString.MaximumLength = DestinationString.Length;
  v24 = DestinationString.Buffer;
  if ( PreviousMode || qword_140438CE8 && !CmpIsBufferGloballyVisible((unsigned __int64)DestinationString.Buffer) )
  {
    if ( v23 )
    {
      if ( v23 > 0x40u )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v18, v23, 0x6E764D43u);
        if ( !Privileges )
        {
          v13 = -1073741670;
          v41 = -1073741670;
          v14 = v47;
          v7 = KeyValueInformationClass;
          goto LABEL_14;
        }
        v24 = DestinationString.Buffer;
        v23 = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v92;
      }
      if ( Privileges )
      {
        memmove(Privileges, v24, v23);
        v23 = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    v24 = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (DestinationString.Length & 1) != 0 )
  {
    v13 = -1073741811;
    v41 = -1073741811;
    v14 = v47;
    v7 = KeyValueInformationClass;
    goto LABEL_14;
  }
  while ( v23 && !*((_WORD *)v24 + ((unsigned __int64)v23 >> 1) - 1) )
  {
    v23 -= 2;
    DestinationString.Length = v23;
  }
  v25 = KeGetCurrentThread();
  --v25->KernelApcDisable;
  v43 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    v67 = v50;
    p_DestinationString = &DestinationString;
    LODWORD(v69) = KeyValueInformationClass;
    v70 = KeyValueInformation;
    LODWORD(v71) = Length;
    v72 = v22;
    v26 = CmpCallCallBacksEx(8u, (__int64)&v67, 0LL, 1, 0x17u, (__int64)v50, &v55);
    v13 = v26;
    v41 = v26;
    if ( v26 < 0 )
    {
      v14 = v47;
      v7 = KeyValueInformationClass;
      if ( v26 == -1073740541 )
      {
        v13 = 0;
        v41 = 0;
      }
      goto LABEL_14;
    }
    v42 = 1;
  }
  v13 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&v50, PreviousMode, 1u, &v54);
  v41 = v13;
  if ( v13 < 0 )
    goto LABEL_128;
  v80 = KeyValueInformation;
  if ( Length )
  {
    if ( qword_140438CE8 && (PreviousMode || !CmpIsBufferGloballyVisible((unsigned __int64)KeyValueInformation)) )
    {
      if ( stru_140400AA0.LevelPlus1 > 5
        && (stru_140400AA0.KeywordAny & 4) != 0
        && (stru_140400AA0.KeywordAll & 4) == stru_140400AA0.KeywordAll )
      {
        v58 = 1LL;
        v45 = 3;
        v30 = Length;
        if ( ((Length - 1) & Length) != 0 )
        {
          v31 = -1;
          do
          {
            ++v31;
            v30 >>= 1;
          }
          while ( v30 );
          v30 = 1 << (v31 + 1);
        }
        v59 = v30;
        v86 = &v58;
        v87 = 8LL;
        v88 = &v45;
        v89 = 1LL;
        v90 = &v59;
        v91 = 8LL;
        TlgWriteAgg((__int64)&stru_140400AA0, (unsigned __int8 *)dword_14036D110, v28, v29, 5u, &v85);
      }
      if ( Length > 0x40uLL )
      {
        if ( Length > 0x1000uLL )
          goto LABEL_108;
        ++dword_1404C7BD4;
        v32 = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
        if ( !v32 )
        {
          ++dword_1404C7BD8;
          v32 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_1404C7BF0)(
                                (unsigned int)dword_1404C7BE4,
                                (unsigned int)dword_1404C7BEC,
                                (unsigned int)dword_1404C7BE8,
                                &CmpBounceBufferLookaside);
        }
        if ( v32 )
        {
          memset(v32, 0, Length);
          v82 |= 1u;
          Src = v32;
        }
        else
        {
LABEL_108:
          TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v27, Length, 0x42424D43u);
          v34 = TransientPoolWithQuotaTag;
          if ( !TransientPoolWithQuotaTag )
          {
            v13 = -1073741670;
            goto LABEL_113;
          }
          memset(TransientPoolWithQuotaTag, 0, Length);
          Src = v34;
        }
      }
      else
      {
        memset(v83, 0, Length);
        Src = v83;
      }
    }
    else
    {
      Src = KeyValueInformation;
    }
  }
  else
  {
    Src = 0LL;
  }
  v13 = 0;
LABEL_113:
  v41 = v13;
  if ( v13 < 0 )
  {
LABEL_128:
    v7 = KeyValueInformationClass;
    goto LABEL_13;
  }
  v7 = KeyValueInformationClass;
  if ( v54 )
  {
    v77 = DestinationString;
    ValueKey = CmQueryValueKey(
                 (_DWORD)v54,
                 (unsigned int)&v77,
                 KeyValueInformationClass,
                 (_DWORD)Src,
                 Length,
                 (__int64)&Size);
    v13 = ValueKey;
    v41 = ValueKey;
    if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
      goto LABEL_122;
    if ( ValueKey != -1073741772 )
      goto LABEL_13;
  }
  v78 = DestinationString;
  v36 = CmQueryValueKey((_DWORD)v50, (unsigned int)&v78, KeyValueInformationClass, (_DWORD)Src, Length, (__int64)&Size);
  v13 = v36;
  v41 = v36;
  if ( v36 < 0 && v36 != -1073741789 && v36 != -2147483643 )
  {
LABEL_13:
    v14 = v47;
    goto LABEL_14;
  }
LABEL_122:
  v37 = Size;
  *v22 = Size;
  if ( v13 != -1073741789 )
  {
    if ( v37 < Length )
      v10 = v37;
    if ( v80 != Src )
      memmove(v80, Src, v10);
  }
  v14 = v47;
LABEL_14:
  if ( v54 )
    ObfDereferenceObject(v54);
  if ( v42 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && v55.Next != &v55 )
    {
      v64 = 0LL;
      v65 = 0LL;
      v66 = 0LL;
      v62[0] = v50;
      v62[1] = (unsigned int)v13;
      v63 = (unsigned int)v13;
      v62[2] = &v67;
      v61[1] = v62;
      v61[2] = 0LL;
      CmpCallCallBacksEx(0x17u, (__int64)v62, 0LL, 0, 0x17u, (__int64)v50, &v55);
      v13 = v63;
    }
    v41 = v13;
  }
  if ( v43 )
  {
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable++ == -1;
    if ( v16
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v15);
    }
    v13 = v41;
  }
  if ( v50 )
    ObfDereferenceObject(v50);
  if ( Src && Src != v80 && Src != v83 )
  {
    if ( (v82 & 1) != 0 )
    {
      ++dword_1404C7BDC;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) < (unsigned __int16)word_1404C7BD0 )
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src);
      }
      else
      {
        ++dword_1404C7BE0;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_1404C7BF8)(Src, &CmpBounceBufferLookaside);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src);
    }
  }
  if ( CmpTraceRoutine )
  {
    v38 = &DestinationString;
    LOBYTE(v38) = 16;
    CmpTraceRoutine(v38, v84, (unsigned int)v13, (unsigned int)v7, v14, &DestinationString);
  }
  if ( Privileges && Privileges != (PPRIVILEGE_SET)v92 )
    CmSiFreeMemory(Privileges);
  if ( v46 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v39 = KeGetCurrentThread();
    v16 = v39->KernelApcDisable++ == -1;
    if ( v16
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
      && !v39->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v39);
    }
    v13 = v41;
  }
  CmCleanupThreadInfo(v79);
  return v13;
}
