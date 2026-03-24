/*
 * XREFs of ObCreateObjectEx @ 0x1405E05E0
 * Callers:
 *     PopCreatePowerRequestObject @ 0x140588F40 (PopCreatePowerRequestObject.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405A35A0 (IoCreateStreamFileObjectEx2.c)
 *     ObCreateObject @ 0x1405BD820 (ObCreateObject.c)
 *     EtwpAddUmRegEntry @ 0x1405C44C0 (EtwpAddUmRegEntry.c)
 *     MiFinishCreateSection @ 0x1405DE0B0 (MiFinishCreateSection.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x1405F8710 (NtCreateSemaphore.c)
 *     NtCreateJobObject @ 0x140605F80 (NtCreateJobObject.c)
 *     WmipCreateGuidObject @ 0x140611BC8 (WmipCreateGuidObject.c)
 *     AlpcpCreatePort @ 0x140614C6C (AlpcpCreatePort.c)
 *     NtCreateTimer @ 0x140623F30 (NtCreateTimer.c)
 *     NtCreateEvent @ 0x14062CF50 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x140649480 (SepDuplicateToken.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     IoCreateDevice @ 0x1406529D0 (IoCreateDevice.c)
 *     NtCreatePrivateNamespace @ 0x140654360 (NtCreatePrivateNamespace.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 *     NtCreateMutant @ 0x14065B3C0 (NtCreateMutant.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     NtCreateWorkerFactory @ 0x14068A1F0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14068A550 (NtCreateTimer2.c)
 *     NtCreateWaitCompletionPacket @ 0x1406A00D0 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x1406A62D8 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406A64A0 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x1406ADCDC (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1406B71FC (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406BDB70 (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x1406C2AF8 (EtwpRealtimeConnect.c)
 *     NtCreateRegistryTransaction @ 0x1406C7CE0 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1406CA380 (ExCreateCallback.c)
 *     PspCreateActivityReference @ 0x1406D61DC (PspCreateActivityReference.c)
 *     MiSessionObjectCreate @ 0x1407152BC (MiSessionObjectCreate.c)
 *     PsCreateSiloContext @ 0x140730CA0 (PsCreateSiloContext.c)
 *     IoCreateDriver @ 0x14073A090 (IoCreateDriver.c)
 *     NtCreateKeyedEvent @ 0x1407566A0 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x14075C380 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x14075CA48 (PspAllocatePartition.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407F28B8 (CmpDoAccessCheckOnKCB.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808C80 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreateDebugObject @ 0x14080FA50 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x14081C1E0 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x14087E80C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1408822DC (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x1408C0098 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1408C92BC (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1408D9BCC (ExpProfileCreate.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C53D0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x1402D3068 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C8FE4 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405E2910 (ObpCaptureObjectCreateInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSecurityDescriptor @ 0x140631850 (SeReleaseSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x140645A40 (ObpAllocateObject.c)
 *     ObpRegisterObject @ 0x14086360C (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        __int64 a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v16; // rbx
  int Information; // esi
  __int64 v18; // r8
  int v19; // eax
  int v20; // ecx
  int Object; // edi
  __int64 v22; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v30; // rdx
  _GENERAL_LOOKASIDE *v31; // rcx
  struct _KPRCB *v32; // rax
  _GENERAL_LOOKASIDE *v33; // r8
  __int64 v34; // [rsp+30h] [rbp-38h]
  char v35[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v36; // [rsp+48h] [rbp-20h]

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v16 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v16 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v16 )
        return 3221225626LL;
    }
  }
  LODWORD(v16->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)v35, (__int64)v16, 0);
  if ( Information >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      Object = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v19 = a7;
      if ( !a7 )
        v19 = a2[26];
      v20 = a8;
      if ( !a8 )
        v20 = a2[27];
      HIDWORD(v16[1].Next) = v19;
      v34 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v20;
      Object = ObpAllocateObject((_DWORD)v16, a4, (_DWORD)a2, (unsigned int)v35, a6, (__int64)&a5, v34);
      if ( Object >= 0 )
      {
        v22 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v22, 1, 1u, 1953261124);
        }
        *a9 = v22 + 48;
        return (unsigned int)Object;
      }
    }
    else
    {
      Object = -1073741727;
    }
    if ( v36 )
      ObpFreeObjectNameBuffer((__int64)v35);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v18) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v18);
      v16[2].Next = 0LL;
    }
    v30 = KeGetCurrentPrcb();
    v31 = v30->PPLookasideList[4].P;
    ++v31->TotalFrees;
    if ( LOWORD(v31->ListHead.Alignment) < v31->Depth
      || (++v31->FreeMisses,
          v31 = v30->PPLookasideList[4].L,
          ++v31->TotalFrees,
          LOWORD(v31->ListHead.Alignment) < v31->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v31->ListHead, v16);
    }
    else
    {
      ++v31->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v31->FreeEx)(v16);
    }
    return (unsigned int)Object;
  }
  v32 = KeGetCurrentPrcb();
  v33 = v32->PPLookasideList[4].P;
  ++v33->TotalFrees;
  if ( LOWORD(v33->ListHead.Alignment) < v33->Depth
    || (++v33->FreeMisses,
        v33 = v32->PPLookasideList[4].L,
        ++v33->TotalFrees,
        LOWORD(v33->ListHead.Alignment) < v33->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v33->ListHead, v16);
  }
  else
  {
    ++v33->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v33->FreeEx)(v16);
  }
  return (unsigned int)Information;
}
