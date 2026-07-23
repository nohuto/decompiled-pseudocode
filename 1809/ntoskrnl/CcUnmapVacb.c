/*
 * XREFs of CcUnmapVacb @ 0x1405F384C
 * Callers:
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AC9C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x140022EF8 (CcDereferenceSharedCacheMapFileObject.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007DF5C (CcReferenceSharedCacheMapFileObject.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140108C50 (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeFile @ 0x140667410 (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x140668014 (PfCheckDeprioritizeImage.c)
 */

struct _KTHREAD *__fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  char v3; // bp
  int v7; // eax
  char v8; // r8
  int v9; // esi
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned int v12; // eax
  ULONG_PTR v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r8

  v3 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
LABEL_19:
    v3 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v12 = *(_DWORD *)(a2 + 512);
    if ( Process[1].ThreadSeed[1] == v12 )
    {
      if ( (Process[1].DirectoryTableBase & 0x400000000000LL) == 0 )
        goto LABEL_13;
    }
    else if ( !(unsigned int)PfCheckDeprioritizeImage(v12) )
    {
      goto LABEL_13;
    }
    v13 = CcReferenceSharedCacheMapFileObject(a2);
    v14 = *(_QWORD *)(v13 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v13);
    v15 = (*(__int64 *)(a2 + 8) >> 12) + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v15 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
      v15 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v15 <= 1 )
      v15 = 1LL;
    if ( (unsigned int)PfCheckDeprioritizeFile(*(unsigned int *)(a2 + 512), v14, v15) )
      goto LABEL_19;
LABEL_13:
    CcUpdateSharedCacheMapFlag((_QWORD *)a2, 0x200000LL, 0LL);
  }
LABEL_4:
  v8 = v3 | 2;
  v9 = a3 & 2;
  if ( !v9 )
    v8 = v3;
  result = MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v8);
  if ( !v9 )
    *(_QWORD *)a1 = 0LL;
  return result;
}
