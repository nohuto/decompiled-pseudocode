/*
 * XREFs of PiDqPnPGetObjectPropertyKeys @ 0x14082C16C
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14082B86C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14082BAF8 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FB7E8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetObjectPropertyKeys @ 0x1408FB434 (_PnpGetObjectPropertyKeys.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyKeys(int a1, int a2, int a3, __int64 a4, PVOID *a5, unsigned int *a6)
{
  unsigned int v9; // ebp
  PVOID PoolWithTag; // rax
  unsigned int v11; // edx
  signed int ObjectPropertyKeys; // eax
  signed int v13; // ebx
  unsigned __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-48h]

  v9 = 6000;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x58706E50u);
    *a5 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    *a6 = 0;
    v11 = v9 / 0x14;
    if ( a2 )
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(
                             PiPnpRtlCtx,
                             a1,
                             a2,
                             a3,
                             v16,
                             1,
                             (__int64)PoolWithTag,
                             v11,
                             (__int64)a6);
    else
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(
                             *(__int64 *)&PiPnpRtlCtx,
                             a3,
                             0LL,
                             1,
                             (__int64)PoolWithTag,
                             v11,
                             a6);
    v13 = ObjectPropertyKeys;
    if ( ObjectPropertyKeys == -1073741789 )
    {
      v14 = 20LL * *a6;
      v9 = -1;
      if ( v14 <= 0xFFFFFFFF )
        v9 = 20 * *a6;
      v13 = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v14 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_14;
  }
  v13 = -1073741670;
LABEL_14:
  if ( v13 < 0 )
    *a6 = 0;
  if ( !*a6 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return (unsigned int)v13;
}
