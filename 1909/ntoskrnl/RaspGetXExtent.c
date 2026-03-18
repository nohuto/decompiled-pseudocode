/*
 * XREFs of RaspGetXExtent @ 0x1401838CC
 * Callers:
 *     BcpGetCharacterMaxResourceProfile @ 0x140190294 (BcpGetCharacterMaxResourceProfile.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x14034A188 (BgpRasGetGlyphAdvanceWidth.c)
 * Callees:
 *     RaspGetCacheEntry @ 0x140183A70 (RaspGetCacheEntry.c)
 *     RaspRasterize @ 0x140183B00 (RaspRasterize.c)
 *     RaspFreeMemory @ 0x140183CC4 (RaspFreeMemory.c)
 *     RaspAllocateMemory @ 0x1401851B4 (RaspAllocateMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RaspAddCacheEntry @ 0x140991634 (RaspAddCacheEntry.c)
 */

__int64 __fastcall RaspGetXExtent(unsigned __int16 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, __int64 *a6)
{
  __int64 v8; // r14
  int v9; // esi
  __int64 v10; // rdi
  int v11; // r8d
  __int64 v12; // r15
  int v13; // r8d
  int v14; // r8d
  int v15; // r9d
  _BYTE *Memory; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  _QWORD v21[4]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v22[128]; // [rsp+78h] [rbp-39h] BYREF
  int v23; // [rsp+108h] [rbp+57h] BYREF
  _DWORD *v24; // [rsp+118h] [rbp+67h]
  __int64 v25; // [rsp+120h] [rbp+6Fh] BYREF

  v24 = a3;
  memset(v22, 0, 0x46uLL);
  v8 = (__int64)a6;
  v9 = 0;
  memset(v21, 0, sizeof(v21));
  v10 = 0LL;
  v11 = 0;
  v25 = 0LL;
  v12 = *a6;
  a5 = 0;
  if ( a1 >= 0x20u )
  {
    v13 = *(_DWORD *)(a2 + 16);
    a6 = *(__int64 **)(a2 + 8);
    RaspGetCacheEntry((unsigned int)&RaspBitmapCache, a1, v13, *((_DWORD *)a6 + 10), (__int64)a6, (__int64)v21);
    Memory = (_BYTE *)v21[0];
    if ( v21[0] )
    {
LABEL_3:
      v11 = *((_DWORD *)Memory + 11);
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(Memory + 62);
      goto LABEL_4;
    }
    v9 = RaspRasterize(a2, a1, v14, v15, 0, (__int64)&v25, (__int64)&a5, (__int64)&v23, v8);
    if ( v9 >= 0 )
    {
      if ( v12 )
      {
        Memory = v22;
LABEL_10:
        v18 = *(_QWORD *)(v8 + 16);
        v19 = (__int64)a6;
        v10 = v25;
        v20 = *((_DWORD *)a6 + 10);
        *((_DWORD *)Memory + 10) = *(_DWORD *)(a2 + 16);
        *((_DWORD *)Memory + 11) = a5;
        *((_DWORD *)Memory + 12) = v23;
        *((_DWORD *)Memory + 13) = 4;
        *((_DWORD *)Memory + 14) = 4;
        *((_WORD *)Memory + 30) = a1;
        *((_DWORD *)Memory + 9) = v20;
        *((_QWORD *)Memory + 3) = v19;
        *((_QWORD *)Memory + 2) = v10;
        *(_QWORD *)(Memory + 62) = v18;
        if ( !v12 )
          RaspAddCacheEntry(&RaspBitmapCache, Memory);
        goto LABEL_3;
      }
      Memory = (_BYTE *)RaspAllocateMemory(70LL);
      if ( Memory )
        goto LABEL_10;
      v9 = -1073741801;
    }
    v10 = v25;
    v11 = a5;
  }
LABEL_4:
  *v24 = v11;
  if ( v12 || v9 < 0 )
  {
    if ( v10 )
      RaspFreeMemory(v10, v8);
  }
  return (unsigned int)v9;
}
