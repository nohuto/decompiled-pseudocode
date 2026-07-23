/*
 * XREFs of ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x14032B43C
 * Callers:
 *     ?IsVbr@SC_DISK@@QEAAEXZ @ 0x140329D3C (-IsVbr@SC_DISK@@QEAAEXZ.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14032B060 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MBR_ENTRY::Validate(MBR_ENTRY *this, int a2, unsigned __int64 a3)
{
  int v3; // r11d
  char v4; // r9
  unsigned __int64 v5; // r10
  char v6; // al

  v3 = *((_DWORD *)this + 2);
  v4 = 1;
  v5 = (unsigned int)(v3 + a2);
  v6 = *((_BYTE *)this + 4);
  if ( v6 && v6 != -18 )
  {
    if ( (v4 = 0, v6 != 5) && v6 != 15 || v3 )
    {
      if ( v5 < a3 )
        return *((unsigned int *)this + 3) <= ((3 * a3) >> 1) - v5;
    }
  }
  return v4;
}
