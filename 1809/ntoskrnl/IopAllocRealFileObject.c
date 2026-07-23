/*
 * XREFs of IopAllocRealFileObject @ 0x14063CB20
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     IoGetSilo @ 0x14008D7A0 (IoGetSilo.c)
 *     PsIsSystemThread @ 0x1400A38A0 (PsIsSystemThread.c)
 *     IopCheckInitiatorHint @ 0x1400A392C (IopCheckInitiatorHint.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C9FE4 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405E3910 (ObpCaptureObjectCreateInformation.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1405FA484 (IopAllocateFoExtensionsOnCreate.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     IopRetrieveTransactionParameters @ 0x14063A990 (IopRetrieveTransactionParameters.c)
 *     ObpAllocateObject @ 0x140646A60 (ObpAllocateObject.c)
 *     ObpRegisterObject @ 0x14086486C (ObpRegisterObject.c)
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
        int a9)
{
  struct _KPRCB *CurrentPrcb; // rsi
  POBJECT_TYPE *v10; // rbp
  char v12; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v15; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int TransactionParameters; // esi
  int Information; // edi
  struct _KPRCB *v23; // rax
  _GENERAL_LOOKASIDE *v24; // r8
  _DWORD *v25; // rbx
  int v26; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v28; // rdx
  _GENERAL_LOOKASIDE *v29; // rcx
  char *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 Silo; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ecx
  int v37; // eax
  __int16 v39; // [rsp+40h] [rbp-88h] BYREF
  void *v40; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v41[2]; // [rsp+50h] [rbp-78h] BYREF
  int v42; // [rsp+60h] [rbp-68h] BYREF
  __int64 v43; // [rsp+68h] [rbp-60h]
  __int64 v44; // [rsp+70h] [rbp-58h]
  int v45; // [rsp+78h] [rbp-50h]
  __int128 v46; // [rsp+80h] [rbp-48h]
  char v48; // [rsp+E8h] [rbp+20h]

  v48 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v42 = 48;
  v43 = 0LL;
  v12 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v45 = a4;
  v44 = 0LL;
  v46 = 0LL;
  ++P->TotalAllocates;
  v39 = 1;
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
        goto LABEL_28;
      }
    }
  }
  LODWORD(v15->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(0, a5, (__int64)&v42, v41, (__int64)v15, 0);
  if ( Information < 0 )
  {
    v23 = KeGetCurrentPrcb();
    v24 = v23->PPLookasideList[4].P;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
      || (++v24->FreeMisses,
          v24 = v23->PPLookasideList[4].L,
          ++v24->TotalFrees,
          LOWORD(v24->ListHead.Alignment) < v24->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v24->ListHead, v15);
      v25 = v40;
    }
    else
    {
      ++v24->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v15);
      v25 = v40;
    }
    goto LABEL_27;
  }
  if ( ((__int64)v15->Next & (_DWORD)v10[9]) != 0 )
  {
    Information = -1073741811;
LABEL_16:
    if ( v41[1] )
      ObpFreeObjectNameBuffer((__int64)v41);
    Next = v15[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v15[1].Next, 1);
      v15[2].Next = 0LL;
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
      RtlpInterlockedPushEntrySList(&v29->ListHead, v15);
      v25 = v40;
    }
    else
    {
      ++v29->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v29->FreeEx)(v15);
      v25 = v40;
    }
    goto LABEL_27;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    Information = -1073741727;
    goto LABEL_16;
  }
  v26 = *((_DWORD *)v10 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v26;
  Information = ObpAllocateObject((_DWORD)v15, a5, (_DWORD)v10, (unsigned int)v41, 216, (__int64)&v40, (__int64)&v39);
  if ( Information < 0 )
    goto LABEL_16;
  v30 = (char *)v40;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v40);
    ObpPushStackInfo((__int64)v30, 1, 1u, 1953261124);
  }
  v25 = v30 + 48;
LABEL_27:
  TransactionParameters = Information;
  if ( Information < 0 )
  {
LABEL_28:
    if ( !a8 )
      *(_QWORD *)a1 = 0LL;
    return (unsigned int)TransactionParameters;
  }
  memset(v25, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v25 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v25 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v25 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v25 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v25 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v31 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v31 )
      *((_QWORD *)v25 + 26) = v31;
  }
  else
  {
    if ( (*(_DWORD *)(a6 + 152) & 0x47) != 0
      || !PsIsHostSilo(*(_QWORD *)(a7 + 8))
      || (v32 = *(_QWORD *)(a6 + 40)) != 0 && (Silo = IoGetSilo(v32), !PsIsHostSilo(Silo)) )
    {
      TransactionParameters = IopAllocateFoExtensionsOnCreate((__int64)v25, a2, a6, a7, a9);
    }
    if ( TransactionParameters >= 0 )
    {
      if ( a5 )
      {
        if ( (*(_DWORD *)(a6 + 152) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(a2 + 48) & 0x40000) != 0
            || (v34 = *(unsigned int *)(a2 + 72), (unsigned int)v34 <= 0x35)
            && (v35 = 0x20000100100108LL, _bittest64(&v35, v34)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(a2, a6, a9, (__int64)v25);
          }
        }
      }
      if ( TransactionParameters >= 0
        && a5
        && !PsIsSystemThread(KeGetCurrentThread())
        && (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
      {
        TransactionParameters = IopCheckInitiatorHint((__int64)v25, *(_QWORD *)(a6 + 40));
      }
    }
    v12 = v48;
  }
  *(_QWORD *)a1 = v25;
  if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v36 = v25[20] | 2;
      v25[20] = v36;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v25[20] = v36 | 4;
    }
    if ( (v25[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v25 + 32), SynchronizationEvent, 0);
      v25[28] = 0;
      *((_QWORD *)v25 + 13) = 0LL;
    }
    v37 = *(_DWORD *)(a6 + 64);
    if ( (v37 & 8) != 0 )
    {
      v25[20] |= 8u;
      v37 = *(_DWORD *)(a6 + 64);
    }
    if ( (v37 & 2) != 0 )
    {
      v25[20] |= 0x10u;
      v37 = *(_DWORD *)(a6 + 64);
    }
    if ( (v37 & 4) != 0 )
    {
      v25[20] |= 0x20u;
      v37 = *(_DWORD *)(a6 + 64);
    }
    if ( (v37 & 0x800) != 0 )
    {
      v25[20] |= 0x100000u;
      v37 = *(_DWORD *)(a6 + 64);
    }
    if ( (v37 & 0x20000) != 0 )
      v25[20] |= 0x2000000u;
  }
  if ( (v12 & 0x40) == 0 )
    v25[20] |= 0x20000u;
  *v25 = 14155781;
  *((_QWORD *)v25 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v25 + 1) = a3;
  *((_QWORD *)v25 + 23) = 0LL;
  *((_QWORD *)v25 + 25) = v25 + 48;
  *((_QWORD *)v25 + 24) = v25 + 48;
  return (unsigned int)TransactionParameters;
}
