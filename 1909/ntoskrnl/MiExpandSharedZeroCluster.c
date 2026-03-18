/*
 * XREFs of MiExpandSharedZeroCluster @ 0x1400760E0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400ACCF0 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiIsPteEvaluated @ 0x1400763D4 (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x140076424 (MiGetPagingFileOffset.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiComputeZeroClusterMaximum @ 0x14007DA20 (MiComputeZeroClusterMaximum.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUpdatePageTableUseCount @ 0x140138868 (MiUpdatePageTableUseCount.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v2; // r13
  unsigned __int64 v3; // r14
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned int v12; // ebx
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 ProtoPteAddress; // rax
  __int64 v18; // rax
  __int64 v19; // r10
  unsigned int v20; // r15d
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  unsigned int i; // ebx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // r11
  unsigned __int64 v27; // r11
  __int64 v28; // rcx
  _QWORD *v29; // r11
  __int64 v31; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+30h] [rbp-B8h]
  _QWORD v34[13]; // [rsp+40h] [rbp-A8h] BYREF
  char v35; // [rsp+F0h] [rbp+8h]
  __int64 v36; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v37; // [rsp+100h] [rbp+18h]
  unsigned __int64 v38; // [rsp+108h] [rbp+20h]

  memset(v34, 0, 0x58uLL);
  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 56);
  v32 = 0LL;
  v33 = 0LL;
  v35 = 0;
  v5 = *(_QWORD **)(v2 + 120);
  v38 = v3;
  if ( (__int64)v5 < 0 )
    v37 = (unsigned __int64)(*v5 - 1LL) >> 12;
  else
    v37 = -1LL;
  v6 = *(unsigned int *)(v2 + 48);
  if ( (v6 & 0x100000) == 0 && MiVadPageSizes[(v6 >> 18) & 3] == 16 )
  {
    v3 &= 0xFFFFFFFFFFFF0000uLL;
    v33 = 0x10000LL;
    v32 = v3;
    if ( v3 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v3 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    LOWORD(v34[0]) = 2;
    v34[1] = &v32;
    v4 = v34;
    v34[2] = 1LL;
    v34[3] = 0LL;
    v34[4] = 0LL;
    v35 = 1;
  }
  v7 = MiComputeZeroClusterMaximum(v4, &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6], v2);
  v8 = v3 >> 12;
  v9 = 0LL;
  v10 = 0LL;
  v11 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 0;
  if ( !v7 )
    return 1LL;
  v13 = v7;
  do
  {
    if ( (unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(a1 + 32)) )
      break;
    ProtoPteAddress = MiGetProtoPteAddress(v2, v8, 4LL, &v31);
    if ( !ProtoPteAddress || !v31 || v10 && v31 != v10 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v31;
    if ( v8 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v37 )
      break;
    v18 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v36 = v18;
    if ( (v18 & 1) != 0 || !v18 || (v18 & 0x400) != 0 || (v18 & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset(&v36) )
      break;
    if ( !v12 )
      v9 = v19;
    ++v12;
    ++v8;
    v11 += 8LL;
  }
  while ( v12 < v13 );
  v20 = 0;
  if ( v12 <= 1 )
    return 1LL;
  v21 = v38;
  if ( v35 == 1 && v11 <= ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v22 = v12;
  for ( i = 0; i < v22; ++i )
  {
    v24 = *(_DWORD *)(a1 + 32);
    if ( v24 == 256 )
      v25 = (v9 << 16) | 0x400;
    else
      v25 = 32 * (v24 & 0x1F | 0xFFFFFFFFF8000020uLL);
    v36 = MiSwizzleInvalidPte(v25, v14, v15, v16);
    if ( !MI_READ_PTE_LOCK_FREE(v26) )
    {
      if ( MiPteInShadowRange(v27) )
      {
        if ( (unsigned int)MiPteHasShadow(v28) )
        {
          if ( !HIBYTE(word_1404658EC) && (v16 & 1) != 0 )
            v14 |= 0x8000000000000000uLL;
          *v29 = v14;
          MiWritePteShadow(v29, v14);
          goto LABEL_32;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          *v29 = v16;
          goto LABEL_32;
        }
        if ( (v16 & 1) != 0 )
          v14 |= 0x8000000000000000uLL;
      }
      *v29 = v14;
LABEL_32:
      ++v20;
    }
    v9 += 8LL;
  }
  if ( v20 )
    MiUpdatePageTableUseCount(v21, v20);
  return v22;
}
