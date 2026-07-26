/*
 * XREFs of PplCreateLookasideList @ 0x1C0022FAC
 * Callers:
 *     ndisMInitializeScatterGatherDma @ 0x1C00CF3A4 (ndisMInitializeScatterGatherDma.c)
 * Callees:
 *     PplpCreateOneLookasideList @ 0x1C0023180 (PplpCreateOneLookasideList.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     PplpFreeOneLookasideList @ 0x1C0082958 (PplpFreeOneLookasideList.c)
 */

_QWORD *__fastcall PplCreateLookasideList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, SIZE_T a5)
{
  _QWORD *PoolWithTagPriority; // rax
  _QWORD *v6; // rdi
  SIZE_T v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // r14
  ULONG ActiveProcessorCount; // eax
  unsigned int v11; // esi
  ULONG v12; // ebp
  __int64 v13; // r15
  __int64 v14; // r13
  PVOID v15; // rax
  __int64 OneLookasideList; // rbx
  _QWORD *result; // rax
  unsigned int i; // ebp
  __int64 v19; // rbx

  PoolWithTagPriority = ExAllocatePoolWithTagPriority(NonPagedPoolNxCacheAligned, 0x40uLL, 0x6264444Eu, LowPoolPriority);
  v6 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    memset(PoolWithTagPriority, 0, 0x40uLL);
    v7 = 8LL * (KeQueryMaximumProcessorCountEx(0xFFFFu) + 1);
    v8 = (__int64 *)ExAllocatePoolWithTagPriority(NonPagedPoolNxCacheAligned, v7, 0x6264444Eu, LowPoolPriority);
    v9 = v8;
    if ( v8 )
    {
      v6[4] = v8;
      memset(v8, 0, v7);
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      v11 = 0;
      v12 = ActiveProcessorCount + 1;
      if ( ActiveProcessorCount == -1 )
      {
LABEL_10:
        *(_DWORD *)v6 = v12;
        result = v6;
        *((_DWORD *)v6 + 1) = 0;
        *((_DWORD *)v6 + 2) = 1650738254;
        *((_DWORD *)v6 + 3) = 1650738254;
        v6[2] = a5;
        *((_DWORD *)v6 + 6) = 512;
        *((_WORD *)v6 + 14) = 0;
        return result;
      }
      v13 = 0LL;
      while ( 1 )
      {
        if ( v11 )
        {
          v14 = *v9;
          v15 = ExAllocatePoolWithTagPriority(NonPagedPoolNxCacheAligned, 0x80uLL, 0x6264444Eu, LowPoolPriority);
          OneLookasideList = (__int64)v15;
          if ( v15 )
          {
            memset(v15, 0, 0x80uLL);
            *(_QWORD *)(OneLookasideList + 96) = v14;
            *(_BYTE *)(OneLookasideList + 112) = 0;
            KeInitializeSpinLock((PKSPIN_LOCK)(OneLookasideList + 104));
          }
          else
          {
            OneLookasideList = 0LL;
          }
        }
        else
        {
          OneLookasideList = PplpCreateOneLookasideList(
                               0LL,
                               0LL,
                               NonPagedPoolNx,
                               0,
                               a5,
                               0x6264444Eu,
                               0,
                               0x6264444Eu,
                               0LL,
                               1);
        }
        v9[v13] = OneLookasideList;
        if ( !OneLookasideList )
          break;
        ++v11;
        ++v13;
        if ( v11 >= v12 )
          goto LABEL_10;
      }
      for ( i = 1; i <= v11; v9[v19] = 0LL )
      {
        v19 = v11 - i;
        PplpFreeOneLookasideList((PVOID)v9[v19], 0x6264444Eu);
        ++i;
      }
      ExFreePoolWithTag(v9, 0x6264444Eu);
    }
    ExFreePoolWithTag(v6, 0x6264444Eu);
  }
  return 0LL;
}
