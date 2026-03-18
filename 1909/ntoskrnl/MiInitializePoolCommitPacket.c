/*
 * XREFs of MiInitializePoolCommitPacket @ 0x140022C54
 * Callers:
 *     MiCommitPoolMemory @ 0x140022E20 (MiCommitPoolMemory.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiGetPoolPages @ 0x14007C1AC (MiGetPoolPages.c)
 *     MiGetLargePageChain @ 0x1400969FC (MiGetLargePageChain.c)
 *     MiObtainPoolCharges @ 0x1400DE368 (MiObtainPoolCharges.c)
 *     MiReturnPoolCharges @ 0x14011072C (MiReturnPoolCharges.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInitializePoolCommitPacket(
        _QWORD *a1,
        ULONG_PTR *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  ULONG_PTR v7; // r14
  int v8; // ebx
  unsigned int ProtectionMask; // eax
  ULONG_PTR v10; // r8
  unsigned int v11; // r9d
  int v12; // ecx
  __int64 v13; // rsi
  int v14; // edx
  unsigned __int16 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 LargePageChain; // rax
  __int64 PoolPages; // rax
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+48h] [rbp-30h]
  __int128 v26; // [rsp+50h] [rbp-28h]

  v7 = *a2;
  v8 = a3 & 0x7F;
  *(_QWORD *)(a6 + 8) = *a1;
  ProtectionMask = MiMakeProtectionMask(a4);
  if ( ProtectionMask > 0x18 || (v12 = 16777298, !_bittest(&v12, ProtectionMask)) )
    KeBugCheckEx(0x1Au, 0x5300uLL, v10, v7, v11);
  *(_QWORD *)(a6 + 24) = 0LL;
  *(_DWORD *)(a6 + 48) = 0;
  *(_DWORD *)(a6 + 20) = ProtectionMask;
  *(_QWORD *)(a6 + 40) = &unk_140466DC0;
  *(_DWORD *)(a6 + 32) = 5;
  *(_QWORD *)(a6 + 56) = (((v7 + v10 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((__int64)((((v7 + v10 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((v10 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (a5 & 1) != 0 )
  {
    if ( (a5 & 0x20) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v14 = 1;
      *(_DWORD *)(a6 + 48) = 2;
      v15 = (unsigned __int16 *)(CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 256);
    }
    else
    {
      v14 = 6;
      v15 = (unsigned __int16 *)&unk_140466A00;
    }
    v16 = v15[87];
    *(_QWORD *)(a6 + 40) = v15;
    v17 = qword_140465E88;
    *(_DWORD *)(a6 + 32) = v14;
    v18 = (unsigned int)MiChargeCommit(*(_QWORD *)(v17 + 8 * v16), v13, 1LL) == 0;
LABEL_7:
    if ( !v18 )
    {
LABEL_8:
      *(_QWORD *)(a6 + 88) = 0LL;
      *(_QWORD *)(a6 + 96) = 0LL;
      *(_QWORD *)(a6 + 64) = 0LL;
      result = 0LL;
      *(_QWORD *)(a6 + 80) = v13;
      *(_QWORD *)a6 = v7;
      *(_DWORD *)(a6 + 72) = a3;
      *(_DWORD *)(a6 + 16) = a5;
      *(_BYTE *)(a6 + 77) = 0;
      return result;
    }
    return 3221225626LL;
  }
  if ( (a3 & 0x20000000) == 0 )
  {
    PoolPages = MiGetPoolPages(a3, (unsigned int)(v8 - 1), v13);
    *(_QWORD *)(a6 + 24) = PoolPages;
    v18 = PoolPages == 0;
    goto LABEL_7;
  }
  if ( (unsigned int)MiObtainPoolCharges(v13, 0LL) )
  {
    LargePageChain = MiGetLargePageChain((unsigned int)(v8 - 1), v13);
    *(_QWORD *)(a6 + 24) = LargePageChain;
    if ( LargePageChain )
      goto LABEL_8;
    v25 = v13;
    v23 = v13;
    v24 = 0LL;
    v26 = 0LL;
    MiReturnPoolCharges(&v23, 0LL);
  }
  return 3221225626LL;
}
