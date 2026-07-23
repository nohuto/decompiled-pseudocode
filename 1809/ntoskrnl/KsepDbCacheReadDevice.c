/*
 * XREFs of KsepDbCacheReadDevice @ 0x140721F7C
 * Callers:
 *     KseQueryDeviceData @ 0x140721BD0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140848610 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1400F4D5C (KsepPoolAllocatePaged.c)
 *     SdbGetDatabaseMatchEx @ 0x14067DB20 (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextTag @ 0x14067E00C (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     KseShimDatabaseClose @ 0x14067EB4C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14067EC78 (KseShimDatabaseOpen.c)
 *     KsepStringDuplicate @ 0x14070E038 (KsepStringDuplicate.c)
 *     KsepCacheDeviceFree @ 0x1407220F0 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x140722220 (KsepCacheDeviceInsertData.c)
 *     KsepDbReadKFlag @ 0x1407222E8 (KsepDbReadKFlag.c)
 *     SdbTagRefToTagID @ 0x1407239EC (SdbTagRefToTagID.c)
 *     KsepDbReadKData @ 0x140848E68 (KsepDbReadKData.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(wchar_t *a1, _QWORD *a2)
{
  char *Paged; // rax
  char *v5; // rdi
  _QWORD *v6; // rax
  int inserted; // ebx
  __int64 v8; // r9
  unsigned int DatabaseMatch; // eax
  __int64 v11; // rsi
  unsigned int i; // eax
  unsigned int v13; // r15d
  unsigned int j; // eax
  unsigned int v15; // r15d
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+4Ch] [rbp-24h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  unsigned int v20; // [rsp+A8h] [rbp+38h] BYREF
  PVOID v21; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+48h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  *a2 = 0LL;
  Paged = (char *)KsepPoolAllocatePaged(0x48uLL);
  v5 = Paged;
  if ( Paged )
  {
    v6 = Paged + 56;
    v6[1] = v6;
    *v6 = v6;
    inserted = KsepStringDuplicate((__int64)(v5 + 40), a1);
    if ( inserted >= 0 )
    {
      inserted = KseShimDatabaseOpen(&v21);
      if ( inserted >= 0 )
      {
        inserted = 0;
        DatabaseMatch = SdbGetDatabaseMatchEx((__int64)v21, 1, a1, v8, 0LL, 0LL, (__int64)&KsepMatchMachineInfo);
        if ( DatabaseMatch && (unsigned int)SdbTagRefToTagID(v21, DatabaseMatch, &v22, &v20) )
        {
          v11 = v22;
          for ( i = SdbFindFirstTag(v22, v20, 28691); ; i = SdbFindNextTag(v11, v20, v13) )
          {
            v13 = i;
            if ( !i )
              break;
            inserted = KsepDbReadKFlag(v11, i, &v16);
            if ( inserted < 0 )
              goto LABEL_6;
            inserted = KsepCacheDeviceInsertData(v5, v16, v19, v17, v18);
            if ( inserted < 0 )
              goto LABEL_6;
          }
          for ( j = SdbFindFirstTag(v11, v20, 28712); ; j = SdbFindNextTag(v11, v20, v15) )
          {
            v15 = j;
            if ( !j )
              break;
            inserted = KsepDbReadKData(v11, j, &v16);
            if ( inserted < 0 )
              goto LABEL_6;
            inserted = KsepCacheDeviceInsertData(v5, v16, v19, v17, v18);
            if ( inserted < 0 )
              goto LABEL_6;
          }
          *a2 = v5;
          v5 = 0LL;
        }
        else
        {
          inserted = -1073741275;
        }
      }
LABEL_6:
      if ( v21 )
        KseShimDatabaseClose(v21);
    }
    if ( v5 )
      KsepCacheDeviceFree(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
