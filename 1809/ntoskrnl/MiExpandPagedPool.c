/*
 * XREFs of MiExpandPagedPool @ 0x1401642EC
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MmAllocatePoolMemory @ 0x140099080 (MmAllocatePoolMemory.c)
 *     MiFreeExcessSegments @ 0x1401644D4 (MiFreeExcessSegments.c)
 */

__int64 __fastcall MiExpandPagedPool(ULONG_PTR *a1, unsigned __int64 a2)
{
  int v2; // edi
  unsigned __int64 v5; // rbx
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  ULONG_PTR v9; // r15
  ULONG_PTR v10; // rdi
  ULONG_PTR *v11; // r12
  unsigned __int64 v12; // r15
  ULONG_PTR v14; // rax
  __int64 v15; // r15
  ULONG_PTR v16; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v17; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-18h]
  unsigned int v19; // [rsp+A0h] [rbp+48h]
  int v20; // [rsp+A8h] [rbp+50h]
  int v21; // [rsp+B0h] [rbp+58h]
  ULONG_PTR v22; // [rsp+B8h] [rbp+60h] BYREF

  v2 = 1;
  v20 = 1;
  if ( a1 == &qword_14043C018 )
  {
    MiFreeExcessSegments(a1);
    v5 = 0LL;
    v19 = 6;
LABEL_3:
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    goto LABEL_4;
  }
  v19 = 1;
  v2 = 33;
  v20 = 33;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( !v5 )
    goto LABEL_3;
  AnyMultiplexedVm = (char *)(v5 + 3008);
LABEL_4:
  v22 = 0LL;
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v8 = KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
  v18 = v7 >> 9;
  LODWORD(v8) = *(unsigned __int16 *)(*(_QWORD *)(v8 + 192) + 146LL);
  v16 = (unsigned __int64)(unsigned int)(v7 >> 9) << 21;
  v21 = v8 + 1;
  if ( (int)MmAllocatePoolMemory(&v22, &v16, (v8 + 1) | 0x2000, 4, v2) < 0 )
  {
    if ( !v5 )
    {
      ++dword_140439B60;
      goto LABEL_21;
    }
    ++dword_140439B64;
LABEL_32:
    if ( v5 )
    {
      ++dword_140439B48;
      ++*(_DWORD *)(v5 + 92);
      return -1LL;
    }
LABEL_21:
    ++dword_140439B3C;
    return -1LL;
  }
  v9 = v22;
  v10 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 >= 0x80000 )
  {
    v15 = *(_QWORD *)(qword_14043B808 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
    if ( !(unsigned int)MiChargeCommit(v15, a2, 1u) )
    {
      ++dword_140439B68;
LABEL_26:
      if ( v5 )
        ++dword_140439B6C;
      else
        ++dword_140439B68;
      if ( v22 )
        MiReturnSystemVa(v22, (__int64)((v7 << 28) + (v10 << 25)) >> 16, v19);
      goto LABEL_32;
    }
    MiReturnCommit(v15, a2);
    v9 = v22;
  }
  v11 = a1 + 1;
  v12 = (__int64)(((v9 >> 9) & 0x7FFFFFFFF8LL) - a1[3] - 0x98000000000LL) >> 3;
  if ( !(unsigned int)MiSplitBitmapPages(v19, a1[2] + (v12 >> 3), v7 + (v12 & 7)) )
    goto LABEL_26;
  if ( v12 + v7 > *v11 )
  {
    v14 = a1[4];
    if ( v12 + v7 <= v14 )
      v14 = v12 + v7;
    *v11 = v14;
  }
  v16 = a2 << 12;
  v17 = v22;
  if ( (int)MmAllocatePoolMemory(&v17, &v16, v21 | 0x1000u, 4, v20) < 0 )
    goto LABEL_26;
  if ( v5 )
    *(_DWORD *)(v5 + 8124) += v18;
  if ( v7 != a2 )
    RtlClearBitsEx((__int64)(a1 + 1), v12 + a2, v7 - a2);
  return v12;
}
