/*
 * XREFs of CmpCreateKeyBody @ 0x1405F03D0
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077EB0C (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036F60 (PsGetCurrentThreadProcessId.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C6F90 (ObpFreeObjectNameBuffer.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DE240 (SeReleaseSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x1405F36C0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F5310 (ObpCaptureObjectCreateInformation.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1406319B8 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpIsKeyStackDeleted @ 0x140636AB0 (CmpIsKeyStackDeleted.c)
 *     CmpTransDereferenceTransaction @ 0x140636BA0 (CmpTransDereferenceTransaction.c)
 *     CmpTransReferenceTransaction @ 0x140636BB8 (CmpTransReferenceTransaction.c)
 *     CmpLockKcbExclusive @ 0x140661A18 (CmpLockKcbExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     CmpRecordParseFailure @ 0x1406BD080 (CmpRecordParseFailure.c)
 *     ObpRegisterObject @ 0x14089F8AC (ObpRegisterObject.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        ULONG_PTR **a7,
        bool *a8)
{
  ULONG_PTR v9; // rbx
  ULONG_PTR *v10; // rdi
  ULONG_PTR v12; // r15
  signed __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // esi
  struct _KPRCB *CurrentPrcb; // r14
  POBJECT_TYPE *v17; // r15
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v19; // rsi
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int Information; // ebp
  struct _KPRCB *v26; // rax
  _GENERAL_LOOKASIDE *v27; // r8
  int v28; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v30; // rdx
  _GENERAL_LOOKASIDE *v31; // rcx
  __int64 v32; // rdi
  char v33; // di
  __int64 v34; // rax
  ULONG_PTR v35; // rax
  int v36; // ecx
  ULONG_PTR *v37; // rsi
  __int64 v39; // r8
  ULONG_PTR v40; // rcx
  ULONG_PTR v41; // rcx
  ULONG_PTR **v42; // rax
  __int16 v44; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR v45; // [rsp+48h] [rbp-60h]
  __int64 v46; // [rsp+50h] [rbp-58h] BYREF
  __int64 v47; // [rsp+58h] [rbp-50h] BYREF
  __int64 v48; // [rsp+60h] [rbp-48h]

  v9 = 0LL;
  v45 = 0LL;
  v10 = 0LL;
  v12 = BugCheckParameter2;
  v13 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( !v13 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v13 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v9 = *(_QWORD *)(a4 + 56);
      v14 = CmpTransReferenceTransaction(v9);
      v15 = v14;
      if ( v14 < 0 )
      {
        CmpRecordParseFailure(a3, 131840LL, (unsigned int)v14);
LABEL_60:
        CmpDereferenceKeyControlBlockUnsafe(v12);
        return v15;
      }
    }
    else
    {
      v45 = a4 + 88;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = CmKeyObjectType;
  v44 = 1;
  P = CurrentPrcb->PPLookasideList[4].P;
  v47 = 0LL;
  v48 = 0LL;
  ++P->TotalAllocates;
  v19 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v19 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v19 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v19 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v19 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v19 )
      {
        v15 = -1073741670;
LABEL_35:
        CmpRecordParseFailure(a3, 132096LL, v15);
        v12 = BugCheckParameter2;
        v33 = 1;
        goto LABEL_57;
      }
    }
  }
  LODWORD(v19->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0, (unsigned int)&v47, (__int64)v19, 0);
  if ( Information < 0 )
  {
    v26 = KeGetCurrentPrcb();
    v27 = v26->PPLookasideList[4].P;
    ++v27->TotalFrees;
    if ( LOWORD(v27->ListHead.Alignment) < v27->Depth
      || (++v27->FreeMisses,
          v27 = v26->PPLookasideList[4].L,
          ++v27->TotalFrees,
          LOWORD(v27->ListHead.Alignment) < v27->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v27->ListHead, v19);
    }
    else
    {
      ++v27->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v27->FreeEx)(v19);
    }
    goto LABEL_34;
  }
  if ( ((__int64)v19->Next & (_DWORD)v17[9]) != 0 )
  {
    Information = -1073741811;
LABEL_23:
    if ( v48 )
      ObpFreeObjectNameBuffer((__int64)&v47);
    Next = v19[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v19[1].Next, 1);
      v19[2].Next = 0LL;
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
      RtlpInterlockedPushEntrySList(&v31->ListHead, v19);
    }
    else
    {
      ++v31->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v31->FreeEx)(v19);
    }
    goto LABEL_34;
  }
  if ( ((__int64)v19->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Information = -1073741727;
    goto LABEL_23;
  }
  v28 = *((_DWORD *)v17 + 27);
  HIDWORD(v19[1].Next) = *((_DWORD *)v17 + 26);
  *((_DWORD *)&v19[1].Next + 2) = v28;
  Information = ObpAllocateObject((_DWORD)v19, a2, (_DWORD)v17, (unsigned int)&v47, 96, (__int64)&v46, (__int64)&v44);
  if ( Information < 0 )
    goto LABEL_23;
  v32 = v46;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v46);
    ObpPushStackInfo(v32, 1, 1u, 0x746C6644u);
  }
  v10 = (ULONG_PTR *)(v32 + 48);
LABEL_34:
  v15 = Information;
  if ( Information < 0 )
    goto LABEL_35;
  memset(v10, 0, 0x60uLL);
  v12 = BugCheckParameter2;
  *((_WORD *)v10 + 25) = *(_WORD *)(a3 + 20);
  v10[1] = BugCheckParameter2;
  v10[3] = PsGetCurrentThreadProcessId();
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
    v34 = *(int *)(BugCheckParameter2 + 96);
    *(_DWORD *)v10 = v34;
    *(_QWORD *)(a3 + 56) = v34;
  }
  else
  {
    *(_DWORD *)v10 = 1803104306;
  }
  if ( a4 )
  {
    v35 = v45;
    v10[7] = v9;
    v9 = 0LL;
    v10[8] = v35;
  }
  v10[10] = (ULONG_PTR)(v10 + 9);
  v10[9] = (ULONG_PTR)(v10 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v10 + 24) |= 0x10u;
  v36 = *(_DWORD *)(BugCheckParameter2 + 184);
  if ( (v36 & 0x400000) == 0 )
  {
    v37 = v10 + 4;
LABEL_45:
    v10[5] = (ULONG_PTR)(v10 + 4);
    v39 = 0LL;
    *v37 = (ULONG_PTR)v37;
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10[1] + 8 * v39 + 136), (signed __int64)v10, 0LL) )
    {
      v39 = (unsigned int)(v39 + 1);
      if ( (unsigned int)v39 >= 4 )
      {
        v40 = v10[1];
        if ( a5 )
        {
          v41 = v40 + 120;
          v42 = *(ULONG_PTR ***)(v41 + 8);
          if ( *v42 != (ULONG_PTR *)v41 )
            __fastfail(3u);
          *v37 = v41;
          v10[5] = (ULONG_PTR)v42;
          *v42 = v37;
          *(_QWORD *)(v41 + 8) = v37;
          break;
        }
        if ( (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(v40) )
        {
          a5 = 1;
          goto LABEL_45;
        }
        CmpUnlockKcb(v10[1]);
        CmpLockKcbExclusive(v10[1]);
        a5 = 1;
        if ( (unsigned __int8)CmpIsKeyStackDeleted(a6, a4) )
        {
          v15 = -1073741444;
          v33 = 1;
          goto LABEL_57;
        }
        goto LABEL_45;
      }
    }
    v36 = *(_DWORD *)(BugCheckParameter2 + 184);
  }
  *a7 = v10;
  v33 = 0;
  v15 = 0;
  *a8 = (v36 & 0x400000) != 0;
LABEL_57:
  if ( v9 )
    CmpTransDereferenceTransaction(v9);
  if ( v33 )
    goto LABEL_60;
  return v15;
}
