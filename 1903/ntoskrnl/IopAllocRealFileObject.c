/*
 * XREFs of IopAllocRealFileObject @ 0x1405D8060
 * Callers:
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 * Callees:
 *     IoGetSilo @ 0x140009A50 (IoGetSilo.c)
 *     PsIsHostSilo @ 0x14000A920 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IopCheckInitiatorHint @ 0x14001700C (IopCheckInitiatorHint.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C6A90 (ObpFreeObjectNameBuffer.c)
 *     IopRetrieveTransactionParameters @ 0x1405D8490 (IopRetrieveTransactionParameters.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x1405F2D60 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F4390 (ObpCaptureObjectCreateInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406861CC (IopAllocateFoExtensionsOnCreate.c)
 *     ObpRegisterObject @ 0x1408A006C (ObpRegisterObject.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        unsigned int a9)
{
  struct _KPRCB *CurrentPrcb; // rbp
  POBJECT_TYPE *v10; // rsi
  char v12; // r12
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v14; // r15
  PSLIST_ENTRY v15; // rbx
  unsigned int Number; // eax
  unsigned __int8 v17; // bp
  int v18; // edx
  int Information; // edi
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rbx
  _DWORD *v24; // rbx
  int TransactionParameters; // esi
  __int64 v26; // rdi
  unsigned int v27; // r13d
  int v28; // r15d
  __int64 v29; // rcx
  __int64 v30; // r15
  int v31; // ecx
  int v32; // eax
  _QWORD *v33; // rbx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 Silo; // rax
  int v39; // r9d
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v45; // rax
  _GENERAL_LOOKASIDE *v46; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v48; // rdx
  _GENERAL_LOOKASIDE *v49; // rcx
  _DWORD *v50; // [rsp+40h] [rbp-88h] BYREF
  __int64 v51; // [rsp+48h] [rbp-80h] BYREF
  __int64 v52; // [rsp+50h] [rbp-78h]
  _QWORD v53[3]; // [rsp+58h] [rbp-70h] BYREF
  int v54; // [rsp+70h] [rbp-58h]
  int v55; // [rsp+74h] [rbp-54h]
  __int128 v56; // [rsp+78h] [rbp-50h]
  __int16 v59; // [rsp+E8h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v59 = 0;
  v53[0] = 48LL;
  v12 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v14 = a3;
  v55 = 0;
  v53[1] = 0LL;
  v54 = a4;
  ++P->TotalAllocates;
  v53[2] = 0LL;
  v56 = 0LL;
  LOBYTE(v59) = 1;
  v51 = 0LL;
  v52 = 0LL;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v15 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v15 )
      {
        TransactionParameters = -1073741670;
LABEL_56:
        if ( !a8 )
          *(_QWORD *)a1 = 0LL;
        return (unsigned int)TransactionParameters;
      }
    }
  }
  Number = CurrentPrcb->Number;
  v17 = a5;
  v18 = a5;
  LODWORD(v15->Next) = Number;
  Information = ObpCaptureObjectCreateInformation(0, v18, (unsigned int)v53, (unsigned int)&v51, (__int64)v15, 0);
  if ( Information < 0 )
  {
    v45 = KeGetCurrentPrcb();
    v46 = v45->PPLookasideList[4].P;
    ++v46->TotalFrees;
    if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
      || (++v46->FreeMisses,
          v46 = v45->PPLookasideList[4].L,
          ++v46->TotalFrees,
          LOWORD(v46->ListHead.Alignment) < v46->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v46->ListHead, v15);
    }
    else
    {
      ++v46->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v46->FreeEx)(v15);
    }
    goto LABEL_63;
  }
  if ( ((__int64)v15->Next & (_DWORD)v10[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_67;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    Information = -1073741727;
    goto LABEL_67;
  }
  v22 = *((_DWORD *)v10 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v22;
  Information = ObpAllocateObject((_DWORD)v15, v17, (_DWORD)v10, (unsigned int)&v51, 216, (__int64)&v50, (__int64)&v59);
  if ( Information < 0 )
  {
LABEL_67:
    if ( v52 )
      ObpFreeObjectNameBuffer((__int64)&v51);
    Next = v15[2].Next;
    if ( Next )
    {
      LOBYTE(v20) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v15[1].Next), v20, v21);
      v15[2].Next = 0LL;
    }
    v48 = KeGetCurrentPrcb();
    v49 = v48->PPLookasideList[4].P;
    ++v49->TotalFrees;
    if ( LOWORD(v49->ListHead.Alignment) < v49->Depth
      || (++v49->FreeMisses,
          v49 = v48->PPLookasideList[4].L,
          ++v49->TotalFrees,
          LOWORD(v49->ListHead.Alignment) < v49->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v49->ListHead, v15);
      v24 = v50;
      goto LABEL_9;
    }
    ++v49->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v49->FreeEx)(v15);
LABEL_63:
    v24 = v50;
    goto LABEL_9;
  }
  v23 = (__int64)v50;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v50);
    ObpPushStackInfo(v23, 1, 1u, 0x746C6644u);
  }
  v24 = (_DWORD *)(v23 + 48);
LABEL_9:
  TransactionParameters = Information;
  if ( Information < 0 )
    goto LABEL_56;
  memset(v24, 0, 0xD8uLL);
  v26 = a6;
  if ( a8 )
  {
    *((_QWORD *)v24 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v24 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v24 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v24 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v24 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v35 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v35 )
      *((_QWORD *)v24 + 26) = v35;
  }
  else
  {
    v27 = a9;
    v28 = a7;
    if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0
      && PsIsHostSilo(*(_QWORD *)(a7 + 8))
      && ((v29 = *(_QWORD *)(v26 + 40)) == 0 || (Silo = IoGetSilo(v29), PsIsHostSilo(Silo))) )
    {
      v30 = a2;
    }
    else
    {
      v39 = v28;
      v30 = a2;
      TransactionParameters = IopAllocateFoExtensionsOnCreate((_DWORD)v24, a2, v26, v39, v27);
    }
    if ( TransactionParameters >= 0 )
    {
      if ( v17 )
      {
        if ( (*(_DWORD *)(v26 + 152) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(v30 + 48) & 0x40000) != 0
            || (v36 = *(unsigned int *)(v30 + 72), (unsigned int)v36 <= 0x35)
            && (v37 = 0x20000100100108LL, _bittest64(&v37, v36)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(v30, v26, v27, v24);
          }
        }
      }
      if ( TransactionParameters >= 0 && v17 && (*(_DWORD *)(v26 + 64) & 0x20000) != 0 )
        TransactionParameters = IopCheckInitiatorHint((__int64)v24, *(_QWORD *)(v26 + 40));
    }
    v14 = a3;
  }
  *(_QWORD *)a1 = v24;
  if ( !*(_BYTE *)(v26 + 138) && !*(_BYTE *)(v26 + 137) )
  {
    if ( (*(_DWORD *)(v26 + 64) & 0x30) != 0 )
    {
      v31 = v24[20] | 2;
      v24[20] = v31;
      if ( (*(_DWORD *)(v26 + 64) & 0x10) != 0 )
        v24[20] = v31 | 4;
    }
    if ( (v24[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v24 + 32), SynchronizationEvent, 0);
      v24[28] = 0;
      *((_QWORD *)v24 + 13) = 0LL;
    }
    v32 = *(_DWORD *)(v26 + 64);
    if ( (v32 & 8) != 0 )
    {
      v24[20] |= 8u;
      v32 = *(_DWORD *)(v26 + 64);
    }
    if ( (v32 & 2) != 0 )
    {
      v24[20] |= 0x10u;
      v32 = *(_DWORD *)(v26 + 64);
    }
    if ( (v32 & 4) != 0 )
    {
      v24[20] |= 0x20u;
      v32 = *(_DWORD *)(v26 + 64);
    }
    if ( (v32 & 0x800) != 0 )
    {
      v24[20] |= 0x100000u;
      v32 = *(_DWORD *)(v26 + 64);
    }
    if ( (v32 & 0x20000) != 0 )
      v24[20] |= 0x2000000u;
  }
  if ( (v12 & 0x40) == 0 )
    v24[20] |= 0x20000u;
  *v24 = 14155781;
  *((_QWORD *)v24 + 8) = *(_QWORD *)(v26 + 40);
  *((_QWORD *)v24 + 1) = v14;
  *((_QWORD *)v24 + 23) = 0LL;
  v33 = v24 + 48;
  v33[1] = v33;
  *v33 = v33;
  return (unsigned int)TransactionParameters;
}
