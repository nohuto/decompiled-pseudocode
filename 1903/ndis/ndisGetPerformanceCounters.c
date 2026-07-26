/*
 * XREFs of ndisGetPerformanceCounters @ 0x1C0095568
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A5B8 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisGetPerformanceCounters(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbp
  unsigned int v9; // esi
  _DWORD *v10; // rdi
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // rax
  struct _NDIS_PCW_DATA_BLOCK *v14; // r10
  unsigned int v15; // r9d
  __int64 v16; // r11
  __int64 v17; // rax
  __int128 *v18; // r8
  __int128 *v19; // rcx
  __int128 v20; // xmm0

  v3 = a2[23];
  v4 = 0;
  *a3 = -1073741823;
  v7 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 24LL) + 24LL) )
    return (unsigned int)-1073741790;
  v8 = *(unsigned int *)(v3 + 8);
  v9 = 48;
  v10 = (_DWORD *)a2[3];
  if ( (unsigned int)v8 < 0x30 )
    return (unsigned int)-1073741811;
  *a3 = 0;
  memset(v10, 0, 0x30uLL);
  v11 = ndisMaxNumberOfProcessors;
  *v10 = 3146112;
  v10[5] = v11;
  *((_QWORD *)v10 + 3) = a1->NumberOfIndirectionTableChanges;
  v10[3] = a1->PcwDatapathEventMask;
  v12 = 304 * v11 + 48;
  v10[4] = a1->PcwDatapathCycleMask;
  if ( (unsigned int)v8 < v12 )
  {
    v10[8] = v8 / 0x130;
    if ( !(unsigned int)(v8 / 0x130) )
      goto LABEL_10;
    v10[9] = 48;
    v9 = 304 * (v8 / 0x130) + 48;
  }
  else
  {
    v10[9] = 48;
    v9 = 304 * v11 + 48;
    v10[8] = v11;
  }
  v10[10] = 304;
  v7 = v10 + 12;
LABEL_10:
  v10[2] = v12;
  MiniportDataBlock = ndisPcwGetMiniportDataBlock(a1);
  v14 = MiniportDataBlock;
  if ( v7 )
  {
    if ( MiniportDataBlock )
    {
      v15 = 0;
      if ( v10[8] )
      {
        v16 = ndisPcwOffsetToPerCpuData;
        do
        {
          v17 = 2LL;
          v18 = (__int128 *)&v7[76 * v15];
          v19 = (__int128 *)((char *)v14 + v16 + v15 * ndisPcwPerCpuDataStride);
          do
          {
            v20 = *v19;
            v19 += 8;
            *v18 = v20;
            v18 += 8;
            *(v18 - 7) = *(v19 - 7);
            *(v18 - 6) = *(v19 - 6);
            *(v18 - 5) = *(v19 - 5);
            *(v18 - 4) = *(v19 - 4);
            *(v18 - 3) = *(v19 - 3);
            *(v18 - 2) = *(v19 - 2);
            *(v18 - 1) = *(v19 - 1);
            --v17;
          }
          while ( v17 );
          ++v15;
          *v18 = *v19;
          v18[1] = v19[1];
          v18[2] = v19[2];
        }
        while ( v15 < v10[8] );
      }
    }
  }
  a2[7] = v9;
  return v4;
}
