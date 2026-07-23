/*
 * XREFs of RaspGetXExtent @ 0x14017A874
 * Callers:
 *     BcpGetCharacterMaxResourceProfile @ 0x140186B54 (BcpGetCharacterMaxResourceProfile.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x140329094 (BgpRasGetGlyphAdvanceWidth.c)
 * Callees:
 *     RaspGetCacheEntry @ 0x14017AA08 (RaspGetCacheEntry.c)
 *     RaspRasterize @ 0x14017AA98 (RaspRasterize.c)
 *     RaspFreeMemory @ 0x14017AC5C (RaspFreeMemory.c)
 *     RaspAllocateMemory @ 0x14017C164 (RaspAllocateMemory.c)
 *     RaspAddCacheEntry @ 0x1409525CC (RaspAddCacheEntry.c)
 */

__int64 __fastcall RaspGetXExtent(unsigned __int16 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, __int64 *a6)
{
  __int64 v6; // r14
  int v7; // esi
  __int64 v8; // rdi
  int v9; // r9d
  __int64 v10; // r15
  int v13; // r8d
  int v14; // r8d
  int v15; // r9d
  char *Memory; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  _QWORD v21[4]; // [rsp+58h] [rbp-59h] BYREF
  char v22; // [rsp+78h] [rbp-39h] BYREF
  int v23; // [rsp+108h] [rbp+57h] BYREF
  _DWORD *v24; // [rsp+118h] [rbp+67h]
  __int64 v25; // [rsp+120h] [rbp+6Fh] BYREF

  v24 = a3;
  v6 = (__int64)a6;
  v7 = 0;
  memset(v21, 0, sizeof(v21));
  v8 = 0LL;
  v9 = 0;
  v25 = 0LL;
  v10 = *a6;
  a5 = 0;
  if ( a1 >= 0x20u )
  {
    v13 = *(_DWORD *)(a2 + 16);
    a6 = *(__int64 **)(a2 + 8);
    RaspGetCacheEntry((unsigned int)&RaspBitmapCache, a1, v13, *((_DWORD *)a6 + 10), (__int64)a6, (__int64)v21);
    Memory = (char *)v21[0];
    if ( v21[0] )
    {
LABEL_3:
      v9 = *((_DWORD *)Memory + 11);
      *(_QWORD *)(v6 + 16) = *(_QWORD *)(Memory + 62);
      goto LABEL_4;
    }
    v7 = RaspRasterize(a2, a1, v14, v15, 0, (__int64)&v25, (__int64)&a5, (__int64)&v23, v6);
    if ( v7 >= 0 )
    {
      if ( v10 )
      {
        Memory = &v22;
LABEL_10:
        v18 = *(_QWORD *)(v6 + 16);
        v19 = (__int64)a6;
        v8 = v25;
        v20 = *((_DWORD *)a6 + 10);
        *((_DWORD *)Memory + 10) = *(_DWORD *)(a2 + 16);
        *((_DWORD *)Memory + 11) = a5;
        *((_DWORD *)Memory + 12) = v23;
        *((_DWORD *)Memory + 13) = 4;
        *((_DWORD *)Memory + 14) = 4;
        *((_WORD *)Memory + 30) = a1;
        *((_DWORD *)Memory + 9) = v20;
        *((_QWORD *)Memory + 3) = v19;
        *((_QWORD *)Memory + 2) = v8;
        *(_QWORD *)(Memory + 62) = v18;
        if ( !v10 )
          RaspAddCacheEntry(&RaspBitmapCache, Memory);
        goto LABEL_3;
      }
      Memory = (char *)RaspAllocateMemory(70LL);
      if ( Memory )
        goto LABEL_10;
      v7 = -1073741801;
    }
    v8 = v25;
    v9 = a5;
  }
LABEL_4:
  *v24 = v9;
  if ( v10 || v7 < 0 )
  {
    if ( v8 )
      RaspFreeMemory(v8, v6);
  }
  return (unsigned int)v7;
}
