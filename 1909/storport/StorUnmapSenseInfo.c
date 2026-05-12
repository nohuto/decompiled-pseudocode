/*
 * XREFs of StorUnmapSenseInfo @ 0x1C000A980
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C00074B8 (RaidUnitReleaseIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 */

void *__fastcall StorUnmapSenseInfo(__int64 a1, __int64 a2)
{
  void *result; // rax
  const void *v3; // rsi
  unsigned __int8 v4; // bp
  __int64 v7; // r12
  const void **v8; // r14
  unsigned __int8 *v9; // r15
  __int64 v10; // rbx
  int v11; // r13d
  unsigned int v12; // r10d
  unsigned int i; // r11d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  char v18; // al
  unsigned int v19; // r13d
  PVOID Pool; // rax
  PVOID v21; // rbp
  int v22; // ecx

  result = (void *)*(unsigned __int8 *)(a1 + 16);
  v3 = 0LL;
  v4 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( ((unsigned __int8)result & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 168);
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 2) != 40 )
      {
        v11 = *(_DWORD *)(v10 + 12);
        v8 = (const void **)(v10 + 32);
        v9 = (unsigned __int8 *)(v10 + 11);
        goto LABEL_11;
      }
      v7 = *(_QWORD *)(a1 + 168);
      v11 = *(_DWORD *)(v10 + 24);
      if ( !*(_DWORD *)(v10 + 20) )
      {
        v12 = *(_DWORD *)(v10 + 56);
        for ( i = 0; i < v12; ++i )
        {
          v14 = *(unsigned int *)(v10 + 4LL * i + 120);
          if ( (unsigned int)v14 >= 0x80 )
          {
            v15 = *(unsigned int *)(v10 + 16);
            if ( (unsigned int)v14 <= (unsigned int)v15 )
            {
              v16 = (unsigned int)v14;
              v17 = *(_DWORD *)(v14 + v10);
              if ( v17 == 64 )
              {
                if ( v16 + 40 <= v15 )
                  goto LABEL_10;
              }
              else
              {
                v22 = v17 - 65;
                if ( v22 )
                {
                  if ( v22 == 1 && v16 + 40 <= v15 )
                  {
                    v8 = (const void **)(v16 + v10 + 24);
                    v9 = (unsigned __int8 *)(v16 + v10 + 9);
LABEL_11:
                    v4 = *v9;
                    v3 = *v8;
                    break;
                  }
                }
                else if ( v16 + 56 <= v15 )
                {
LABEL_10:
                  v8 = (const void **)(v16 + v10 + 16);
                  v9 = (unsigned __int8 *)(v16 + v10 + 9);
                  goto LABEL_11;
                }
              }
            }
          }
        }
      }
      v18 = *(_BYTE *)(v10 + 3);
      if ( v18 < 0 )
      {
        if ( (v11 & 0x200000) != 0 && v4 )
        {
          v19 = v4;
          Pool = RaidAllocatePool(NonPagedPoolNx, v4, 0x49536152u, a2);
          v21 = Pool;
          if ( Pool )
          {
            result = memmove(Pool, v3, v19);
            *v8 = v21;
            if ( *(_BYTE *)(v10 + 2) == 40 )
              *(_DWORD *)(v7 + 24) |= 0x400u;
            else
              *(_DWORD *)(v10 + 12) |= 0x400u;
          }
          else
          {
            *v8 = *(const void **)(a1 + 200);
            result = (void *)*(unsigned __int8 *)(a1 + 208);
            *v9 = (unsigned __int8)result;
            *(_BYTE *)(v10 + 3) &= ~0x80u;
          }
        }
        else
        {
          if ( v4 >= *(_BYTE *)(a1 + 208) )
            v4 = *(_BYTE *)(a1 + 208);
          if ( v4 )
            memmove(*(void **)(a1 + 200), v3, v4);
          else
            *(_BYTE *)(v10 + 3) = v18 & 0x7F;
          result = *(void **)(a1 + 200);
          *v8 = result;
          *v9 = v4;
        }
      }
      else
      {
        *v8 = *(const void **)(a1 + 200);
        result = (void *)*(unsigned __int8 *)(a1 + 208);
        *v9 = (unsigned __int8)result;
      }
    }
  }
  return result;
}
