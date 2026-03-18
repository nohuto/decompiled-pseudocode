/*
 * XREFs of ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14034AFE0
 * Callers:
 *     IoWritePartitionTable @ 0x140850500 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140850670 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x14016ACB4 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14034ADC8 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x14034B2D0 (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14034B75C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14034C22C (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 */

__int64 __fastcall SC_DISK::WritePartitionTable(SC_DISK *this, struct SC_DISK_LAYOUT *a2)
{
  int v3; // edx
  int v5; // eax
  struct _CREATE_DISK v8; // [rsp+20h] [rbp-28h] BYREF
  SC_DISK *v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  memset(&v8.Mbr, 0, 20);
  if ( *((_DWORD *)this + 62) != 2
    || (v8.PartitionStyle = *(_DWORD *)a2, v3 = SC_DISK::CreatePartitionTable(this, &v8), v3 >= 0)
    && (v3 = SC_DISK::ResetPartitionCache(this), v3 >= 0) )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v5 = *((_DWORD *)this + 62);
        *((_DWORD *)a2 + 10) = 0;
        v9 = this;
        return (unsigned int)SC_GPT::WritePartitionTable((SC_GPT *)&v9, a2, v5 != 1);
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 62)
        || *((_DWORD *)a2 + 1) == 4
        && *((_BYTE *)a2 + 80) == 0xEE
        && !*((_BYTE *)a2 + 224)
        && !*((_BYTE *)a2 + 368)
        && !*((_BYTE *)a2 + 512) )
      {
        SC_MBR::Initialize((SC_MBR *)&v9, this);
        return (unsigned int)SC_MBR::WritePartitionTable((SC_MBR *)&v9, a2);
      }
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v3;
}
