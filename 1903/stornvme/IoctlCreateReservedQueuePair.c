/*
 * XREFs of IoctlCreateReservedQueuePair @ 0x1C000EFF8
 * Callers:
 *     IoctlToNVMe @ 0x1C00018EC (IoctlToNVMe.c)
 * Callees:
 *     memset @ 0x1C0005400 (memset.c)
 *     GetFreeReservedQueueIndex @ 0x1C000EE54 (GetFreeReservedQueueIndex.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0015718 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0015B44 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0017868 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0017BE4 (NVMeReservedSubmissionQueueCreate.c)
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
  __int64 v15; // r13
  bool v16; // cf
  unsigned __int16 v17; // bx
  unsigned __int16 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int16 v24; // [rsp+130h] [rbp+18h]
  void *v25; // [rsp+138h] [rbp+20h]

  v2 = *(_WORD *)(a1 + 806);
  v4 = a2;
  v5 = 0;
  if ( !v2 || *(_WORD *)(a1 + 778) >= v2 || *(_WORD *)(a1 + 776) >= v2 )
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
    v25 = (void *)(v6 + *(unsigned int *)(v6 + 36) + 28LL);
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
      || (v12 = *(unsigned __int16 *)(a1 + 274), v13 = FreeReservedQueueIndex + v12 + 1, v13 > (unsigned int)v10 + v12) )
    {
      v5 = -1056964601;
      goto LABEL_35;
    }
    if ( (unsigned __int16)NVMeReservedCompletionQueueCreate(a1) )
    {
      *(_DWORD *)(a1 + 24) = 18;
      v5 = -1056964607;
      goto LABEL_35;
    }
    v14 = 0;
    v15 = *(_QWORD *)(a1 + 792) + 32LL * FreeReservedQueueIndex;
    v16 = *(_WORD *)(v6 + 60) != 0;
    v24 = 0;
    while ( 1 )
    {
      if ( !v16 )
      {
        *(_BYTE *)(v4 + 3) = 1;
        return v5;
      }
      if ( (unsigned __int16)NVMeReservedSubmissionQueueCreate(a1, FreeReservedQueueIndex, v14) )
        break;
      ++*(_WORD *)(v15 + 26);
      v14 = v24 + 1;
      v17 = *(_WORD *)(v6 + 60);
      v24 = v14;
      if ( v14 < v17 )
      {
        FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
        if ( FreeReservedQueueIndex == 0xFFFF )
          goto LABEL_27;
      }
      v16 = v14 < v17;
    }
    *(_DWORD *)(a1 + 24) = 18;
    v5 = -1056964607;
LABEL_27:
    if ( v13 )
    {
      v18 = 0;
      if ( *(_WORD *)(a1 + 776) )
      {
        do
        {
          v19 = 32LL * v18;
          if ( *(_WORD *)(v19 + *(_QWORD *)(a1 + 784) + 20) == v13 )
          {
            NVMeIoSubmissionQueueDelete(a1);
            v20 = *(_QWORD *)(a1 + 784);
            *(_QWORD *)(v19 + v20) = 0LL;
            *(_QWORD *)(v19 + v20 + 8) = 0LL;
            *(_QWORD *)(v19 + v20 + 16) = 0LL;
            *(_QWORD *)(v19 + v20 + 24) = 0LL;
          }
          ++v18;
        }
        while ( v18 < *(_WORD *)(a1 + 776) );
        v4 = a2;
      }
      NVMeIoCompletionQueueDelete(a1);
      v21 = (_QWORD *)(*(_QWORD *)(a1 + 792) + 32 * (v13 - (unsigned __int64)*(unsigned __int16 *)(a1 + 274) - 1));
      *v21 = 0LL;
      v21[1] = 0LL;
      v21[2] = 0LL;
      v21[3] = 0LL;
      memset(v25, 0, 0x48uLL);
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
  StorPortExtendedFunction(87LL, a1, 0LL);
  return v5;
}
