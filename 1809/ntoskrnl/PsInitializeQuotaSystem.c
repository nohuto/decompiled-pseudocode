/*
 * XREFs of PsInitializeQuotaSystem @ 0x1409D8580
 * Callers:
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     PspRegisterResource @ 0x14018F9B4 (PspRegisterResource.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PspSanitizeResourceLimits @ 0x14075909C (PspSanitizeResourceLimits.c)
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
    qword_14040F430 = 0LL;
    dword_14040F458 = 0;
    qword_14040F468 = 0LL;
    qword_14040F450 = (__int64)&qword_14040F448;
    qword_14040F448 = (__int64)&qword_14040F448;
    qword_14040F488 = (__int64)&qword_14040F480;
    qword_14040F480 = (__int64)&qword_14040F480;
    qword_14040F428[0] = 0x10000LL;
    qword_14040F438 = (__int64)MmRaisePoolQuota;
    qword_14040F440 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_14040F460 = 0x80000LL;
    qword_14040F470 = (__int64)MmRaisePoolQuota;
    qword_14040F478 = (__int64)MmReturnPoolQuota;
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_1404409C0 = 1;
  v1 = &unk_140440800;
  dword_1404409C4 = 1;
  v2 = PspResourceFlags;
  do
  {
    if ( (*v2 & 2) == 0 )
      *v1 = -1LL;
    v2 += 8;
    v1 += 16;
  }
  while ( (__int64)v2 < (__int64)PspHardenedMitigationOptionsMap );
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[4] = (unsigned __int64)&PspSystemQuotaBlock;
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
