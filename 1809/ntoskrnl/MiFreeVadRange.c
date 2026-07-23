/*
 * XREFs of MiFreeVadRange @ 0x140025674
 * Callers:
 *     MmFreeVirtualMemory @ 0x1405F04F0 (MmFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E1E30 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1406E1FB8 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140076C00 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiCanDeleteEnclave @ 0x1402BD004 (MiCanDeleteEnclave.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiPrepareVadDelete @ 0x1405E02B8 (MiPrepareVadDelete.c)
 *     MiAllocateVad @ 0x14067B484 (MiAllocateVad.c)
 *     MiLockNestedVad @ 0x14085FC40 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14085FC5C (MiUnlockNestedVad.c)
 *     PerfInfoLogVirtualFree @ 0x1408BA450 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiFreeVadRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // ebx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  int v9; // ebp
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // edx
  __int64 v16; // r13
  int v17; // edi
  __int64 VadEvent; // rax
  __int64 Vad; // rax
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v6 = a4;
  v7 = (a4 << 12) | 0xFFF;
  v8 = a3 << 12;
  v9 = a3;
  if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0x20000) == 0 )
    goto LABEL_32;
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
LABEL_32:
    result = MiPrepareVadDelete(BugCheckParameter3, a2, v9, v6, (__int64)&v20);
    if ( (int)result >= 0 )
    {
      v13 = 0LL;
      v14 = a5;
      if ( !v20 )
      {
        if ( a6 )
        {
          VadEvent = MiLocateVadEvent(BugCheckParameter3, 128LL);
          v13 = *(_QWORD *)(VadEvent + 8);
          *(_QWORD *)(VadEvent + 8) = 0LL;
          MiLockNestedVad(v13);
          *(_DWORD *)(v13 + 24) = v8 >> 12;
          *(_BYTE *)(v13 + 32) = v8 >> 44;
          *(_DWORD *)(v13 + 28) = v7 >> 12;
          *(_BYTE *)(v13 + 33) = v7 >> 44;
        }
        MiDeleteVad(BugCheckParameter3, v13, 0LL);
LABEL_7:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v8, v7 - v8 + 1, v14);
        return 0LL;
      }
      if ( (*(_DWORD *)(a5 + 772) & 0x20) != 0 )
        return 3221225738LL;
      if ( MiLocateVadEvent(BugCheckParameter3, 2LL) )
        return 3221225541LL;
      v16 = (unsigned int)(v15 + 62);
      if ( a6 )
      {
        result = PsChargeProcessNonPagedPoolQuota(v14, (unsigned int)(v15 + 62));
        if ( (int)result < 0 )
          return result;
        Vad = MiAllocateVad(v8, v7, 2LL);
        v13 = Vad;
        if ( !Vad )
        {
          PsReturnProcessNonPagedPoolQuota(v14, v16);
          return 3221225626LL;
        }
        MiLockNestedVad(Vad);
      }
      v17 = MiDeletePartialVad(BugCheckParameter3, v13);
      if ( v17 >= 0 )
        goto LABEL_7;
      if ( v13 )
      {
        MiUnlockNestedVad(v13);
        ExFreePoolWithTag((PVOID)v13, 0);
        PsReturnProcessNonPagedPoolQuota(v14, v16);
      }
      return (unsigned int)v17;
    }
  }
  return result;
}
