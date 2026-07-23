/*
 * XREFs of ExpFindFastOwnerEntryForThread @ 0x140166184
 * Callers:
 *     ExIsFastResourceHeldExclusive @ 0x1401649D0 (ExIsFastResourceHeldExclusive.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x140164A60 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpFastResourceLegacyRelease @ 0x140164C28 (ExpFastResourceLegacyRelease.c)
 *     ExAcquireFastResourceExclusive @ 0x1401653D0 (ExAcquireFastResourceExclusive.c)
 *     ExIsFastResourceHeld @ 0x1401656E0 (ExIsFastResourceHeld.c)
 *     ExDisownFastResource @ 0x140165770 (ExDisownFastResource.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140165A30 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x14031BACC (ExpFastResourceLegacyIsAcquiredShared.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpFindFastOwnerEntryForThread(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 **v4; // rax
  __int64 *i; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // rcx

  v4 = (__int64 **)(a1 + 2024 + (a3 != 0 ? 0x18 : 0));
  for ( i = *v4; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v4 )
      return 0LL;
    if ( i[3] == a2 )
      break;
  }
  if ( a4 && (*((_BYTE *)i + 17) & 2) == 0 )
  {
    v7 = (__int64 *)i[5];
    v8 = i + 5;
    while ( v7 != v8 )
    {
      if ( (*((_BYTE *)v7 + 17) & 2) != 0 )
        return v7;
      v7 = (__int64 *)*v7;
    }
    return 0LL;
  }
  return i;
}
