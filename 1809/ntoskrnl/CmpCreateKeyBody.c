/*
 * XREFs of CmpCreateKeyBody @ 0x1405E1970
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407319A8 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14004D240 (PsGetCurrentThreadProcessId.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     CmpIsKcbDiscarded @ 0x1405820B4 (CmpIsKcbDiscarded.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C9FE4 (ObpFreeObjectNameBuffer.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1405D040C (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405E3910 (ObpCaptureObjectCreateInformation.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     CmpIsKeyStackDeleted @ 0x140645670 (CmpIsKeyStackDeleted.c)
 *     ObpAllocateObject @ 0x140646A60 (ObpAllocateObject.c)
 *     CmpTransReferenceTransaction @ 0x1406951F8 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x140695254 (CmpTransDereferenceTransaction.c)
 *     CmpRecordParseFailure @ 0x140699420 (CmpRecordParseFailure.c)
 *     ObpRegisterObject @ 0x14086486C (ObpRegisterObject.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 **a7,
        bool *a8)
{
  __int64 v11; // rbx
  __int64 *v12; // rdi
  signed __int32 v13; // eax
  signed __int32 v14; // r10d
  signed __int32 v15; // ett
  unsigned int v16; // esi
  struct _KPRCB *CurrentPrcb; // r14
  POBJECT_TYPE *v19; // r15
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v21; // rsi
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int Information; // ebp
  __int64 v28; // r8
  struct _KPRCB *v29; // rax
  _GENERAL_LOOKASIDE *v30; // r8
  int v31; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v33; // rdx
  _GENERAL_LOOKASIDE *v34; // rcx
  __int64 v35; // rdi
  volatile signed __int32 *v36; // r14
  char v37; // di
  unsigned __int64 CurrentThreadProcessId; // rax
  unsigned int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rax
  signed __int32 v42; // ecx
  __int64 *v43; // rsi
  unsigned int v45; // r8d
  __int64 v46; // rcx
  char IsKeyStackDeleted; // al
  __int64 **v48; // rax
  __int64 v49; // rcx
  __int16 v50; // [rsp+40h] [rbp-68h] BYREF
  __int64 v51; // [rsp+48h] [rbp-60h]
  __int64 v52; // [rsp+50h] [rbp-58h] BYREF
  char v53[8]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v54; // [rsp+60h] [rbp-48h]

  v11 = 0LL;
  v51 = 0LL;
  v12 = 0LL;
  v13 = *a1;
  v14 = *a1 + 1;
  if ( *a1 == -1 )
  {
LABEL_5:
    v16 = -1073741670;
    CmpRecordParseFailure(a3, 131584LL);
    return v16;
  }
  while ( 1 )
  {
    if ( v14 == 1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v15 = v13;
    v13 = _InterlockedCompareExchange(a1, v14, v13);
    if ( v15 == v13 )
      break;
    v14 = v13 + 1;
    if ( v13 == -1 )
      goto LABEL_5;
  }
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v11 = *(_QWORD *)(a4 + 56);
      v16 = CmpTransReferenceTransaction(v11);
      if ( (v16 & 0x80000000) != 0 )
      {
        CmpRecordParseFailure(a3, 131840LL);
        CmpDereferenceKeyControlBlockUnsafe(a1);
        return v16;
      }
    }
    else
    {
      v51 = a4 + 88;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = CmKeyObjectType;
  v50 = 1;
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v21 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v21 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v21 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v21 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v21 )
      {
        v16 = -1073741670;
        goto LABEL_39;
      }
    }
  }
  LODWORD(v21->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0, (unsigned int)v53, (__int64)v21, 0);
  if ( Information < 0 )
  {
    v29 = KeGetCurrentPrcb();
    v30 = v29->PPLookasideList[4].P;
    ++v30->TotalFrees;
    if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
      || (++v30->FreeMisses,
          v30 = v29->PPLookasideList[4].L,
          ++v30->TotalFrees,
          LOWORD(v30->ListHead.Alignment) < v30->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v30->ListHead, v21);
    }
    else
    {
      ++v30->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v30->FreeEx)(v21);
    }
    goto LABEL_38;
  }
  if ( ((__int64)v21->Next & (_DWORD)v19[9]) != 0 )
  {
    Information = -1073741811;
LABEL_27:
    if ( v54 )
      ObpFreeObjectNameBuffer((__int64)v53);
    Next = v21[2].Next;
    if ( Next )
    {
      LOBYTE(v28) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v21[1].Next), v28);
      v21[2].Next = 0LL;
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
      RtlpInterlockedPushEntrySList(&v34->ListHead, v21);
    }
    else
    {
      ++v34->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v34->FreeEx)(v21);
    }
    goto LABEL_38;
  }
  if ( ((__int64)v21->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Information = -1073741727;
    goto LABEL_27;
  }
  v31 = *((_DWORD *)v19 + 27);
  HIDWORD(v21[1].Next) = *((_DWORD *)v19 + 26);
  *((_DWORD *)&v21[1].Next + 2) = v31;
  Information = ObpAllocateObject((_DWORD)v21, a2, (_DWORD)v19, (unsigned int)v53, 96, (__int64)&v52, (__int64)&v50);
  if ( Information < 0 )
    goto LABEL_27;
  v35 = v52;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v52);
    ObpPushStackInfo(v35, 1, 1u, 1953261124);
  }
  v12 = (__int64 *)(v35 + 48);
LABEL_38:
  v16 = Information;
  if ( Information >= 0 )
  {
    memset(v12, 0, 0x60uLL);
    v36 = a1;
    *((_WORD *)v12 + 25) = *(_WORD *)(a3 + 20);
    v12[1] = (__int64)a1;
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    v39 = 0;
    v12[3] = CurrentThreadProcessId;
    *((_WORD *)v12 + 2) = 0;
    if ( (a1[44] & 0x400000) != 0 )
    {
      v40 = a1[22];
      *(_DWORD *)v12 = v40;
      *(_QWORD *)(a3 + 56) = v40;
    }
    else
    {
      *(_DWORD *)v12 = 1803104306;
    }
    if ( a4 )
    {
      v41 = v51;
      v12[7] = v11;
      v11 = 0LL;
      v12[8] = v41;
    }
    v12[10] = (__int64)(v12 + 9);
    v12[9] = (__int64)(v12 + 9);
    if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
      *((_WORD *)v12 + 24) |= 0x10u;
    v42 = a1[44];
    if ( (v42 & 0x400000) == 0 )
    {
      v43 = v12 + 4;
LABEL_49:
      v12[5] = (__int64)(v12 + 4);
      v45 = v39;
      *v43 = (__int64)v43;
      while ( _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v12[1] + 8LL * v45 + 128),
                (signed __int64)v12,
                0LL) )
      {
        if ( ++v45 >= 4 )
        {
          v46 = v12[1];
          if ( a5 )
          {
            v48 = *(__int64 ***)(v46 + 120);
            v49 = v46 + 112;
            if ( *v48 != (__int64 *)v49 )
              __fastfail(3u);
            *v43 = v49;
            v12[5] = (__int64)v48;
            *v48 = v43;
            *(_QWORD *)(v49 + 8) = v43;
            break;
          }
          if ( CmpTryConvertKcbLockSharedToExclusive(v46) )
          {
            a5 = 1;
            goto LABEL_49;
          }
          CmpUnlockKcb(v12[1]);
          CmpLockKcbExclusive(v12[1]);
          a5 = 1;
          if ( CmpIsKcbDiscarded(v12[1])
            || (IsKeyStackDeleted = CmpIsKeyStackDeleted(a6, a4), v39 = 0, IsKeyStackDeleted) )
          {
            v16 = -1073741444;
            v37 = 1;
            goto LABEL_62;
          }
          goto LABEL_49;
        }
      }
      v42 = a1[44];
    }
    v16 = v39;
    *a7 = v12;
    v37 = 0;
    *a8 = (v42 & 0x400000) != 0;
    goto LABEL_62;
  }
LABEL_39:
  CmpRecordParseFailure(a3, 132096LL);
  v36 = a1;
  v37 = 1;
LABEL_62:
  if ( v11 )
    CmpTransDereferenceTransaction(v11);
  if ( v37 )
    CmpDereferenceKeyControlBlockUnsafe(v36);
  return v16;
}
