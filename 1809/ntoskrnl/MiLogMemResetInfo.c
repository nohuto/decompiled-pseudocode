/*
 * XREFs of MiLogMemResetInfo @ 0x14084F2D0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x1402A7F7C (MiLogPerfMemoryEvent.c)
 */

void __fastcall MiLogMemResetInfo(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  v4[0] = a1;
  v4[1] = a2;
  if ( (a3 & 0x80000) != 0 )
  {
    v3 = 0;
  }
  else if ( (a3 & 0x1000000) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 2;
  }
  v5 = v3;
  MiLogPerfMemoryEvent(0x286u, 0x20008000u, (__int64)v4, 20, 4200706);
}
