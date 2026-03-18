/*
 * XREFs of PsInitializeQuotaSystem @ 0x140A1AA84
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     PspRegisterResource @ 0x14019961C (PspRegisterResource.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PspSanitizeResourceLimits @ 0x14077D940 (PspSanitizeResourceLimits.c)
 */

char __fastcall PsInitializeQuotaSystem(int a1)
{
  _QWORD *v1; // rdx
  char *v2; // rcx
  char *PoolWithTag; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  char v6; // dl
  int v7; // r8d
  int v8; // edx

  if ( a1 )
  {
    PspRegisterResource(0, 5, -1073741756);
    PspRegisterResource(1, v6, v7);
    PspRegisterResource(2, 0, -1073741524);
    PspRegisterResource(v8 + 3, v8, -1073741663);
    qword_140436B30 = 0LL;
    dword_140436B58 = 0;
    qword_140436B68 = 0LL;
    qword_140436B50 = (__int64)&qword_140436B48;
    qword_140436B48 = (__int64)&qword_140436B48;
    qword_140436B88 = (__int64)&qword_140436B80;
    qword_140436B80 = (__int64)&qword_140436B80;
    qword_140436B28[0] = 0x10000LL;
    qword_140436B38 = (__int64)MmRaisePoolQuota;
    qword_140436B40 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_140436B60 = 0x80000LL;
    qword_140436B70 = (__int64)MmRaisePoolQuota;
    qword_140436B78 = (__int64)MmReturnPoolQuota;
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_14046B740 = 1;
  v1 = &unk_14046B580;
  dword_14046B744 = 1;
  v2 = PspResourceFlags;
  do
  {
    if ( (*v2 & 2) == 0 )
      *v1 = -1LL;
    v2 += 8;
    v1 += 16;
  }
  while ( (__int64)v2 < (__int64)PspHardenedMitigationOptionsMap );
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[3] = (unsigned __int64)&PspSystemQuotaBlock;
  PspSanitizeResourceLimits((unsigned int *)PspDefaultResourceLimits, 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x300uLL, 0x74517350u);
  PspQuotaBlockTable = (ULONG_PTR)PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = PoolWithTag + 8;
    v5 = 32LL;
    do
    {
      v4[1] = v4;
      *v4 = v4;
      *(v4 - 1) = 0LL;
      v4 += 3;
      --v5;
    }
    while ( v5 );
    goto LABEL_9;
  }
  return (char)PoolWithTag;
}
