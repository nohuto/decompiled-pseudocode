/*
 * XREFs of AllocateMemory @ 0x14033F52C
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14033F578 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14033F788 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AllocateMemory(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x4E4C53u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
