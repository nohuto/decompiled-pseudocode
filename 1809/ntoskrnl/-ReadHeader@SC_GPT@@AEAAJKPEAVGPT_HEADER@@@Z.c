/*
 * XREFs of ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14032A1C4
 * Callers:
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14032A284 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14032A640 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14032A928 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14015B610 (RtlComputeCrc32.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x140168A30 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 */

__int64 __fastcall SC_GPT::ReadHeader(SC_DISK **this, int a2, struct GPT_HEADER *a3)
{
  SC_DISK *v3; // rcx
  __int64 v5; // rbx
  int Sectors; // esi
  int v7; // ebx
  ULONG v8; // eax

  v3 = *this;
  if ( a2 )
    v5 = *((_QWORD *)v3 + 30) - 1LL;
  else
    v5 = 1LL;
  Sectors = SC_DISK::ReadSectors(v3, 1, v5, a3);
  if ( Sectors >= 0 )
  {
    Sectors = -1073741774;
    if ( *(_QWORD *)a3 == 0x5452415020494645LL
      && *((_DWORD *)a3 + 2) == 0x10000
      && *((_DWORD *)a3 + 3) == 92
      && *((_DWORD *)a3 + 21) == 128
      && (unsigned int)(*((_DWORD *)a3 + 20) - 1) <= 0x3FF
      && *((_QWORD *)a3 + 3) == v5 )
    {
      v7 = *((_DWORD *)a3 + 4);
      *((_DWORD *)a3 + 4) = 0;
      v8 = RtlComputeCrc32(0, (PUCHAR)a3, 0x5Cu);
      *((_DWORD *)a3 + 4) = v7;
      if ( v8 == v7 )
        return 0;
    }
  }
  return (unsigned int)Sectors;
}
