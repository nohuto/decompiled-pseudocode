/*
 * XREFs of RtlQueryAtomsInAtomTable @ 0x1408D11F8
 * Callers:
 *     NtQueryInformationAtom @ 0x1406CE750 (NtQueryInformationAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x14001D464 (RtlpLookupLowBox.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1405EC474 (RtlpLockAtomTable.c)
 */

__int64 __fastcall RtlQueryAtomsInAtomTable(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v9; // rbx
  __int64 i; // rsi
  __int64 j; // rdi
  char v12; // al
  unsigned int v13; // [rsp+20h] [rbp-48h]

  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  v13 = 0;
  v9 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 28); i = (unsigned int)(i + 1) )
  {
    for ( j = *(_QWORD *)(a1 + 8 * i + 32); j; j = *(_QWORD *)j )
    {
      if ( RtlpLookupLowBox(a1, j, 0) )
      {
        if ( (unsigned int)v9 >= a2 )
          v13 = -1073741820;
        else
          *(_WORD *)(a4 + 2 * v9) = *(_WORD *)(j + 10);
        v9 = (unsigned int)(v9 + 1);
      }
    }
  }
  *a3 = v9;
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v13;
}
