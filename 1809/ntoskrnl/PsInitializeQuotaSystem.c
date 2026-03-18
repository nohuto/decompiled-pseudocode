/*
 * XREFs of PsInitializeQuotaSystem @ 0x1409D7580
 * Callers:
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     PspRegisterResource @ 0x14018F854 (PspRegisterResource.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     PspSanitizeResourceLimits @ 0x140757ECC (PspSanitizeResourceLimits.c)
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
    qword_14040E3F0 = 0LL;
    dword_14040E418 = 0;
    qword_14040E428 = 0LL;
    qword_14040E410 = (__int64)&qword_14040E408;
    qword_14040E408 = (__int64)&qword_14040E408;
    qword_14040E448 = (__int64)&qword_14040E440;
    qword_14040E440 = (__int64)&qword_14040E440;
    qword_14040E3E8[0] = 0x10000LL;
    qword_14040E3F8 = (__int64)MmRaisePoolQuota;
    qword_14040E400 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_14040E420 = 0x80000LL;
    qword_14040E430 = (__int64)MmRaisePoolQuota;
    qword_14040E438 = (__int64)MmReturnPoolQuota;
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_14043F900 = 1;
  v1 = &unk_14043F740;
  dword_14043F904 = 1;
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
