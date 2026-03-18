/*
 * XREFs of MiAllocateAweInfo @ 0x140895678
 * Callers:
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140895BAC (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x140117730 (ExInitializeAutoExpandPushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCreateAweInfoBitMap @ 0x140895A64 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfo @ 0x140895E88 (MiDeleteAweInfo.c)
 *     MiGetAweInfoPartition @ 0x140896068 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiAllocateAweInfo(__int64 a1, int a2, char a3, _QWORD *a4)
{
  char v6; // bp
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  int AweInfoBitMap; // esi

  *a4 = 0LL;
  v6 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225711LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x77416D4Du);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x50uLL);
  if ( (a3 & 2) != 0 )
    v10[1] = 512LL;
  else
    v10[1] = (a3 & 1) != 0 ? 16LL : 1LL;
  if ( (v6 & 1) != 0 )
    *(_DWORD *)v10 |= 1u;
  if ( (a3 & 0x10) != 0 )
    *((_DWORD *)v10 + 18) = 0;
  else
    *((_DWORD *)v10 + 18) = ((a3 & 8) != 0) + 1;
  v10[5] = 0LL;
  v10[4] = a1;
  if ( (a3 & 4) != 0 )
  {
    if ( (*(_DWORD *)(MiGetAweInfoPartition(v10, v11, v12) + 4) & 0x40) == 0 )
    {
      ExFreePoolWithTag(v10, 0);
      return 3221225659LL;
    }
    *(_DWORD *)v10 |= 4u;
  }
  AweInfoBitMap = MiCreateAweInfoBitMap(v10);
  if ( AweInfoBitMap < 0 )
  {
    MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v10);
  }
  else
  {
    ExInitializeAutoExpandPushLock(v10 + 7, 1);
    *(_DWORD *)v10 |= 2u;
    if ( a1 )
    {
      *(_DWORD *)(a1 + 92) |= 0x20000u;
      *(_QWORD *)(a1 + 8) = v10;
    }
    *a4 = v10;
  }
  return (unsigned int)AweInfoBitMap;
}
