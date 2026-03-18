/*
 * XREFs of SepBuildDefaultCap @ 0x140785768
 * Callers:
 *     SepRmDbInitialization @ 0x140A1CA48 (SepRmDbInitialization.c)
 * Callees:
 *     SepBuildDefaultCape @ 0x14019ACCC (SepBuildDefaultCape.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 SepBuildDefaultCap()
{
  int v0; // ebx
  char *PoolWithTag; // rax
  __int128 v2; // xmm0
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v0 = SepBuildDefaultCape(&P);
  if ( v0 >= 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x70536553u);
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      v2 = DefaultCapName;
      *((_DWORD *)PoolWithTag + 14) = 1;
      *((_DWORD *)PoolWithTag + 15) = 1;
      *(_OWORD *)(PoolWithTag + 40) = v2;
      *((_QWORD *)PoolWithTag + 8) = P;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      SepRmDefaultCap = (__int64)PoolWithTag;
      return (unsigned int)v0;
    }
    v0 = -1073741670;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x70536553u);
  return (unsigned int)v0;
}
