/*
 * XREFs of MiFreeVadRange @ 0x1400E71E8
 * Callers:
 *     MmFreeVirtualMemory @ 0x1406086D0 (MmFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x14071AC58 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140729224 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059100 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400734A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiLocateLockedVadEvent @ 0x1400E8428 (MiLocateLockedVadEvent.c)
 *     MiCanDeleteEnclave @ 0x1402D34C4 (MiCanDeleteEnclave.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiPrepareVadDelete @ 0x14067F340 (MiPrepareVadDelete.c)
 *     MiAllocateVad @ 0x1406860F4 (MiAllocateVad.c)
 *     MiLockNestedVad @ 0x14089B0C0 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14089B0DC (MiUnlockNestedVad.c)
 *     PerfInfoLogVirtualFree @ 0x1408F5658 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiFreeVadRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  int v9; // ebx
  int v10; // ebp
  __int64 result; // rax
  __int64 v14; // rbx
  struct _KPROCESS *v15; // rbp
  int v16; // edx
  __int64 v17; // r13
  int v18; // edi
  __int64 LockedVadEvent; // rax
  __int64 Vad; // rax
  int v21; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_DWORD *)(BugCheckParameter3 + 48);
  v7 = (a4 << 12) | 0xFFF;
  v8 = a3 << 12;
  v9 = a4;
  v10 = a3;
  if ( (v6 & 0x100000) == 0 || (v6 & 0x1000000) != 0 || (v6 & 0x2000000) == 0 )
    goto LABEL_34;
  if ( a3 != (*(unsigned int *)(BugCheckParameter3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 32) << 32))
    || a4 != (*(unsigned int *)(BugCheckParameter3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = MiCanDeleteEnclave(BugCheckParameter3);
  if ( (int)result >= 0 )
  {
LABEL_34:
    result = MiPrepareVadDelete(BugCheckParameter3, a2, v10, v9, (__int64)&v21);
    if ( (int)result >= 0 )
    {
      v14 = 0LL;
      v15 = (struct _KPROCESS *)a5;
      if ( !v21 )
      {
        if ( a6 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(BugCheckParameter3, 128LL);
          v14 = *(_QWORD *)(LockedVadEvent + 8);
          *(_QWORD *)(LockedVadEvent + 8) = 0LL;
          MiLockNestedVad(v14);
          *(_DWORD *)(v14 + 24) = v8 >> 12;
          *(_BYTE *)(v14 + 32) = v8 >> 44;
          *(_DWORD *)(v14 + 28) = v7 >> 12;
          *(_BYTE *)(v14 + 33) = v7 >> 44;
        }
        MiDeleteVad((unsigned int *)BugCheckParameter3, v14, 0);
LABEL_9:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v8, v7 - v8 + 1, v15);
        return 0LL;
      }
      if ( (*(_DWORD *)(a5 + 780) & 0x20) != 0 )
        return 3221225738LL;
      if ( MiLocateLockedVadEvent(BugCheckParameter3, 2LL) )
        return 3221225541LL;
      v17 = (unsigned int)(v16 + 62);
      if ( a6 )
      {
        result = PsChargeProcessNonPagedPoolQuota((__int64)v15, (unsigned int)(v16 + 62));
        if ( (int)result < 0 )
          return result;
        Vad = MiAllocateVad(v8, v7, 2LL);
        v14 = Vad;
        if ( !Vad )
        {
          PsReturnProcessNonPagedPoolQuota(v15, v17);
          return 3221225626LL;
        }
        MiLockNestedVad(Vad);
      }
      v18 = MiDeletePartialVad(BugCheckParameter3, v14);
      if ( v18 >= 0 )
        goto LABEL_9;
      if ( v14 )
      {
        MiUnlockNestedVad(v14);
        ExFreePoolWithTag((PVOID)v14, 0);
        PsReturnProcessNonPagedPoolQuota(v15, v17);
      }
      return (unsigned int)v18;
    }
  }
  return result;
}
