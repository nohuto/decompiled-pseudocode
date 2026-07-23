/*
 * XREFs of ObOpenObjectByNameEx @ 0x1405E3E30
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1402848B0 (IoRevokeHandlesForProcess.c)
 *     CmCreateKey @ 0x1405B6A60 (CmCreateKey.c)
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 *     NtQueryFullAttributesFile @ 0x14060C590 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14060DC30 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x140692D70 (NtOpenSymbolicLinkObject.c)
 *     NtOpenSection @ 0x14069D1C0 (NtOpenSection.c)
 *     NtDeleteFile @ 0x140710390 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x14081D740 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x14081DFF4 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14004E050 (SeClearLearningModeObjectInformation.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     PsDereferenceSiloContext @ 0x14012C170 (PsDereferenceSiloContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpDeleteNameCheck @ 0x1405AA740 (ObpDeleteNameCheck.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405E3910 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14069CB50 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406B2238 (SeObjectCreateSaclAccessBits.c)
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
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v14; // rbx
  int *v15; // r15
  int v16; // esi
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *p_Lock; // r14
  void *v19; // r15
  _QWORD *v20; // r15
  ULONG_PTR v21; // rsi
  __int64 v22; // r8
  _SLIST_ENTRY *Next; // rsi
  _SLIST_ENTRY *v24; // r14
  void *v25; // rcx
  void *v26; // r15
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KPRCB *v30; // r8
  _GENERAL_LOOKASIDE *v31; // rcx
  int v32; // r14d
  __int64 v33; // r14
  void *v34; // rcx
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY *v36; // r8
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // rcx
  struct _KPRCB *v39; // rdx
  _GENERAL_LOOKASIDE *v40; // rcx
  __int64 v42; // r15
  _SLIST_ENTRY *v43; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  signed __int64 *v49; // r14
  __int64 v50; // rax
  struct _KPRCB *v51; // rax
  _GENERAL_LOOKASIDE *v52; // r8
  __int64 v53; // rax
  __int64 v54; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 *p_WaitBlockList; // [rsp+80h] [rbp-88h]
  struct _KTHREAD *v56; // [rsp+88h] [rbp-80h]
  __int64 v57; // [rsp+90h] [rbp-78h] BYREF
  __int64 v58; // [rsp+98h] [rbp-70h]
  __int64 v59; // [rsp+A0h] [rbp-68h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v61; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-50h] BYREF
  ULONG_PTR v63; // [rsp+C8h] [rbp-40h]
  signed __int64 v64; // [rsp+D0h] [rbp-38h]
  char v65[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-20h]
  __int64 *v67; // [rsp+F0h] [rbp-18h]
  __int64 v68; // [rsp+F8h] [rbp-10h]
  int v69; // [rsp+148h] [rbp+40h]

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
    v15 = (int *)&v14[10];
    v69 = 1;
    v16 = ObpCaptureObjectCreateInformation(a3, a3, a1, &v59, (__int64)&v14[10], 1u);
    if ( v16 < 0 )
    {
      v51 = KeGetCurrentPrcb();
      v52 = v51->PPLookasideList[8].P;
      ++v52->TotalFrees;
      if ( LOWORD(v52->ListHead.Alignment) < v52->Depth
        || (++v52->FreeMisses,
            v52 = v51->PPLookasideList[8].L,
            ++v52->TotalFrees,
            LOWORD(v52->ListHead.Alignment) < v52->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v52->ListHead, v14);
      }
      else
      {
        ++v52->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v52->FreeEx)(v14);
      }
      return (unsigned int)v16;
    }
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
      v64 = p_Lock[92];
      if ( CurrentThread )
      {
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v56 = KeGetCurrentThread();
          --v56->KernelApcDisable;
          p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v19 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v19);
            DWORD2(v62) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
          }
          else
          {
            v19 = 0LL;
          }
          if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(p_WaitBlockList);
          KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
          KeLeaveCriticalRegionThread((__int64)v56);
        }
        else
        {
          v19 = 0LL;
        }
        *(_QWORD *)&v62 = v19;
      }
      else
      {
        *(_QWORD *)&v62 = 0LL;
      }
      v20 = p_Lock + 107;
      v21 = ObFastReferenceObject(p_Lock + 107);
      if ( !v21 )
      {
        v56 = KeGetCurrentThread();
        --v56->KernelApcDisable;
        v49 = p_Lock + 91;
        ExAcquirePushLockSharedEx((ULONG_PTR)v49, 0LL);
        v21 = ObFastReferenceObjectLocked(v20);
        if ( _InterlockedCompareExchange64(v49, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v49);
        KeAbPostRelease((ULONG_PTR)v49);
        KeLeaveCriticalRegionThread((__int64)v56);
      }
      v63 = v21;
      if ( SeTokenLeakTracking )
      {
        if ( v21 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 1144) + 284LL));
          if ( v21 == SepTokenLeakToken )
            __debugbreak();
        }
        if ( (_QWORD)v62 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 1144) + 284LL));
          if ( (_QWORD)v62 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      v16 = SepCreateAccessStateFromSubjectContext(&v62, v14, &v14[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
      if ( v16 < 0 )
        goto LABEL_35;
      a4 = (__int64)v14;
      v15 = (int *)&v14[10];
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
        v16 = -1073741703;
LABEL_35:
        if ( (PSLIST_ENTRY)a4 == v14 )
        {
          SepDeleteAccessState(a4);
          if ( SeTokenLeakTracking )
          {
            v53 = *(_QWORD *)(a4 + 48);
            if ( v53 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v53 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
                __debugbreak();
            }
            v50 = *(_QWORD *)(a4 + 32);
            if ( v50 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v50 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
                __debugbreak();
            }
          }
          ObFastDereferenceObject(
            (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
            *(_QWORD *)(a4 + 48));
          v34 = *(void **)(a4 + 32);
          *(_QWORD *)(a4 + 48) = 0LL;
          if ( v34 )
            ObfDereferenceObject(v34);
          *(_QWORD *)(a4 + 32) = 0LL;
        }
        v35 = v14[12].Next;
        if ( v35 )
        {
          LOBYTE(v22) = 1;
          SeReleaseSecurityDescriptor(v35, LOBYTE(v14[11].Next), v22);
          v14[12].Next = 0LL;
        }
        v36 = ListEntry;
        if ( ListEntry )
        {
          if ( WORD1(v59) == 248 )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->PPLookasideList[5].P;
            ++v38->TotalFrees;
            if ( LOWORD(v38->ListHead.Alignment) < v38->Depth
              || (++v38->FreeMisses,
                  v38 = v37->PPLookasideList[5].L,
                  ++v38->TotalFrees,
                  LOWORD(v38->ListHead.Alignment) < v38->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v38->ListHead, v36);
            }
            else
            {
              ++v38->FreeMisses;
              ((void (__fastcall *)(_SLIST_ENTRY *))v38->FreeEx)(v36);
            }
          }
          else
          {
            ExFreePoolWithTag(ListEntry, 0);
          }
        }
        SeClearLearningModeObjectInformation();
        v39 = KeGetCurrentPrcb();
        v40 = v39->PPLookasideList[8].P;
        ++v40->TotalFrees;
        if ( LOWORD(v40->ListHead.Alignment) < v40->Depth
          || (++v40->FreeMisses,
              v40 = v39->PPLookasideList[8].L,
              ++v40->TotalFrees,
              LOWORD(v40->ListHead.Alignment) < v40->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v40->ListHead, v14);
        }
        else
        {
          ++v40->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v40->FreeEx)(v14);
        }
        return (unsigned int)v16;
      }
      if ( (BYTE2(Next->Next) & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(Next);
    }
    v24 = v14 + 28;
    v16 = ObpLookupObjectName(
            *((_QWORD *)&v14[10].Next + 1),
            (int)&v59,
            *v15,
            a2,
            a3,
            a6,
            *((_QWORD *)&v14[12].Next + 1),
            0LL,
            a7,
            a4,
            (__int64)&v14[28],
            (__int64)&v54,
            (__int64)&v57);
    if ( v16 >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v42 = *((_QWORD *)&v14[28].Next + 1) - 48LL;
        v58 = v42;
        ObfReferenceObject((PVOID)(v42 + 48));
        _InterlockedIncrement((volatile signed __int32 *)(v42 - ObpInfoMaskToOffset[*(_BYTE *)(v42 + 26) & 3] + 24));
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        ExReleasePushLockEx((ULONG_PTR)(&v24->Next[18].Next + 1), 0LL);
        v43 = v24->Next;
        LODWORD(v14[30].Next) = -286387660;
        ObfDereferenceObject(v43);
        v24->Next = 0LL;
        *((_WORD *)&v14[29].Next + 7) = 0;
        KeLeaveCriticalRegion();
      }
      v25 = (void *)*((_QWORD *)&v14[28].Next + 1);
      if ( v25 )
      {
        ObfDereferenceObject(v25);
        LODWORD(v25) = 0;
        *((_QWORD *)&v14[28].Next + 1) = 0LL;
      }
      v26 = (void *)v57;
      v27 = v57 - 48;
      if ( (*(_BYTE *)(v57 - 21) & 1) != 0 )
      {
        v28 = *(_QWORD *)(v27 + 32);
        v69 = (int)v25;
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 32);
          if ( v29 )
          {
            LOBYTE(v22) = 1;
            SeReleaseSecurityDescriptor(v29, *(unsigned __int8 *)(v28 + 16), v22);
            *(_QWORD *)(*(_QWORD *)(v27 + 32) + 32LL) = 0LL;
            v28 = *(_QWORD *)(v27 + 32);
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
            RtlpInterlockedPushEntrySList(&v31->ListHead, (PSLIST_ENTRY)v28);
          }
          else
          {
            ++v31->FreeMisses;
            ((void (__fastcall *)(__int64))v31->FreeEx)(v28);
          }
          *(_QWORD *)(v27 + 32) = 0LL;
          v26 = (void *)v57;
        }
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v27 + 24) ^ (unsigned __int64)BYTE1(v27)]
                      + 72) & (__int64)v14[10].Next) != 0 )
      {
        PsDereferenceSiloContext(v26);
        v16 = -1073741811;
      }
      else
      {
        v67 = &v59;
        v66 = a2 + 16;
        v68 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)v65);
        v32 = ObpCreateHandle(
                v69,
                (char *)v26,
                0,
                (struct _ACCESS_STATE *)a4,
                0,
                (unsigned int)v14[10].Next,
                a3,
                0LL,
                v54,
                0LL,
                &v61);
        if ( v32 < 0 )
        {
          PsDereferenceSiloContext(v26);
          v16 = v32;
        }
        else
        {
          *a8 = v61;
        }
      }
      v33 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)(v58 - ObpInfoMaskToOffset[*(_BYTE *)(v58 + 26) & 3] + 24),
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v33);
        ObfDereferenceObject((PVOID)(v33 + 48));
      }
    }
    goto LABEL_35;
  }
  return 3221225485LL;
}
