/*
 * XREFs of ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1403299D8
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140329BF0 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     IoCreateDisk @ 0x140816D30 (IoCreateDisk.c)
 * Callees:
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140329D28 (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14032AC5C (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x14032AD0C (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x14032B6B4 (-CreatePartitionTable@SC_RAW@@QEAAJXZ.c)
 */

__int64 __fastcall SC_DISK::CreatePartitionTable(SC_DISK *this, struct _CREATE_DISK *a2)
{
  PARTITION_STYLE PartitionStyle; // r8d
  __int32 v3; // r8d
  struct _CREATE_DISK *v5; // r9
  SC_DISK *v6; // [rsp+38h] [rbp+10h] BYREF

  PartitionStyle = PARTITION_STYLE_RAW;
  if ( a2 )
    PartitionStyle = a2->PartitionStyle;
  if ( PartitionStyle )
  {
    v3 = PartitionStyle - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v6 = this;
        return SC_RAW::CreatePartitionTable((SC_RAW *)&v6);
      }
      else
      {
        return 3221225659LL;
      }
    }
    else
    {
      v6 = this;
      return SC_GPT::CreatePartitionTable((SC_GPT *)&v6, a2);
    }
  }
  else
  {
    SC_MBR::Initialize((SC_MBR *)&v6, this);
    return SC_MBR::CreatePartitionTable((SC_MBR *)&v6, v5);
  }
}
