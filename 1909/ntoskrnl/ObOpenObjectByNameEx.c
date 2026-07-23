/*
 * XREFs of ObOpenObjectByNameEx @ 0x1405F5850
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140299760 (IoRevokeHandlesForProcess.c)
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 *     NtQueryFullAttributesFile @ 0x140618760 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x140618CB0 (IopCreateFile.c)
 *     CmCreateKey @ 0x14063E600 (CmCreateKey.c)
 *     NtQueryAttributesFile @ 0x1406B48B0 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1406B6850 (NtOpenSymbolicLinkObject.c)
 *     NtOpenSection @ 0x1406C0210 (NtOpenSection.c)
 *     NtDeleteFile @ 0x1406F0760 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x140855C60 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x14085658C (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14003ABA0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     SeSetLearningModeObjectInformation @ 0x14003B450 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14003B480 (SeClearLearningModeObjectInformation.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PsDereferenceSiloContext @ 0x14012E7D0 (PsDereferenceSiloContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x1405D7690 (RtlValidSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DE240 (SeReleaseSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F5310 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     ObpDeleteNameCheck @ 0x14063F4B0 (ObpDeleteNameCheck.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406D3AF0 (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v14; // rbx
  int Information; // esi
  void *v16; // r15
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *p_Lock; // r14
  _QWORD *v19; // r15
  ULONG_PTR v20; // rsi
  _SLIST_ENTRY *Next; // rsi
  _SLIST_ENTRY *v22; // r14
  void *v23; // rcx
  void *v24; // r15
  __int64 v25; // r14
  __int64 v26; // rdx
  void *v27; // rcx
  struct _KPRCB *v28; // r8
  _GENERAL_LOOKASIDE *v29; // rcx
  int v30; // r14d
  __int64 v31; // r14
  void *v32; // rcx
  _SLIST_ENTRY *v33; // rcx
  _SLIST_ENTRY *v34; // r8
  struct _KPRCB *v35; // rdx
  _GENERAL_LOOKASIDE *v36; // rcx
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // rcx
  _SLIST_ENTRY *v40; // rcx
  __int64 v41; // r15
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  signed __int64 *v47; // r14
  __int64 v48; // rax
  struct _KPRCB *v49; // rax
  _GENERAL_LOOKASIDE *v50; // r8
  __int64 v51; // rax
  __int64 v52; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 *p_WaitBlockList; // [rsp+80h] [rbp-88h]
  struct _KTHREAD *v54; // [rsp+88h] [rbp-80h]
  int v55[2]; // [rsp+90h] [rbp-78h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+98h] [rbp-70h]
  __int64 v57; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-60h]
  __int128 v59; // [rsp+B0h] [rbp-58h] BYREF
  ULONG_PTR v60; // [rsp+C0h] [rbp-48h]
  signed __int64 v61; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v62; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v63[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v64; // [rsp+E8h] [rbp-20h]
  int *v65; // [rsp+F0h] [rbp-18h]
  __int64 v66; // [rsp+F8h] [rbp-10h]
  __int64 v67; // [rsp+100h] [rbp-8h]
  __int64 v68; // [rsp+108h] [rbp+0h]
  int v69; // [rsp+148h] [rbp+40h]

  *(_QWORD *)v55 = 0LL;
  ListEntry = 0LL;
  v63[0] = 0LL;
  v63[1] = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v58 = 0LL;
  *a8 = 0LL;
  if ( a1 && a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v14 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v14 )
      {
        Size = L->Size;
        AllocateEx = L->AllocateEx;
        Tag = L->Tag;
        Type = (unsigned int)L->Type;
        ++L->AllocateMisses;
        v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
        if ( !v14 )
          return 3221225626LL;
      }
    }
    LODWORD(v14->Next) = CurrentPrcb->Number;
    v69 = 1;
    Information = ObpCaptureObjectCreateInformation(a3, a3, a1, v55, (__int64)&v14[10], 1u);
    if ( Information < 0 )
    {
      v49 = KeGetCurrentPrcb();
      v50 = v49->PPLookasideList[8].P;
      ++v50->TotalFrees;
      if ( LOWORD(v50->ListHead.Alignment) < v50->Depth
        || (++v50->FreeMisses,
            v50 = v49->PPLookasideList[8].L,
            ++v50->TotalFrees,
            LOWORD(v50->ListHead.Alignment) < v50->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v50->ListHead, v14);
      }
      else
      {
        ++v50->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v50->FreeEx)(v14);
      }
      return (unsigned int)Information;
    }
    if ( !a4 )
    {
      v16 = 0LL;
      CurrentThread = KeGetCurrentThread();
      *((_QWORD *)&v59 + 1) = 0LL;
      p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
      v61 = p_Lock[93];
      if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
        ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v16 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v16);
          DWORD2(v59) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        }
        if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_WaitBlockList);
        KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
        KeLeaveCriticalRegionThread((__int64)v54);
      }
      *(_QWORD *)&v59 = v16;
      v19 = p_Lock + 108;
      v20 = ObFastReferenceObject(p_Lock + 108);
      if ( !v20 )
      {
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        v47 = p_Lock + 92;
        ExAcquirePushLockSharedEx((ULONG_PTR)v47, 0LL);
        v20 = ObFastReferenceObjectLocked(v19);
        if ( _InterlockedCompareExchange64(v47, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v47);
        KeAbPostRelease((ULONG_PTR)v47);
        KeLeaveCriticalRegionThread((__int64)v54);
      }
      v60 = v20;
      if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
      {
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
          if ( v20 == SepTokenLeakToken )
            __debugbreak();
        }
        if ( (_QWORD)v59 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v59 + 1144) + 284LL));
          if ( (_QWORD)v59 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      Information = SepCreateAccessStateFromSubjectContext(&v59, v14, &v14[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
      if ( Information < 0 )
        goto LABEL_33;
      a4 = (__int64)v14;
    }
    Next = v14[12].Next;
    if ( Next )
      *(_QWORD *)(a4 + 64) = Next;
    else
      Next = *(_SLIST_ENTRY **)(a4 + 64);
    if ( Next )
    {
      if ( !RtlValidSecurityDescriptor(Next) )
      {
        Information = -1073741703;
LABEL_33:
        if ( (PSLIST_ENTRY)a4 == v14 )
        {
          SepDeleteAccessState(a4);
          if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
          {
            v51 = *(_QWORD *)(a4 + 48);
            if ( v51 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v51 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
                __debugbreak();
            }
            v48 = *(_QWORD *)(a4 + 32);
            if ( v48 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v48 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
                __debugbreak();
            }
          }
          ObFastDereferenceObject(
            (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
            *(_QWORD *)(a4 + 48));
          v32 = *(void **)(a4 + 32);
          *(_QWORD *)(a4 + 48) = 0LL;
          if ( v32 )
            ObfDereferenceObject(v32);
          *(_QWORD *)(a4 + 32) = 0LL;
        }
        v33 = v14[12].Next;
        if ( v33 )
        {
          SeReleaseSecurityDescriptor(v33, (char)v14[11].Next, 1);
          v14[12].Next = 0LL;
        }
        v34 = ListEntry;
        if ( ListEntry )
        {
          if ( HIWORD(v55[0]) == 248 )
          {
            v35 = KeGetCurrentPrcb();
            v36 = v35->PPLookasideList[5].P;
            ++v36->TotalFrees;
            if ( LOWORD(v36->ListHead.Alignment) < v36->Depth
              || (++v36->FreeMisses,
                  v36 = v35->PPLookasideList[5].L,
                  ++v36->TotalFrees,
                  LOWORD(v36->ListHead.Alignment) < v36->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v36->ListHead, v34);
            }
            else
            {
              ++v36->FreeMisses;
              ((void (__fastcall *)(_SLIST_ENTRY *))v36->FreeEx)(v34);
            }
          }
          else
          {
            ExFreePoolWithTag(ListEntry, 0);
          }
        }
        SeClearLearningModeObjectInformation();
        v37 = KeGetCurrentPrcb();
        v38 = v37->PPLookasideList[8].P;
        ++v38->TotalFrees;
        if ( LOWORD(v38->ListHead.Alignment) < v38->Depth
          || (++v38->FreeMisses,
              v38 = v37->PPLookasideList[8].L,
              ++v38->TotalFrees,
              LOWORD(v38->ListHead.Alignment) < v38->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v38->ListHead, v14);
        }
        else
        {
          ++v38->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v38->FreeEx)(v14);
        }
        return (unsigned int)Information;
      }
      if ( (BYTE2(Next->Next) & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(Next);
    }
    v22 = v14 + 28;
    Information = ObpLookupObjectName(
                    *((_QWORD *)&v14[10].Next + 1),
                    (int)v55,
                    (int)v14[10].Next,
                    a2,
                    a3,
                    a6,
                    *((_QWORD *)&v14[12].Next + 1),
                    0LL,
                    a7,
                    a4,
                    (__int64)&v14[28],
                    (__int64)&v52,
                    (__int64)&v57);
    if ( Information >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v41 = *((_QWORD *)&v14[28].Next + 1) - 48LL;
        v58 = v41;
        ObfReferenceObject((PVOID)(v41 + 48));
        _InterlockedIncrement((volatile signed __int32 *)(v41 - ObpInfoMaskToOffset[*(_BYTE *)(v41 + 26) & 3] + 24));
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        ExReleasePushLockEx((ULONG_PTR)(&v22->Next[18].Next + 1), 0LL);
        v40 = v22->Next;
        LODWORD(v14[30].Next) = -286387660;
        ObfDereferenceObject(v40);
        v22->Next = 0LL;
        *((_WORD *)&v14[29].Next + 7) = 0;
        KeLeaveCriticalRegion();
      }
      v23 = (void *)*((_QWORD *)&v14[28].Next + 1);
      if ( v23 )
      {
        ObfDereferenceObject(v23);
        LODWORD(v23) = 0;
        *((_QWORD *)&v14[28].Next + 1) = 0LL;
      }
      v24 = (void *)v57;
      v25 = v57 - 48;
      if ( (*(_BYTE *)(v57 - 21) & 1) != 0 )
      {
        v26 = *(_QWORD *)(v25 + 32);
        v69 = (int)v23;
        if ( v26 )
        {
          v27 = *(void **)(v26 + 32);
          if ( v27 )
          {
            SeReleaseSecurityDescriptor(v27, *(_BYTE *)(v26 + 16), 1);
            *(_QWORD *)(*(_QWORD *)(v25 + 32) + 32LL) = 0LL;
            v26 = *(_QWORD *)(v25 + 32);
          }
          v28 = KeGetCurrentPrcb();
          v29 = v28->PPLookasideList[4].P;
          ++v29->TotalFrees;
          if ( LOWORD(v29->ListHead.Alignment) < v29->Depth
            || (++v29->FreeMisses,
                v29 = v28->PPLookasideList[4].L,
                ++v29->TotalFrees,
                LOWORD(v29->ListHead.Alignment) < v29->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v29->ListHead, (PSLIST_ENTRY)v26);
          }
          else
          {
            ++v29->FreeMisses;
            ((void (__fastcall *)(__int64))v29->FreeEx)(v26);
          }
          *(_QWORD *)(v25 + 32) = 0LL;
          v24 = (void *)v57;
        }
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v25 + 24) ^ (unsigned __int64)BYTE1(v25)]
                      + 72) & (__int64)v14[10].Next) != 0 )
      {
        PsDereferenceSiloContext(v24);
        Information = -1073741811;
      }
      else
      {
        v65 = v55;
        v64 = a2 + 16;
        v66 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)v63);
        v30 = ObpCreateHandle(
                v69,
                (char *)v24,
                0,
                (struct _ACCESS_STATE *)a4,
                0,
                (unsigned int)v14[10].Next,
                a3,
                0LL,
                v52,
                0LL,
                &v62);
        if ( v30 < 0 )
        {
          PsDereferenceSiloContext(v24);
          Information = v30;
        }
        else
        {
          *a8 = v62;
        }
      }
      v31 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)(v58 - ObpInfoMaskToOffset[*(_BYTE *)(v58 + 26) & 3] + 24),
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v31);
        ObfDereferenceObject((PVOID)(v31 + 48));
      }
    }
    goto LABEL_33;
  }
  return 3221225485LL;
}
