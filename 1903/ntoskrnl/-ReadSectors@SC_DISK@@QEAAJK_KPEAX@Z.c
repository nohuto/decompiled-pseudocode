/*
 * XREFs of ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14016A620
 * Callers:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x14016A5C4 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14034B8D4 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14034BCFC (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x14034C070 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14034C0F8 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SC_DISK::ReadSectors(SC_DISK *this, int a2, __int64 a3, void *a4)
{
  if ( !a4 )
    a4 = (void *)*((_QWORD *)this + 32);
  return (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, void *))(*(_QWORD *)this + 56LL))(
           this,
           a3 << *((_DWORD *)this + 58),
           (unsigned int)(a2 << *((_DWORD *)this + 58)),
           a4);
}
