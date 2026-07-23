/*
 * XREFs of PiDmListUpdateAggregationCountWorker @ 0x140703CD8
 * Callers:
 *     PiDmListAddObjectWorker @ 0x140703BF8 (PiDmListAddObjectWorker.c)
 *     PiDmListRemoveObjectWorker @ 0x14082A9A8 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x140599E7C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140599ECC (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x140599F2C (PiDmCacheDataDecode.c)
 */

void __fastcall PiDmListUpdateAggregationCountWorker(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v4; // rbx
  __int64 v7; // rbp
  int v8; // ecx
  __int64 v9; // rsi
  unsigned int CachedKeyIndex; // eax
  unsigned int v11; // edx
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-30h] BYREF
  DEVPROPKEY **v17; // [rsp+40h] [rbp-28h] BYREF
  char v18; // [rsp+88h] [rbp+20h] BYREF

  v4 = &unk_1403502A8;
  v7 = 3LL;
  do
  {
    v8 = *(v4 - 6);
    if ( *(_DWORD *)(a2 + 28) == v8 && *(_DWORD *)(a1 + 28) == *v4 )
    {
      v9 = *((_QWORD *)v4 + 3);
      if ( *(_DWORD *)(a1 + v9) != 0x80000000 )
      {
        PiDmGetCacheKeys(v8, &v17, &v14);
        CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v17, v14, *((_QWORD *)v4 - 2));
        if ( CachedKeyIndex < v11 )
        {
          v12 = (_DWORD *)(a2 + 8 * (CachedKeyIndex + 2 * (CachedKeyIndex + 7LL)));
          if ( *v12 <= 1u )
            goto LABEL_15;
          v13 = PiDmCacheDataDecode((__int64)v12, &v15, (GUID *)&v18, 1u, &v16);
          if ( v13 < 0 )
          {
            if ( v13 != -1073741275 && v13 != -1073741789 )
LABEL_15:
              *(_DWORD *)(a1 + v9) = 0x80000000;
          }
          else if ( v18 == -1 && v15 == 17 )
          {
            *(_DWORD *)(a1 + v9) += a3;
          }
        }
      }
    }
    v4 += 14;
    --v7;
  }
  while ( v7 );
}
