/*
 * XREFs of ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x14034B714
 * Callers:
 *     ?IsVbr@SC_DISK@@QEAAEXZ @ 0x14034AE3C (-IsVbr@SC_DISK@@QEAAEXZ.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14034B334 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MBR_ENTRY::Validate(MBR_ENTRY *this, int a2, unsigned __int64 a3)
{
  char v3; // al
  char v4; // r9
  unsigned __int64 v5; // r10

  v3 = *((_BYTE *)this + 4);
  v4 = 1;
  if ( v3 )
  {
    if ( v3 != -18 )
    {
      v4 = 0;
      v5 = (unsigned int)(a2 + *((_DWORD *)this + 2));
      if ( v5 < a3 )
        return *((unsigned int *)this + 3) <= ((3 * a3) >> 1) - v5;
    }
  }
  return v4;
}
