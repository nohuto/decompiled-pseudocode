/*
 * XREFs of ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x14032A0A4
 * Callers:
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14032A284 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x14032A13C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1407061C8 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_GPT::ReadEntries(SC_GPT *this, struct GPT_HEADER *a2, struct _GPT_ENTRY **a3)
{
  __int64 v3; // rax
  int v6; // ecx
  struct _GPT_ENTRY *v8; // rax
  struct _GPT_ENTRY *v9; // rbx
  int Entries; // edi

  v3 = *(_QWORD *)this;
  v6 = *((_DWORD *)a2 + 20) * *((_DWORD *)a2 + 21);
  *a3 = 0LL;
  v8 = (struct _GPT_ENTRY *)SC_ENV::Allocate(-*(_DWORD *)(v3 + 228) & (unsigned int)(*(_DWORD *)(v3 + 228) + v6 - 1));
  v9 = v8;
  if ( v8 )
  {
    Entries = SC_GPT::ReadEntries(this, a2, v8);
    if ( Entries >= 0 )
    {
      *a3 = v9;
      v9 = 0LL;
    }
    if ( v9 )
      SC_ENV::Free(v9);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Entries;
}
