/*
 * XREFs of MiExpandSharedZeroCluster @ 0x14010F790
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiIsPteEvaluated @ 0x14010FA54 (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiComputeZeroClusterMaximum @ 0x14010FB04 (MiComputeZeroClusterMaximum.c)
 *     MiUpdatePageTableUseCount @ 0x14010FC78 (MiUpdatePageTableUseCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int64 v3; // r14
  __int16 *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned int v11; // ebx
  unsigned __int64 v12; // r15
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v14; // rax
  __int64 v15; // r10
  unsigned int v16; // r15d
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned int i; // ebx
  int v20; // ecx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r11
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r11
  char v28; // r9
  __int64 v29; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v30[3]; // [rsp+28h] [rbp-C0h] BYREF
  __int16 v31; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD *v32; // [rsp+48h] [rbp-A0h]
  __int64 v33; // [rsp+50h] [rbp-98h]
  __int64 v34; // [rsp+58h] [rbp-90h]
  __int64 v35; // [rsp+60h] [rbp-88h]
  char v36; // [rsp+F0h] [rbp+8h]
  __int64 v37; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v38; // [rsp+100h] [rbp+18h]
  unsigned __int64 v39; // [rsp+108h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(__int16 **)(a1 + 56);
  v36 = 0;
  v5 = *(_QWORD **)(v1 + 120);
  v39 = v3;
  if ( (__int64)v5 < 0 )
    v38 = (unsigned __int64)(*v5 - 1LL) >> 12;
  else
    v38 = -1LL;
  if ( (*(_DWORD *)(v1 + 48) & 0x44000) == 0x40000 )
  {
    v3 &= 0xFFFFFFFFFFFF0000uLL;
    v30[1] = 0x10000LL;
    v30[0] = v3;
    if ( v3 >> 12 < (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32))
      || (v3 + 0xFFFF) >> 12 > (*(unsigned int *)(v1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 33) << 32)) )
    {
      return 1LL;
    }
    v31 = 2;
    v32 = v30;
    v4 = &v31;
    v33 = 1LL;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 1;
  }
  v6 = MiComputeZeroClusterMaximum(v4, &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12], v1);
  v7 = v3 >> 12;
  v8 = 0LL;
  v9 = 0LL;
  v10 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = 0;
  if ( !v6 )
    return 1LL;
  v12 = v6;
  do
  {
    if ( (unsigned int)MiIsPteEvaluated(v10, *(unsigned int *)(a1 + 32)) )
      break;
    ProtoPteAddress = MiGetProtoPteAddress(v1, v7, 4, &v29);
    if ( !ProtoPteAddress || !v29 || v9 && v29 != v9 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v9 )
      v9 = v29;
    if ( v7 - (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32)) > v38 )
      break;
    v14 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v37 = v14;
    if ( (v14 & 1) != 0 || !v14 || (v14 & 0x400) != 0 || (v14 & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset(&v37) )
      break;
    if ( !v11 )
      v8 = v15;
    ++v11;
    ++v7;
    v10 += 8LL;
  }
  while ( v11 < v12 );
  v16 = 0;
  if ( v11 <= 1 )
    return 1LL;
  v17 = v39;
  if ( v36 == 1 && v10 <= ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v18 = v11;
  for ( i = 0; i < v18; ++i )
  {
    v20 = *(_DWORD *)(a1 + 32);
    if ( v20 == 256 )
      v21 = (v8 << 16) | 0x400;
    else
      v21 = 32 * (v20 & 0x1F | 0xFFFFFFFFF8000020uLL);
    v37 = MiSwizzleInvalidPte(v21);
    if ( !MI_READ_PTE_LOCK_FREE(v22) )
    {
      if ( MiPteInShadowRange(v23) )
      {
        if ( (unsigned int)MiPteHasShadow(v25, v24) )
        {
          if ( !HIBYTE(word_14043B26C) && (v28 & 1) != 0 )
            v24 |= 0x8000000000000000uLL;
          *v26 = v24;
          MiWritePteShadow(v26);
          goto LABEL_31;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v28 & 1) != 0 )
        {
          v24 |= 0x8000000000000000uLL;
        }
      }
      *v26 = v24;
LABEL_31:
      ++v16;
    }
    v8 += 8LL;
  }
  if ( v16 )
    MiUpdatePageTableUseCount(v17, v16);
  return v18;
}
