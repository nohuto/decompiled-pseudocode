/*
 * XREFs of AMLIIterateSiblingsNext @ 0x1C0023A90
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C00238A0 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C00239F8 (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C009D1BC (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF9EC (EnableDisableIPMIRegions.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 */

__int64 __fastcall AMLIIterateSiblingsNext(__int64 a1)
{
  KIRQL v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 *v7; // rcx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( !v3 || (v4 = **(_QWORD **)a1, v4 == v3 + 24) )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = v4 + 120;
    dword_1C0082858 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 128));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
  {
    v7 = *(__int64 **)a1;
    if ( a1 == *(_QWORD *)a1 + 120LL )
    {
      DereferenceObjectEx((unsigned __int64)v7);
    }
    else
    {
      DereferenceObjectEx((unsigned __int64)v7);
      HeapFree(a1);
    }
  }
  return v5;
}
