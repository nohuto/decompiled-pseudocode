/*
 * XREFs of ObCreateObjectEx @ 0x1405D9B00
 * Callers:
 *     WmipCreateGuidObject @ 0x1405C10D8 (WmipCreateGuidObject.c)
 *     EtwpAddUmRegEntry @ 0x1405D49B0 (EtwpAddUmRegEntry.c)
 *     MiFinishCreateSection @ 0x1405D7C80 (MiFinishCreateSection.c)
 *     NtCreateSemaphore @ 0x1405D8510 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x1405D86F0 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 *     NtCreateTimer @ 0x14064A240 (NtCreateTimer.c)
 *     AlpcpCreatePort @ 0x14065C630 (AlpcpCreatePort.c)
 *     NtCreateTimer2 @ 0x1406811A0 (NtCreateTimer2.c)
 *     ObCreateObject @ 0x140681580 (ObCreateObject.c)
 *     NtCreatePrivateNamespace @ 0x14069EBF0 (NtCreatePrivateNamespace.c)
 *     IoCreateDevice @ 0x14069F670 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406A0820 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateMutant @ 0x1406AA680 (NtCreateMutant.c)
 *     PopCreatePowerRequestObject @ 0x1406B3EBC (PopCreatePowerRequestObject.c)
 *     NtCreateWaitCompletionPacket @ 0x1406C4990 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x1406CC224 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406CC3F0 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x1406D8F48 (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406E0200 (NtAllocateReserveObject.c)
 *     NtCreateRegistryTransaction @ 0x1406EA4E0 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1406EAE20 (ExCreateCallback.c)
 *     PspCreateActivityReference @ 0x1406F96D0 (PspCreateActivityReference.c)
 *     MiSessionObjectCreate @ 0x140741BC0 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140755600 (IoCreateDriver.c)
 *     PsCreateSiloContext @ 0x14077F000 (PsCreateSiloContext.c)
 *     NtCreateKeyedEvent @ 0x14077F330 (NtCreateKeyedEvent.c)
 *     PspAllocatePartition @ 0x140785400 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x140848A30 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140855950 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408BBBFC (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1408BF914 (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x1408FC894 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C6F90 (ObpFreeObjectNameBuffer.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DE240 (SeReleaseSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x1405F36C0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F5310 (ObpCaptureObjectCreateInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     ObpRegisterObject @ 0x14089F8AC (ObpRegisterObject.c)
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
  __int64 v19; // r9
  int v20; // eax
  int v21; // ecx
  int Object; // edi
  __int64 v23; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  struct _KPRCB *v33; // rax
  _GENERAL_LOOKASIDE *v34; // r8
  __int64 v35; // [rsp+30h] [rbp-38h]
  __int64 v36; // [rsp+40h] [rbp-28h] BYREF
  __int64 v37; // [rsp+48h] [rbp-20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v36 = 0LL;
  v37 = 0LL;
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
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)&v36, (__int64)v16, 0);
  if ( Information >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      Object = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v20 = a7;
      if ( !a7 )
        v20 = a2[26];
      v21 = a8;
      if ( !a8 )
        v21 = a2[27];
      HIDWORD(v16[1].Next) = v20;
      v35 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v21;
      Object = ObpAllocateObject((_DWORD)v16, a4, (_DWORD)a2, (unsigned int)&v36, a6, (__int64)&a5, v35);
      if ( Object >= 0 )
      {
        v23 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v23, 1, 1u, 0x746C6644u);
        }
        *a9 = v23 + 48;
        return (unsigned int)Object;
      }
    }
    else
    {
      Object = -1073741727;
    }
    if ( v37 )
      ObpFreeObjectNameBuffer((__int64)&v36);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v18) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v18, v19);
      v16[2].Next = 0LL;
    }
    v31 = KeGetCurrentPrcb();
    v32 = v31->PPLookasideList[4].P;
    ++v32->TotalFrees;
    if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
      || (++v32->FreeMisses,
          v32 = v31->PPLookasideList[4].L,
          ++v32->TotalFrees,
          LOWORD(v32->ListHead.Alignment) < v32->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v32->ListHead, v16);
    }
    else
    {
      ++v32->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v32->FreeEx)(v16);
    }
    return (unsigned int)Object;
  }
  v33 = KeGetCurrentPrcb();
  v34 = v33->PPLookasideList[4].P;
  ++v34->TotalFrees;
  if ( LOWORD(v34->ListHead.Alignment) < v34->Depth
    || (++v34->FreeMisses,
        v34 = v33->PPLookasideList[4].L,
        ++v34->TotalFrees,
        LOWORD(v34->ListHead.Alignment) < v34->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v34->ListHead, v16);
  }
  else
  {
    ++v34->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v34->FreeEx)(v16);
  }
  return (unsigned int)Information;
}
