/*
 * XREFs of CcUnmapVacb @ 0x140609340
 * Callers:
 *     CcGetVacbMiss @ 0x140076EB0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E314 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007FBC8 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400802F4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140126870 (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeFile @ 0x14066B5E8 (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x14066BF0C (PfCheckDeprioritizeImage.c)
 */

void __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  char v3; // bp
  int v7; // eax
  char v8; // r8
  int v9; // esi
  _KPROCESS *Process; // rcx
  unsigned int v11; // eax
  bool v12; // zf
  ULONG_PTR v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r8

  v3 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
LABEL_20:
    v3 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v11 = *(_DWORD *)(a2 + 512);
    if ( Process[1].ActiveGroupsMask == v11 )
      v12 = (Process[1].DirectoryTableBase & 0x400000000000LL) == 0;
    else
      v12 = (unsigned int)PfCheckDeprioritizeImage(v11) == 0;
    if ( v12 )
      goto LABEL_13;
    v13 = CcReferenceSharedCacheMapFileObject(a2);
    v14 = *(_QWORD *)(v13 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v13);
    v15 = (*(__int64 *)(a2 + 8) >> 12) + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v15 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
      v15 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v15 <= 1 )
      v15 = 1LL;
    if ( !(unsigned int)PfCheckDeprioritizeFile(*(unsigned int *)(a2 + 512), v14, v15) )
    {
LABEL_13:
      CcUpdateSharedCacheMapFlag((_QWORD *)a2, 0x200000, 0);
      goto LABEL_4;
    }
    goto LABEL_20;
  }
LABEL_4:
  v8 = v3 | 2;
  v9 = a3 & 2;
  if ( !v9 )
    v8 = v3;
  MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v8);
  if ( !v9 )
    *(_QWORD *)a1 = 0LL;
}
