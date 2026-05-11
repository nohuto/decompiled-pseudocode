/*
 * XREFs of USBMidiOutAllocateRequest @ 0x1C0030E8C
 * Callers:
 *     USBMidiOutCreateBulkUrbs @ 0x1C0007254 (USBMidiOutCreateBulkUrbs.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012700 (memset.c)
 */

__int64 __fastcall USBMidiOutAllocateRequest(PKSSTREAM_POINTER StreamPointer, PSLIST_ENTRY *a2)
{
  NTSTATUS v4; // r15d
  _QWORD *Context; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx
  PSLIST_ENTRY v9; // rsi
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  IRP *Next; // rcx
  struct _SLIST_ENTRY *v15; // r14
  _DWORD *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  void (__fastcall *v20)(PSLIST_ENTRY); // rax

  v4 = -1073741670;
  Context = StreamPointer->Pin->Context;
  v6 = Context[19];
  v7 = Context[2];
  v8 = *(_QWORD *)(v6 + 80);
  ++*(_DWORD *)(v8 + 20);
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v8);
  if ( v9
    || (v10 = *(unsigned int *)(v8 + 44),
        v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v8 + 48),
        v12 = *(unsigned int *)(v8 + 40),
        v13 = *(unsigned int *)(v8 + 36),
        ++*(_DWORD *)(v8 + 24),
        (v9 = (PSLIST_ENTRY)v11(v13, v10, v12)) != 0LL) )
  {
    Next = (IRP *)v9[1].Next;
    if ( Next )
      IoInitializeIrp(Next, 72 * *(char *)(*(_QWORD *)(v7 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v7 + 40) + 76LL));
    else
      v9[1].Next = (struct _SLIST_ENTRY *)IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(Context[2] + 40LL) + 76LL), 0);
    v15 = v9[1].Next;
    if ( v15 && (v4 = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)&v9[2].Next + 1), v4 >= 0) )
    {
      v16 = (_DWORD *)*((_QWORD *)&v9[1].Next + 1);
      v17 = *((_QWORD *)&v15[11].Next + 1);
      memset(v16, 0, 0x80uLL);
      *(_BYTE *)(v17 - 72) = 15;
      *(_QWORD *)(v17 - 64) = v16;
      *(_DWORD *)(v17 - 48) = 2228227;
      v18 = *((_QWORD *)&v15[11].Next + 1);
      *a2 = v9;
      *(_QWORD *)(v18 - 16) = USBMidiOutCompleteCallback;
      *(_QWORD *)(v18 - 8) = v9;
      *(_BYTE *)(v18 - 69) = -32;
      *v16 = 589952;
      *((_QWORD *)v16 + 3) = *(_QWORD *)(v6 + 56);
      v16[8] = 2;
      *((_QWORD *)v16 + 5) = v9[3].Next;
    }
    else
    {
      v19 = *(_QWORD *)(v6 + 80);
      ++*(_DWORD *)(v19 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v19) < *(_WORD *)(v19 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v19, v9);
      }
      else
      {
        v20 = *(void (__fastcall **)(PSLIST_ENTRY))(v19 + 56);
        ++*(_DWORD *)(v19 + 32);
        v20(v9);
      }
    }
  }
  return (unsigned int)v4;
}
