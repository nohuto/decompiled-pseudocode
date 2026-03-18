/*
 * XREFs of MiLockPageAtDpc @ 0x1402D8FB8
 * Callers:
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockPageAtDpc(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
