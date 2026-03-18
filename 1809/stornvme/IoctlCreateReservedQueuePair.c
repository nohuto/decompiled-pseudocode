/*
 * XREFs of IoctlCreateReservedQueuePair @ 0x1C001057C
 * Callers:
 *     IoctlToNVMe @ 0x1C0002698 (IoctlToNVMe.c)
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
 *     GetFreeReservedQueueIndex @ 0x1C0010408 (GetFreeReservedQueueIndex.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0015B08 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0015F44 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0016A24 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0016DA0 (NVMeReservedSubmissionQueueCreate.c)
 */

__int64 __fastcall IoctlCreateReservedQueuePair(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r11
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int16 v10; // r11
  unsigned __int16 FreeReservedQueueIndex; // r12
  int v12; // ecx
  unsigned __int16 v13; // r14
  unsigned __int16 v14; // r11
  unsigned __int16 v15; // ax
  __int64 v16; // r13
  bool v17; // cf
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rax
  _QWORD *v22; // rdx
  unsigned __int16 v25; // [rsp+130h] [rbp+18h]
  void *v26; // [rsp+138h] [rbp+20h]

  v2 = *(_WORD *)(a1 + 798);
  v4 = a2;
  v5 = 0;
  if ( !v2 || *(_WORD *)(a1 + 770) >= v2 || *(_WORD *)(a1 + 768) >= v2 )
  {
    v5 = -1056964601;
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(_QWORD *)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    v7 = 16LL;
  }
  v8 = *(unsigned int *)(v7 + a2);
  if ( (unsigned int)v8 >= 0x9C )
  {
    v9 = *(unsigned __int16 *)(v6 + 60);
    v26 = (void *)(v6 + *(unsigned int *)(v6 + 36) + 28LL);
    if ( v8 < 48 * v9 + 108 )
    {
      *(_BYTE *)(v4 + 3) = 18;
      v5 = -1056964604;
      goto LABEL_35;
    }
    if ( *(unsigned int *)(v6 + 40) < (unsigned __int64)(32 * v9 + 40) )
    {
      v5 = -1056964604;
      goto LABEL_35;
    }
    FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
    if ( FreeReservedQueueIndex == 0xFFFF
      || (v12 = *(unsigned __int16 *)(a1 + 266), v13 = FreeReservedQueueIndex + v12 + 1, v13 > (unsigned int)v10 + v12) )
    {
      v5 = -1056964601;
      goto LABEL_35;
    }
    if ( (unsigned __int16)NVMeReservedCompletionQueueCreate(a1, v13, v4) )
    {
      *(_DWORD *)(a1 + 24) = 18;
      v5 = -1056964607;
      goto LABEL_35;
    }
    v14 = 0;
    v15 = v13;
    v16 = *(_QWORD *)(a1 + 784) + 32LL * FreeReservedQueueIndex;
    v17 = *(_WORD *)(v6 + 60) != 0;
    v25 = 0;
    while ( 1 )
    {
      if ( !v17 )
      {
        *(_BYTE *)(v4 + 3) = 1;
        return v5;
      }
      if ( (unsigned __int16)NVMeReservedSubmissionQueueCreate(a1, v4, v15, v13, FreeReservedQueueIndex, v14) )
        break;
      ++*(_WORD *)(v16 + 26);
      v14 = v25 + 1;
      v18 = *(_WORD *)(v6 + 60);
      v25 = v14;
      if ( v14 < v18 )
      {
        FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
        if ( FreeReservedQueueIndex == 0xFFFF )
          goto LABEL_27;
      }
      v15 = FreeReservedQueueIndex + *(_WORD *)(a1 + 264) + 1;
      v17 = v14 < v18;
    }
    *(_DWORD *)(a1 + 24) = 18;
    v5 = -1056964607;
LABEL_27:
    if ( v13 )
    {
      v19 = 0;
      if ( *(_WORD *)(a1 + 768) )
      {
        do
        {
          v20 = 32LL * v19;
          if ( *(_WORD *)(v20 + *(_QWORD *)(a1 + 776) + 20) == v13 )
          {
            NVMeIoSubmissionQueueDelete(a1, (unsigned __int16)(v19 + *(_WORD *)(a1 + 264) + 1));
            v21 = *(_QWORD *)(a1 + 776);
            *(_QWORD *)(v20 + v21) = 0LL;
            *(_QWORD *)(v20 + v21 + 8) = 0LL;
            *(_QWORD *)(v20 + v21 + 16) = 0LL;
            *(_QWORD *)(v20 + v21 + 24) = 0LL;
          }
          ++v19;
        }
        while ( v19 < *(_WORD *)(a1 + 768) );
        v4 = a2;
      }
      NVMeIoCompletionQueueDelete(a1, v13);
      v22 = (_QWORD *)(*(_QWORD *)(a1 + 784) + 32 * (v13 - (unsigned __int64)*(unsigned __int16 *)(a1 + 266) - 1));
      *v22 = 0LL;
      v22[1] = 0LL;
      v22[2] = 0LL;
      v22[3] = 0LL;
      memset(v26, 0, 0x48uLL);
    }
LABEL_34:
    if ( !v5 )
      return v5;
    goto LABEL_35;
  }
  *(_BYTE *)(a2 + 3) = 18;
  v5 = -1056964602;
LABEL_35:
  if ( !*(_BYTE *)(v4 + 3) )
    *(_BYTE *)(v4 + 3) = 4;
  StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return v5;
}
