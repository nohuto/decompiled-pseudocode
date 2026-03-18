/*
 * XREFs of IoctlDeleteReservedQueuePair @ 0x1C00109F8
 * Callers:
 *     IoctlToNVMe @ 0x1C0002698 (IoctlToNVMe.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0015B08 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0015F44 (NVMeIoSubmissionQueueDelete.c)
 */

__int64 __fastcall IoctlDeleteReservedQueuePair(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r9
  unsigned int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // r13
  unsigned int v10; // edx
  unsigned __int16 v11; // di
  unsigned __int16 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r15
  unsigned int v15; // edi
  __int64 VirtualAddress; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // di
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  unsigned __int16 i; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 v28; // [rsp+100h] [rbp+8h]

  v2 = *(_WORD *)(a1 + 798);
  v5 = 0;
  if ( !v2 || !*(_WORD *)(a1 + 770) )
  {
    *(_BYTE *)(a2 + 3) = 6;
LABEL_35:
    v5 = -1056964601;
    goto LABEL_36;
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
  if ( *(_DWORD *)(a2 + v7) < 0x28u )
  {
    v5 = -1056964602;
    goto LABEL_36;
  }
  v8 = *(unsigned __int16 *)(a1 + 266);
  v9 = v6 + 28;
  v10 = *(unsigned __int16 *)(v6 + 36);
  if ( v10 > v8 + (unsigned int)v2 || (unsigned __int16)v10 <= (unsigned __int16)v8 )
    goto LABEL_35;
  v11 = *(_WORD *)(a1 + 768);
  v12 = 0;
  v28 = v11;
  if ( v11 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 776);
      v14 = 32LL * v12;
      if ( *(_WORD *)(v13 + v14 + 20) == *(_WORD *)(v9 + 8) )
      {
        if ( *(_QWORD *)(136LL * v12 + *(_QWORD *)(a1 + 752) + 8) && (*(_DWORD *)(a1 + 124) & 1) != 0 )
        {
          v15 = *(unsigned __int16 *)(v13 + v14 + 18);
          VirtualAddress = StorPortGetVirtualAddress(a1, *(_QWORD *)(v13 + 32LL * v12));
          NVMeFreeDmaBuffer(a1, (unsigned __int64)v15 << 6, VirtualAddress);
          v11 = v28;
        }
        if ( !(unsigned __int8)NVMeIoSubmissionQueueDelete(a1, (unsigned __int16)(v12 + *(_WORD *)(a1 + 264) + 1)) )
        {
          v5 = -1056964607;
          *(_DWORD *)(a1 + 24) = 19;
          goto LABEL_36;
        }
        v17 = *(_QWORD *)(a1 + 776);
        *(_QWORD *)(v14 + v17) = 0LL;
        *(_QWORD *)(v14 + v17 + 8) = 0LL;
        *(_QWORD *)(v14 + v17 + 16) = 0LL;
        *(_QWORD *)(v14 + v17 + 24) = 0LL;
        --*(_WORD *)(a1 + 768);
      }
      if ( ++v12 >= v11 )
      {
        LOWORD(v10) = *(_WORD *)(v9 + 8);
        break;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 124) & 1) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 784);
    v19 = 0;
    v20 = *(_WORD *)(a1 + 770);
    v21 = *(_WORD *)(32LL * v12 + v18 + 18);
    if ( v20 )
    {
      while ( *(_WORD *)(32LL * v19 + v18 + 16) != (_WORD)v10 )
      {
        if ( ++v19 >= v20 )
          goto LABEL_26;
      }
      v22 = StorPortGetVirtualAddress(a1, *(_QWORD *)(32LL * v19 + v18));
      NVMeFreeDmaBuffer(a1, (unsigned __int64)v21 << 6, v22);
    }
  }
LABEL_26:
  if ( !(unsigned __int8)NVMeIoCompletionQueueDelete(a1, *(unsigned __int16 *)(v9 + 8)) )
  {
    v5 = -1056964607;
    *(_DWORD *)(a1 + 24) = 20;
LABEL_36:
    if ( !*(_BYTE *)(a2 + 3) )
      *(_BYTE *)(a2 + 3) = 4;
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v5;
  }
  v23 = *(_WORD *)(a1 + 770);
  for ( i = 0; i < v23; ++i )
  {
    v25 = *(_QWORD *)(a1 + 784);
    v26 = 32LL * i;
    if ( *(_WORD *)(v26 + v25 + 16) == *(_WORD *)(v9 + 8) )
    {
      *(_QWORD *)(v26 + v25) = 0LL;
      *(_QWORD *)(v26 + v25 + 8) = 0LL;
      *(_QWORD *)(v26 + v25 + 16) = 0LL;
      *(_QWORD *)(v26 + v25 + 24) = 0LL;
    }
    v23 = *(_WORD *)(a1 + 770);
  }
  *(_WORD *)(a1 + 770) = v23 - 1;
  *(_BYTE *)(a2 + 3) = 1;
  return v5;
}
