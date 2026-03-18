/*
 * XREFs of CmpCreateKeyBody @ 0x1405EFC00
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077C23C (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036B70 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C6A90 (ObpFreeObjectNameBuffer.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x1405F2D60 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F4390 (ObpCaptureObjectCreateInformation.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140631AC4 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpTransDereferenceTransaction @ 0x1406335B0 (CmpTransDereferenceTransaction.c)
 *     CmpTransReferenceTransaction @ 0x1406335C8 (CmpTransReferenceTransaction.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     CmpFreeKeyControlBlock @ 0x14069B720 (CmpFreeKeyControlBlock.c)
 *     CmpRecordParseFailure @ 0x1406BD8F0 (CmpRecordParseFailure.c)
 *     ObpRegisterObject @ 0x1408A006C (ObpRegisterObject.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        ULONG_PTR **a6,
        bool *a7)
{
  ULONG_PTR v8; // rbx
  ULONG_PTR *v9; // rdi
  signed __int64 v12; // rax
  char v13; // r14
  POBJECT_TYPE *v14; // r13
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v16; // rsi
  struct _KPRCB *v17; // rbp
  int Information; // ebp
  int v19; // ecx
  __int64 v20; // rdi
  unsigned int v21; // esi
  __int64 *v22; // r14
  __int64 v23; // r8
  ULONG_PTR v24; // rsi
  bool v25; // bp
  ULONG_PTR v26; // rsi
  __int64 v27; // rax
  __int64 **v28; // rcx
  bool v29; // cl
  _GENERAL_LOOKASIDE *L; // rcx
  struct _KPRCB *v32; // rcx
  int v33; // eax
  ULONG_PTR v34; // rax
  __int64 v35; // rax
  struct _KPRCB *v36; // rax
  _GENERAL_LOOKASIDE *v37; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v39; // rdx
  _GENERAL_LOOKASIDE *v40; // rcx
  __int16 v41; // [rsp+40h] [rbp-68h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-60h]
  ULONG_PTR v43; // [rsp+50h] [rbp-58h]
  __int64 v44; // [rsp+58h] [rbp-50h] BYREF
  __int64 v45; // [rsp+60h] [rbp-48h] BYREF
  __int64 v46; // [rsp+68h] [rbp-40h]

  v8 = 0LL;
  v43 = 0LL;
  v9 = 0LL;
  v12 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( !v12 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v12 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  v13 = 1;
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v8 = *(_QWORD *)(a4 + 56);
      v33 = CmpTransReferenceTransaction(v8);
      v21 = v33;
      if ( v33 < 0 )
      {
        CmpRecordParseFailure(a3, 131840LL, (unsigned int)v33);
LABEL_45:
        CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter2);
        return v21;
      }
    }
    else
    {
      v43 = a4 + 88;
    }
  }
  v14 = CmKeyObjectType;
  v45 = 0LL;
  v46 = 0LL;
  v41 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v16 )
  {
    v17 = CurrentPrcb;
  }
  else
  {
    ++P->AllocateMisses;
    v17 = CurrentPrcb;
    L = CurrentPrcb->PPLookasideList[4].L;
    CurrentPrcb = (struct _KPRCB *)L;
    ++L->TotalAllocates;
    v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v16 )
    {
      v32 = CurrentPrcb;
      ++LODWORD(CurrentPrcb->IdleThread);
      v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v32->PrcbLock)(
                            v32->Number,
                            HIDWORD(v32->RspBase),
                            LODWORD(v32->RspBase));
      if ( !v16 )
      {
        v21 = -1073741670;
        goto LABEL_47;
      }
    }
  }
  LODWORD(v16->Next) = v17->Number;
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0, (unsigned int)&v45, (__int64)v16, 0);
  if ( Information < 0 )
  {
    v36 = KeGetCurrentPrcb();
    v37 = v36->PPLookasideList[4].P;
    ++v37->TotalFrees;
    if ( LOWORD(v37->ListHead.Alignment) < v37->Depth
      || (++v37->FreeMisses,
          v37 = v36->PPLookasideList[4].L,
          ++v37->TotalFrees,
          LOWORD(v37->ListHead.Alignment) < v37->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v37->ListHead, v16);
    }
    else
    {
      ++v37->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v37->FreeEx)(v16);
    }
    goto LABEL_13;
  }
  if ( ((__int64)v16->Next & (_DWORD)v14[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_55;
  }
  if ( ((__int64)v16->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Information = -1073741727;
    goto LABEL_55;
  }
  v19 = *((_DWORD *)v14 + 27);
  HIDWORD(v16[1].Next) = *((_DWORD *)v14 + 26);
  *((_DWORD *)&v16[1].Next + 2) = v19;
  Information = ObpAllocateObject((_DWORD)v16, a2, (_DWORD)v14, (unsigned int)&v45, 96, (__int64)&v44, (__int64)&v41);
  if ( Information < 0 )
  {
LABEL_55:
    if ( v46 )
      ObpFreeObjectNameBuffer((__int64)&v45);
    Next = v16[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v16[1].Next, 1);
      v16[2].Next = 0LL;
    }
    v39 = KeGetCurrentPrcb();
    v40 = v39->PPLookasideList[4].P;
    ++v40->TotalFrees;
    if ( LOWORD(v40->ListHead.Alignment) < v40->Depth
      || (++v40->FreeMisses,
          v40 = v39->PPLookasideList[4].L,
          ++v40->TotalFrees,
          LOWORD(v40->ListHead.Alignment) < v40->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v40->ListHead, v16);
    }
    else
    {
      ++v40->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v40->FreeEx)(v16);
    }
    goto LABEL_13;
  }
  v20 = v44;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v44);
    ObpPushStackInfo(v20, 1, 1u, 0x746C6644u);
  }
  v9 = (ULONG_PTR *)(v20 + 48);
LABEL_13:
  v21 = Information;
  if ( Information < 0 )
  {
LABEL_47:
    CmpRecordParseFailure(a3, 132096LL, v21);
    goto LABEL_32;
  }
  memset(v9, 0, 0x60uLL);
  *((_WORD *)v9 + 25) = *(_WORD *)(a3 + 20);
  v9[1] = BugCheckParameter2;
  v9[3] = PsGetCurrentThreadProcessId();
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
    v35 = *(int *)(BugCheckParameter2 + 96);
    *(_DWORD *)v9 = v35;
    *(_QWORD *)(a3 + 56) = v35;
  }
  else
  {
    *(_DWORD *)v9 = 1803104306;
  }
  if ( a4 )
  {
    v34 = v43;
    v9[7] = v8;
    v8 = 0LL;
    v9[8] = v34;
  }
  v9[10] = (ULONG_PTR)(v9 + 9);
  v9[9] = (ULONG_PTR)(v9 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v9 + 24) |= 0x10u;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) == 0 )
  {
    v22 = (__int64 *)(v9 + 4);
    v23 = 0LL;
    v9[5] = (ULONG_PTR)(v9 + 4);
    v9[4] = (ULONG_PTR)(v9 + 4);
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9[1] + 8 * v23 + 136), (signed __int64)v9, 0LL) )
    {
      v23 = (unsigned int)(v23 + 1);
      if ( (unsigned int)v23 >= 4 )
      {
        if ( !a5 )
        {
          v24 = v9[1];
          v25 = (*(_DWORD *)(v24 + 8) & 0x80000) != 0;
          if ( *(struct _KTHREAD **)(v24 + 56) == KeGetCurrentThread() )
            *(_QWORD *)(v24 + 56) = 0LL;
          else
            _InterlockedDecrement((volatile signed __int32 *)(v24 + 56));
          ExReleasePushLockEx(v24 + 48, 0LL);
          if ( v25 && (*(_DWORD *)(v24 + 8) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v24);
          v26 = v9[1];
          ExAcquirePushLockExclusiveEx(v26 + 48, 0LL);
          *(_QWORD *)(v26 + 56) = KeGetCurrentThread();
        }
        v27 = v9[1] + 120;
        v28 = *(__int64 ***)(v9[1] + 128);
        if ( *v28 != (__int64 *)v27 )
          __fastfail(3u);
        *v22 = v27;
        v9[5] = (ULONG_PTR)v28;
        *v28 = v22;
        *(_QWORD *)(v27 + 8) = v22;
        break;
      }
    }
  }
  v13 = 0;
  v29 = (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0;
  *a6 = v9;
  v21 = 0;
  *a7 = v29;
LABEL_32:
  if ( v8 )
    CmpTransDereferenceTransaction(v8);
  if ( v13 )
    goto LABEL_45;
  return v21;
}
