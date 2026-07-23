/*
 * XREFs of ViLockContextPointer @ 0x140928DBC
 * Callers:
 *     VfInsertContext @ 0x140309D80 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140309F50 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x140928E00 (ViQueryObjectContext.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 */

char __fastcall ViLockContextPointer(signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(a1);
      v4 = *a1;
      if ( (*a1 & 1) != 0 )
        break;
      if ( !v4 )
        return v4;
      KeYieldProcessorEx(&v7, a2, a3);
    }
    v5 = *a1;
  }
  while ( v5 != _InterlockedCompareExchange64(a1, v4 - 1, v4) );
  LOBYTE(v4) = 1;
  return v4;
}
