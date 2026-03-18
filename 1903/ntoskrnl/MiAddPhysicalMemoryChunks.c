/*
 * XREFs of MiAddPhysicalMemoryChunks @ 0x1408884D4
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 *     MmAddPhysicalMemory @ 0x140889290 (MmAddPhysicalMemory.c)
 *     MiHotAddBootDescriptor @ 0x140A3D684 (MiHotAddBootDescriptor.c)
 * Callees:
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400DAFC8 (MiNodeLargeFreeZeroPages.c)
 *     MiNodeHighLargeFreeZeroPages @ 0x1401BEA64 (MiNodeHighLargeFreeZeroPages.c)
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 */

__int64 __fastcall MiAddPhysicalMemoryChunks(ULONG_PTR *a1, unsigned __int64 *a2, _QWORD *a3, int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // r12d
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r13
  unsigned int v10; // eax
  ULONG_PTR *v11; // r10
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 result; // rax
  signed __int64 v19; // rbx
  unsigned __int64 v20; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]
  _QWORD *v22; // [rsp+40h] [rbp-18h]
  unsigned __int64 v23; // [rsp+48h] [rbp-10h]
  unsigned __int64 v25; // [rsp+A8h] [rbp+50h] BYREF
  _QWORD *v26; // [rsp+B0h] [rbp+58h]
  int v27; // [rsp+B8h] [rbp+60h]

  v26 = a3;
  v4 = *a3;
  v5 = 0LL;
  v25 = *a3;
  v6 = 4096LL;
  v7 = a4;
  if ( (a4 & 0x1000) != 0 )
    v6 = 0x40000000LL;
  v8 = v4;
  v20 = *a2;
  v9 = (a4 & 0x1000) != 0 ? 0x40000LL : 512LL;
  do
  {
    v7 |= 0x6000u;
    while ( 1 )
    {
      v23 = v4 >> 12;
      v21 = v20 >> 12;
      v10 = MiPageToNode(v20 >> 12, 0);
      v11 = a1;
      v12 = (_QWORD *)(a1[2] + 1984LL * v10);
      v22 = v12;
      if ( (v7 & 0x4000) == 0 )
      {
LABEL_25:
        if ( (v7 & 0x1000) == 0 )
        {
          if ( (v4 & 0xFFFFFFFFFFFFF000uLL) > 0x400000 )
            v4 = 0x400000LL;
          v25 = v4;
        }
        v7 &= ~0x2000u;
        goto LABEL_30;
      }
      v27 = v7 & 0x1000;
      if ( v21 < 0x100000 )
      {
        v27 = v7 & 0x1000;
LABEL_13:
        v14 = MiNodeLargeFreeZeroPages(v12, 4u, 2);
        v13 = v14;
        if ( v21 >= 0x100000 )
        {
          if ( v27 )
          {
            v15 = (48 * v9) >> 12;
            if ( v13 < v15 )
              v15 = 0LL;
            v13 = v15;
          }
          else if ( v14 > v9 )
          {
            v13 = v9;
          }
        }
        goto LABEL_20;
      }
      v13 = MiNodeHighLargeFreeZeroPages((__int64)v12);
      if ( v27 && v13 < (((3 * v9) >> 8) & 0xFFFFFFFFFFFFFLL) )
        v13 = 0LL;
      if ( !v13 )
      {
        v12 = v22;
        goto LABEL_13;
      }
LABEL_20:
      v11 = a1;
      v16 = (v13 << 12) / 0x30;
      if ( v23 >= v16 )
      {
        v17 = v16 & ~(v9 - 1);
        if ( v17 < v9 )
        {
          v7 &= ~0x4000u;
        }
        else
        {
          v4 = v17 << 12;
          v25 = v17 << 12;
        }
      }
      if ( (v7 & 0x4000) == 0 )
        goto LABEL_25;
LABEL_30:
      result = MiAddPhysicalMemory(v11, &v20, &v25, v7, 0LL);
      if ( (int)result >= 0 )
        break;
      if ( (_DWORD)result != -1073741670 && (_DWORD)result != -1073741523 )
        goto LABEL_32;
      v19 = v25;
      if ( v25 == v6 )
        goto LABEL_32;
      if ( (v7 & 0x4000) != 0 )
      {
        if ( v25 >> 12 < 2 * v9 )
        {
          v7 &= ~0x4000u;
          v4 = v8 - v5;
        }
        else
        {
          v4 = ((v25 >> 12) - v9) << 12;
        }
        v25 = v4;
      }
      else
      {
        v25 = (__int64)v25 / 2;
        LODWORD(v25) = ~(v6 - 1) & (v19 / 2);
        v4 = v25;
      }
    }
    v20 += v25;
    v5 += v25;
    v4 = v8 - v5;
    v25 = v8 - v5;
  }
  while ( v8 != v5 );
LABEL_32:
  *v26 = v5;
  return result;
}
