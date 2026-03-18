/*
 * XREFs of FindBGRMapCache @ 0x1C025EB50
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00371B0 (AAHalftoneBitmap.c)
 *     CreateDyesColorMappingTable @ 0x1C003786C (CreateDyesColorMappingTable.c)
 * Callees:
 *     memmove @ 0x1C0166500 (memmove.c)
 *     TrimBGRMapCache @ 0x1C025F024 (TrimBGRMapCache.c)
 */

__int64 __fastcall FindBGRMapCache(__int64 a1, int a2)
{
  __int64 v4; // rsi
  int v5; // edi
  _DWORD *v6; // rbx
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // r14d
  __int128 v12; // xmm6

  v4 = 0LL;
  EngAcquireSemaphore(qword_1C032C6A8);
  if ( Src )
  {
    v5 = dword_1C032C6C8;
    if ( dword_1C032C6C8 )
    {
      v6 = (char *)Src + 16 * dword_1C032C6C8 - 16;
      v7 = 0;
      do
      {
        if ( v4 )
          break;
        if ( a1 == *(_QWORD *)v6 )
        {
          v8 = v6[2];
          v4 = a1;
          if ( v8 )
          {
            v9 = v8 - 1;
            v6[2] = v9;
            if ( !v9 )
              ++HIDWORD(qword_1C032C6CC);
          }
        }
        else if ( v6[3] == a2 )
        {
          v10 = v6[2];
          v4 = *(_QWORD *)v6;
          v6[2] = v10 + 1;
          if ( !v10 )
            --HIDWORD(qword_1C032C6CC);
          v11 = dword_1C032C6C8;
          if ( v5 < dword_1C032C6C8 )
          {
            v12 = *(_OWORD *)v6;
            memmove(v6, v6 + 4, 16LL * v7);
            *((_OWORD *)Src + v11 - 1) = v12;
          }
        }
        ++v7;
        v6 -= 4;
        --v5;
      }
      while ( v5 );
    }
  }
  if ( dword_1C032C6C8 > 5 && HIDWORD(qword_1C032C6CC) )
    TrimBGRMapCache();
  EngReleaseSemaphore(qword_1C032C6A8);
  return v4;
}
