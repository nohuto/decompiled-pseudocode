/*
 * XREFs of WheaPersistOfflinedPage @ 0x1403204A4
 * Callers:
 *     EmpRemoveBadS3PageWorker @ 0x140813E00 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1408DBD6C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BcdCloseStore @ 0x140711A28 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140712288 (BcdOpenStore.c)
 *     BcdOpenObject @ 0x140712E44 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FC0 (BcdCloseObject.c)
 *     WheapCountBadPageExtents @ 0x1408DC008 (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x1408DC050 (WheapIsPageInList.c)
 *     WheapSortBadPages @ 0x1408DC074 (WheapSortBadPages.c)
 *     BcdCreateObject @ 0x1408F0808 (BcdCreateObject.c)
 *     BcdGetElementData @ 0x1408F1004 (BcdGetElementData.c)
 *     BcdSetElementData @ 0x1408F1020 (BcdSetElementData.c)
 */

__int64 __fastcall WheaPersistOfflinedPage(__int64 a1)
{
  _QWORD *v1; // rdi
  int v3; // ebx
  __int64 v4; // rsi
  int ElementData; // eax
  unsigned int v6; // r14d
  int v7; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+48h] BYREF
  __int64 v13; // [rsp+80h] [rbp+50h] BYREF
  __int64 v14; // [rsp+88h] [rbp+58h] BYREF

  v13 = 0LL;
  v1 = 0LL;
  v14 = 0LL;
  v3 = BcdOpenStore(a1, 0LL, &v13);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( (int)BcdOpenObject(v13, &GUID_BAD_MEMORY_GROUP, &v14) < 0 )
  {
    v11 = 0x2010000000000001LL;
    v3 = ((__int64 (__fastcall *)(__int64, GUID *, __int64 *, __int64 *))BcdCreateObject)(
           v13,
           &GUID_BAD_MEMORY_GROUP,
           &v11,
           &v14);
    if ( v3 < 0 )
    {
      v4 = v14;
      goto LABEL_18;
    }
  }
  v4 = v14;
  v12 = 0;
  ElementData = BcdGetElementData(v14, 385875978LL, 0LL, &v12);
  v6 = v12;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  v12 = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 8LL, 0x61656857u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_18;
  }
  if ( v7 != -1073741789 )
  {
LABEL_12:
    v9 = v6 >> 3;
    if ( (unsigned __int8)WheapIsPageInList(v1, v9, a1) )
    {
      v3 = 0;
    }
    else
    {
      v1[v9] = a1;
      WheapSortBadPages(v1, (unsigned int)(v9 + 1));
      if ( (unsigned int)WheapCountBadPageExtents(v1, (unsigned int)(v9 + 1)) <= 0x40 )
      {
        v3 = BcdSetElementData(v4, 385875978LL, v1, v6 + 8);
        if ( v3 >= 0 )
          v3 = 0;
      }
      else
      {
        v3 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v3 = BcdGetElementData(v4, 385875978LL, PoolWithTag, &v12);
  if ( v3 >= 0 )
  {
    v6 = v12;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( v13 )
    BcdCloseStore(v13);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x61656857u);
  return (unsigned int)v3;
}
