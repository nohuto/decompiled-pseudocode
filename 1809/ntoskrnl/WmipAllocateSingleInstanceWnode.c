/*
 * XREFs of WmipAllocateSingleInstanceWnode @ 0x1408B3948
 * Callers:
 *     IoWMIExecuteMethod @ 0x1408B3120 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1408B3450 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1408B3560 (IoWMISetSingleItem.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipAllocateSingleInstanceWnode(
        unsigned int a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        _QWORD *a7)
{
  unsigned int v7; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // r14d
  PVOID PoolWithTag; // rax
  PVOID v15; // rbp

  v7 = a1 + 1;
  v9 = -1073741670;
  if ( a1 + 1 >= a1 )
  {
    v10 = v7 & 0xFFFFFFFE;
    v11 = *a2 + 2;
    if ( v11 <= ~(v7 & 0xFFFFFFFE) && v11 + v10 + 7 >= v11 + v10 )
    {
      v12 = (v11 + v10 + 7) & 0xFFFFFFF8;
      if ( a3 <= ~v12 )
      {
        v13 = v12 + a3;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12 + a3, 0x70696D57u);
        v15 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v13);
          v9 = 0;
          *a4 = v10;
          *a5 = v12;
          *a6 = v13;
          *a7 = v15;
        }
      }
    }
  }
  return v9;
}
