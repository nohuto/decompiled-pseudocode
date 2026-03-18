/*
 * XREFs of KsepDbCacheReadDevice @ 0x14074DC9C
 * Callers:
 *     KseQueryDeviceData @ 0x14074D8E0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140881F10 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x140154760 (KsepPoolAllocatePaged.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KseShimDatabaseClose @ 0x14070C7F4 (KseShimDatabaseClose.c)
 *     SdbGetDatabaseMatchEx @ 0x14070D964 (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextTag @ 0x14070DD88 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14070E0C0 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x14070EB04 (KseShimDatabaseOpen.c)
 *     KsepStringDuplicate @ 0x14073B5A0 (KsepStringDuplicate.c)
 *     SdbTagRefToTagID @ 0x14074BF60 (SdbTagRefToTagID.c)
 *     KsepDbReadKFlag @ 0x14074C004 (KsepDbReadKFlag.c)
 *     KsepCacheDeviceInsertData @ 0x14074D610 (KsepCacheDeviceInsertData.c)
 *     KsepCacheDeviceFree @ 0x14074DE20 (KsepCacheDeviceFree.c)
 *     KsepDbReadKData @ 0x1408827BC (KsepDbReadKData.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(wchar_t *a1, __int64 *a2)
{
  char *Paged; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  int KFlag; // ebx
  __int64 v8; // r9
  unsigned int DatabaseMatch; // eax
  __int64 v11; // rsi
  unsigned int i; // eax
  unsigned int v13; // r15d
  unsigned int j; // eax
  unsigned int v15; // r15d
  _WORD *v16[6]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+38h] BYREF
  PVOID v18; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+48h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  memset(v16, 0, 0x28uLL);
  *a2 = 0LL;
  Paged = (char *)KsepPoolAllocatePaged(0x48uLL);
  v5 = (__int64)Paged;
  if ( Paged )
  {
    v6 = Paged + 56;
    v6[1] = v6;
    *v6 = v6;
    KFlag = KsepStringDuplicate(v5 + 40, a1);
    if ( KFlag >= 0 )
    {
      KFlag = KseShimDatabaseOpen(&v18);
      if ( KFlag >= 0 )
      {
        KFlag = 0;
        DatabaseMatch = SdbGetDatabaseMatchEx((__int64)v18, 1, a1, v8, 0LL, 0LL, (__int64)&KsepMatchMachineInfo);
        if ( DatabaseMatch && (unsigned int)SdbTagRefToTagID((__int64)v18, DatabaseMatch, &v19, (int *)&v17) )
        {
          v11 = v19;
          for ( i = SdbFindFirstTag(v19, v17, 28691); ; i = SdbFindNextTag(v11, v17, v13) )
          {
            v13 = i;
            if ( !i )
              break;
            KFlag = KsepDbReadKFlag(v11, i, (__int64)v16);
            if ( KFlag < 0 )
              goto LABEL_6;
            KFlag = KsepCacheDeviceInsertData(v5, v16[0], v16[2], (int)v16[1], HIDWORD(v16[1]));
            if ( KFlag < 0 )
              goto LABEL_6;
          }
          for ( j = SdbFindFirstTag(v11, v17, 28712); ; j = SdbFindNextTag(v11, v17, v15) )
          {
            v15 = j;
            if ( !j )
              break;
            KFlag = KsepDbReadKData(v11, j, v16);
            if ( KFlag < 0 )
              goto LABEL_6;
            KFlag = KsepCacheDeviceInsertData(v5, v16[0], v16[2], (int)v16[1], HIDWORD(v16[1]));
            if ( KFlag < 0 )
              goto LABEL_6;
          }
          *a2 = v5;
          v5 = 0LL;
        }
        else
        {
          KFlag = -1073741275;
        }
      }
LABEL_6:
      if ( v18 )
        KseShimDatabaseClose(v18);
    }
    if ( v5 )
      KsepCacheDeviceFree(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)KFlag;
}
