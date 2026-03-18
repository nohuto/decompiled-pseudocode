/*
 * XREFs of ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1401688B4
 * Callers:
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14016886C (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140329AF8 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140329BF0 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14032B060 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x140168910 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?IsVbr@SC_DISK@@QEAAEXZ @ 0x140329A4C (-IsVbr@SC_DISK@@QEAAEXZ.c)
 */

__int64 __fastcall SC_DISK::ResetPartitionCache(SC_DISK *this)
{
  int Sectors; // edi
  __int64 v3; // rdx

  Sectors = SC_DISK::ReadSectors(this, 1u, 0LL, 0LL);
  if ( Sectors >= 0 )
  {
    v3 = *((_QWORD *)this + 32);
    if ( *(_WORD *)(v3 + 510) == 0xAA55 )
    {
      if ( *(_BYTE *)(v3 + 450) != 0xEE || *(_BYTE *)(v3 + 466) || *(_BYTE *)(v3 + 482) || *(_BYTE *)(v3 + 498) )
        *((_DWORD *)this + 62) = SC_DISK::IsVbr(this) != 0 ? 2 : 0;
      else
        *((_DWORD *)this + 62) = 1;
    }
    else
    {
      *((_DWORD *)this + 62) = 2;
    }
  }
  return (unsigned int)Sectors;
}
