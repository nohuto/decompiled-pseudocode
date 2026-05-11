/*
 * XREFs of USBType1BuildIsochUrbRequest @ 0x1C0004484
 * Callers:
 *     USBType1Build1MsecIsocRequest @ 0x1C0004BF4 (USBType1Build1MsecIsocRequest.c)
 *     USBType1ProcessStreamPointer @ 0x1C0004DC8 (USBType1ProcessStreamPointer.c)
 *     USBType1LockDelay @ 0x1C002F540 (USBType1LockDelay.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C00033F4 (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012500 (memmove.c)
 *     memset @ 0x1C0012840 (memset.c)
 */

__int64 __fastcall USBType1BuildIsochUrbRequest(
        PKSSTREAM_POINTER StreamPointer,
        __int64 (__fastcall *a2)(__int64 a1, __int64 a2, __int64 *a3))
{
  PKSSTREAM_POINTER v2; // r14
  char *Context; // r15
  PSLIST_ENTRY p_ListEntry; // rsi
  bool v5; // r8
  bool v6; // r9
  __int64 v7; // r13
  ULONG Remaining; // eax
  int v9; // ecx
  unsigned int v10; // r12d
  struct _SLIST_ENTRY *v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  PSLIST_ENTRY *v18; // rax
  __int64 v19; // rdi
  ULONG v20; // esi
  KSPIN_LOCK *v21; // rbx
  __int64 v22; // r15
  unsigned int v23; // edi
  ULONG v24; // r14d
  int v25; // r8d
  unsigned int v26; // ecx
  KIRQL v27; // dl
  int v28; // eax
  PSLIST_ENTRY v29; // rbx
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  struct _KSSTREAM_POINTER *v32; // rdi
  KIRQL v33; // al
  struct _KSPIN *v34; // rdx
  PKSPIN *p_Pin; // rdi
  PKSPIN v36; // r8
  KIRQL v37; // al
  PKSPIN v38; // rdi
  void *v39; // rcx
  __int64 (__fastcall *v40)(__int64, __int64, __int64); // r12
  bool v41; // zf
  struct _SLIST_ENTRY *Next; // rax
  IRP *v43; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  struct _IO_STACK_LOCATION *v48; // rax
  KIRQL v49; // al
  PSLIST_ENTRY *v50; // rdx
  KSPIN_LOCK *v51; // rdi
  KIRQL v52; // al
  PSLIST_ENTRY v53; // rax
  __int64 v54; // rbx
  KIRQL v55; // al
  struct _KSPIN *v56; // rcx
  KIRQL v57; // di
  PKSGATE i; // rax
  int Timeout; // [rsp+20h] [rbp-59h]
  signed __int64 Size; // [rsp+40h] [rbp-39h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-31h] BYREF
  PSLIST_ENTRY *p_Next; // [rsp+50h] [rbp-29h]
  ULONG InUsed; // [rsp+58h] [rbp-21h]
  unsigned int v65; // [rsp+5Ch] [rbp-1Dh]
  PSLIST_ENTRY v66; // [rsp+60h] [rbp-19h]
  __int64 v67; // [rsp+68h] [rbp-11h]
  __int64 v68; // [rsp+70h] [rbp-9h]
  char *v69; // [rsp+78h] [rbp-1h]
  PKSPIN Pin; // [rsp+80h] [rbp+7h]
  PKSSTREAM_POINTER StreamPointerb; // [rsp+E0h] [rbp+67h]
  __int64 (__fastcall *v73)(__int64, __int64, __int64 *); // [rsp+E8h] [rbp+6Fh]
  bool v74; // [rsp+F0h] [rbp+77h]
  bool v75; // [rsp+F8h] [rbp+7Fh]

  v73 = a2;
  Pin = StreamPointer->Pin;
  v75 = 0;
  v2 = StreamPointer;
  v74 = 0;
  Context = (char *)Pin->Context;
  p_ListEntry = (PSLIST_ENTRY)&ListEntry;
  v69 = Context;
  v5 = 0;
  v6 = 0;
  v7 = *((_QWORD *)Context + 19);
  v67 = *((_QWORD *)Context + 2);
  Remaining = StreamPointer->OffsetIn.Remaining;
  v9 = 0;
  Size = Remaining;
  v10 = *(_DWORD *)(v7 + 8)
      * (*(_DWORD *)(v7 + 116) + (((*(_DWORD *)(v7 + 120) + *(_DWORD *)(v7 + 112)) & 0xFFFFC000) >= 0xFA0000));
  p_Next = &ListEntry;
  ListEntry = (PSLIST_ENTRY)&ListEntry;
  if ( Remaining < v10 )
    goto LABEL_34;
  while ( v9 >= 0 && !v5 )
  {
    if ( a2 == USBType1MsCompleteCallback )
    {
      v11 = (struct _SLIST_ENTRY *)v2->Context;
      v12 = 1;
      v66 = (PSLIST_ENTRY)v2->Context;
    }
    else
    {
      v13 = *(_QWORD *)(v7 + 128);
      ++*(_DWORD *)(v13 + 20);
      v66 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v13);
      v11 = v66;
      if ( !v66 )
      {
        v14 = *(unsigned int *)(v13 + 44);
        v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v13 + 48);
        v16 = *(unsigned int *)(v13 + 40);
        v17 = *(unsigned int *)(v13 + 36);
        ++*(_DWORD *)(v13 + 24);
        v11 = (struct _SLIST_ENTRY *)v15(v17, v14, v16);
        v66 = v11;
      }
      Remaining = Size;
      a2 = v73;
      v12 = 32;
    }
    v65 = v12;
    if ( !v11 )
      goto LABEL_28;
    v18 = p_Next;
    v19 = *((_QWORD *)&v11[1].Next + 1);
    v68 = v19;
    if ( *p_Next != (PSLIST_ENTRY)&ListEntry )
      goto LABEL_74;
    *((_QWORD *)&v11->Next + 1) = p_Next;
    v11->Next = (struct _SLIST_ENTRY *)&ListEntry;
    *v18 = v11;
    p_Next = &v11->Next;
    memset((void *)v19, 0, 12LL * v12 + 152);
    *(_WORD *)(v19 + 2) = 10;
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(v7 + 64);
    *(_QWORD *)(v19 + 40) = v2->OffsetIn.Data;
    if ( *(_BYTE *)(v7 + 96) )
      *(_DWORD *)(v19 + 128) = *(_DWORD *)(v7 + 904);
    else
      *(_DWORD *)(v19 + 32) = 4;
    v20 = Size;
    v21 = (KSPIN_LOCK *)(Context + 112);
    v22 = v68;
    v23 = 0;
    v24 = 0;
    do
    {
      if ( v20 < v10 || v75 )
        break;
      v20 -= v10;
      *(_DWORD *)(v22 + 12LL * v23 + 140) = v24;
      v24 += v10;
      v25 = *(_DWORD *)(v7 + 120);
      v26 = (v25 + *(_DWORD *)(v7 + 112)) % 0xFA0000u;
      *(_DWORD *)(v7 + 112) = v26;
      v10 = *(_DWORD *)(v7 + 8) * (*(_DWORD *)(v7 + 116) + (((v25 + v26) & 0xFFFFC000) >= 0xFA0000));
      v27 = KeAcquireSpinLockRaiseToDpc(v21);
      if ( *(_BYTE *)(v7 + 96) )
      {
        v41 = *(_DWORD *)(v7 + 908) == 1;
        v28 = *(_DWORD *)(v7 + 908) - 1;
        *(_DWORD *)(v7 + 908) = v28;
        v75 = v41;
        if ( !v28 )
          *(_DWORD *)(v7 + 908) = *(_DWORD *)(v7 + 900);
        ++*(_DWORD *)(v7 + 904);
      }
      KeReleaseSpinLock(v21, v27);
      ++v23;
    }
    while ( v23 < v65 );
    v29 = v66;
    a2 = v73;
    *(_DWORD *)(v22 + 132) = v23;
    *(_DWORD *)(v22 + 36) = v24;
    InUsed = v24;
    *(_WORD *)v22 = 12 * v23 + 152;
    Context = v69;
    HIDWORD(v29[2].Next) = v24;
    v2 = StreamPointer;
    LODWORD(Size) = v20;
    if ( v73 == USBType1MsCompleteCallback || (char *)v73 == (char *)USBType1LockDelayCompleteCallback )
    {
      v31 = InUsed;
      Remaining = v20;
      *((_QWORD *)&v29[2].Next + 1) = StreamPointer;
      StreamPointer->OffsetIn.Data += v31;
      StreamPointer->OffsetIn.Remaining -= v31;
LABEL_28:
      v6 = v74;
LABEL_29:
      v9 = HIDWORD(Size);
      goto LABEL_30;
    }
    *((_QWORD *)&v29[2].Next + 1) = 0LL;
    HIDWORD(Size) = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)&v29[2].Next + 1);
    v9 = HIDWORD(Size);
    if ( Size >= 0 )
    {
      v30 = KsStreamPointerAdvanceOffsets(StreamPointer, InUsed, 0, 0);
      a2 = v73;
      v41 = v30 == 0;
      Remaining = v20;
      v6 = v41;
      v74 = v41;
      goto LABEL_29;
    }
    a2 = v73;
    v6 = v74;
    Remaining = v20;
LABEL_30:
    v5 = v75;
    if ( Remaining < v10 )
      goto LABEL_33;
  }
  v6 = v74;
LABEL_33:
  p_ListEntry = ListEntry;
LABEL_34:
  if ( (char *)a2 == (char *)USBType1LockDelayCompleteCallback )
    goto LABEL_49;
  if ( !Remaining )
  {
    v41 = !v6;
    goto LABEL_46;
  }
  if ( v5 )
  {
    v41 = a2 == USBType1MsCompleteCallback;
LABEL_46:
    if ( !v41 )
    {
      KsStreamPointerUnlock(v2, 0);
      goto LABEL_48;
    }
LABEL_49:
    v40 = (__int64 (__fastcall *)(__int64, __int64, __int64))v73;
    goto LABEL_50;
  }
  v32 = (struct _KSSTREAM_POINTER *)*((_QWORD *)Context + 19);
  StreamPointerb = v32;
  if ( a2 == USBType1MsCompleteCallback && Remaining == v2->OffsetIn.Count )
  {
    v32[1].OffsetOut.Remaining = v10 - Remaining;
    v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    v34 = (struct _KSPIN *)v2->Context;
    p_Pin = &v32[2].Pin;
    v36 = *p_Pin;
    if ( (*p_Pin)->Bag != p_Pin )
LABEL_74:
      __fastfail(3u);
    v34->Descriptor = (const KSPIN_DESCRIPTOR_EX *)v36;
    v34->Bag = p_Pin;
    v36->Bag = v34;
    *p_Pin = v34;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v33);
    ExFreePool(v2);
LABEL_48:
    p_ListEntry = ListEntry;
    goto LABEL_49;
  }
  KeWaitForSingleObject(&v32[2].Offset, Executive, 0, 0, 0LL);
  v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
  v38 = v32[2].Pin;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v37);
  v39 = (void *)*(&v38->ConnectionInterface.Alignment + 1);
  *((_DWORD *)&v38->ConnectionIsExternal + 1) = Size;
  memmove(v39, v2->OffsetIn.Data, (unsigned int)Size);
  StreamPointerb[1].OffsetOut.Remaining = v10 - Size;
  v40 = (__int64 (__fastcall *)(__int64, __int64, __int64))v73;
  if ( v73 != USBType1MsCompleteCallback )
    KsStreamPointerAdvanceOffsetsAndUnlock(v2, Size, 0, 0);
  p_ListEntry = ListEntry;
LABEL_50:
  if ( p_ListEntry != (PSLIST_ENTRY)&ListEntry )
  {
    do
    {
      if ( !*((_QWORD *)&p_ListEntry[2].Next + 1) )
        break;
      if ( *((PSLIST_ENTRY **)&p_ListEntry->Next + 1) != &ListEntry )
        goto LABEL_74;
      Next = p_ListEntry->Next;
      if ( *(&p_ListEntry->Next->Next + 1) != p_ListEntry )
        goto LABEL_74;
      ListEntry = p_ListEntry->Next;
      *((_QWORD *)&Next->Next + 1) = &ListEntry;
      v43 = (IRP *)p_ListEntry[1].Next;
      CurrentStackLocation = v43->Tail.Overlay.CurrentStackLocation;
      IoInitializeIrp(v43, 72 * *(char *)(*(_QWORD *)(v67 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v67 + 40) + 76LL));
      CurrentStackLocation[-1].MajorFunction = 15;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = *((_QWORD *)&p_ListEntry[1].Next + 1);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
      v48 = v43->Tail.Overlay.CurrentStackLocation;
      v48[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)v40;
      v48[-1].Context = p_ListEntry;
      v48[-1].Control = -32;
      _InterlockedIncrement((volatile signed __int32 *)Context + 14);
      if ( v40 != USBType1LockDelayCompleteCallback )
      {
        v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        *((_QWORD *)Context + 10) += HIDWORD(p_ListEntry[2].Next);
        v50 = (PSLIST_ENTRY *)*((_QWORD *)Context + 9);
        if ( *v50 != (PSLIST_ENTRY)(Context + 64) )
          goto LABEL_74;
        p_ListEntry->Next = (struct _SLIST_ENTRY *)(Context + 64);
        *((_QWORD *)&p_ListEntry->Next + 1) = v50;
        *v50 = p_ListEntry;
        *((_QWORD *)Context + 9) = p_ListEntry;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v49);
      }
      v51 = (KSPIN_LOCK *)(Context + 112);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, v45, v46, v47, Timeout);
      if ( IofCallDriver(*(PDEVICE_OBJECT *)(v67 + 40), (PIRP)p_ListEntry[1].Next) >= 0
        && v40 != USBType1LockDelayCompleteCallback )
      {
        v52 = KeAcquireSpinLockRaiseToDpc(v51);
        Context[45] = 1;
        KeReleaseSpinLock(v51, v52);
      }
      p_ListEntry = ListEntry;
      HIDWORD(Size) = 0;
    }
    while ( ListEntry != (PSLIST_ENTRY)&ListEntry );
    while ( p_ListEntry != (PSLIST_ENTRY)&ListEntry )
    {
      if ( *((PSLIST_ENTRY **)&p_ListEntry->Next + 1) != &ListEntry )
        goto LABEL_74;
      v53 = p_ListEntry->Next;
      if ( *(&p_ListEntry->Next->Next + 1) != p_ListEntry )
        goto LABEL_74;
      ListEntry = p_ListEntry->Next;
      *((_QWORD *)&v53->Next + 1) = &ListEntry;
      v54 = *(_QWORD *)(v7 + 128);
      ++*(_DWORD *)(v54 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v54) < *(_WORD *)(v54 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v54, p_ListEntry);
      }
      else
      {
        ++*(_DWORD *)(v54 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY))(v54 + 56))(p_ListEntry);
      }
      p_ListEntry = ListEntry;
    }
  }
  if ( v75 )
  {
    v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    v56 = Pin;
    v57 = v55;
    Context[44] = 1;
    for ( i = KsPinGetAndGate(v56); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v57);
  }
  return HIDWORD(Size);
}
