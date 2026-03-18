/*
 * XREFs of ObCreateObjectEx @ 0x1405D9340
 * Callers:
 *     WmipCreateGuidObject @ 0x1405C0C08 (WmipCreateGuidObject.c)
 *     EtwpAddUmRegEntry @ 0x1405D44B0 (EtwpAddUmRegEntry.c)
 *     MiFinishCreateSection @ 0x1405D74C0 (MiFinishCreateSection.c)
 *     NtCreateSemaphore @ 0x1405D7D50 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x1405D7F30 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     AlpcpCreatePort @ 0x1406489C0 (AlpcpCreatePort.c)
 *     NtCreatePrivateNamespace @ 0x140680690 (NtCreatePrivateNamespace.c)
 *     IoCreateDevice @ 0x140681110 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406822C0 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateTimer @ 0x1406842D0 (NtCreateTimer.c)
 *     NtCreateTimer2 @ 0x14068DC30 (NtCreateTimer2.c)
 *     ObCreateObject @ 0x14068E010 (ObCreateObject.c)
 *     PopCreatePowerRequestObject @ 0x14069F1D4 (PopCreatePowerRequestObject.c)
 *     NtCreateMutant @ 0x1406B6E80 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x1406C57D0 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x1406CD3F4 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406CD5C0 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x1406D92D8 (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406DEEF0 (NtAllocateReserveObject.c)
 *     NtCreateRegistryTransaction @ 0x1406E90C0 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1406E9C40 (ExCreateCallback.c)
 *     PspCreateActivityReference @ 0x1406F7910 (PspCreateActivityReference.c)
 *     MiSessionObjectCreate @ 0x14073FCC0 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     PsCreateSiloContext @ 0x14077C6E0 (PsCreateSiloContext.c)
 *     NtCreateKeyedEvent @ 0x14077CA10 (NtCreateKeyedEvent.c)
 *     PspAllocatePartition @ 0x1407830A0 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x140849330 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140856250 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408BC32C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1408C0044 (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x1408FCEB4 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C6A90 (ObpFreeObjectNameBuffer.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x1405F2D60 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F4390 (ObpCaptureObjectCreateInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     ObpRegisterObject @ 0x1408A006C (ObpRegisterObject.c)
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
