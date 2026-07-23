/*
 * XREFs of MiFindBestOutswapPagefile @ 0x1400E4E2C
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBC80 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiWsSwapPageFileNumber @ 0x1400E4EC8 (MiWsSwapPageFileNumber.c)
 *     MiPageFileLargestBitmapsRun @ 0x140124908 (MiPageFileLargestBitmapsRun.c)
 */

__int64 __fastcall MiFindBestOutswapPagefile(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r13d
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 *v9; // r14
  __int64 v10; // r15
  unsigned int v12; // ebx

  v4 = MiWsSwapPageFileNumber();
  v6 = *(_DWORD *)(v5 + 7128);
  v7 = 0;
  *a2 = v4;
  v8 = 16;
  if ( !v6 )
    return *a2;
  v9 = (__int64 *)(v5 + 7136);
  do
  {
    v10 = *v9;
    if ( (*(_BYTE *)(*v9 + 204) & 0xD0) == 0x80 )
    {
      if ( v8 == 16
        || (v12 = MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 8LL * v8 + 7136)),
            (unsigned int)MiPageFileLargestBitmapsRun(v10) > v12) )
      {
        v8 = v7;
      }
    }
    ++v7;
    ++v9;
  }
  while ( v7 < v6 );
  if ( v8 == 16 )
    return *a2;
  return v8;
}
