/*
 * XREFs of StorUnmapSenseInfo @ 0x1C000D010
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C0008DD4 (RaidUnitReleaseIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 */

void *__fastcall StorUnmapSenseInfo(__int64 a1, __int64 a2)
{
  void *result; // rax
  const void *v3; // rsi
  unsigned __int8 v4; // r12
  __int64 v5; // r9
  __int64 v7; // rbp
  const void **v8; // r14
  unsigned __int8 *v9; // r15
  __int64 v10; // rbx
  int v11; // r11d
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // r14
  char v19; // al
  unsigned int v20; // r13d
  PVOID Pool; // rax
  PVOID v22; // r12
  int v23; // ecx

  result = (void *)*(unsigned __int8 *)(a1 + 16);
  v3 = 0LL;
  v4 = 0;
  v5 = a2;
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
        v3 = *(const void **)(v10 + 32);
        v8 = (const void **)(v10 + 32);
        v4 = *(_BYTE *)(v10 + 11);
        v9 = (unsigned __int8 *)(v10 + 11);
        v11 = *(_DWORD *)(v10 + 12);
        goto LABEL_13;
      }
      v7 = *(_QWORD *)(a1 + 168);
      v11 = *(_DWORD *)(v10 + 24);
      if ( !*(_DWORD *)(v10 + 20) )
      {
        v12 = *(_DWORD *)(v10 + 56);
        v13 = 0;
        if ( !v12 )
          goto LABEL_12;
        while ( 1 )
        {
          v14 = *(unsigned int *)(v10 + 4LL * v13 + 120);
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
                v23 = v17 - 65;
                if ( v23 )
                {
                  if ( v23 == 1 && v16 + 40 <= v15 )
                  {
                    v18 = v10 + 24;
LABEL_11:
                    v8 = (const void **)(v16 + v18);
                    v9 = (unsigned __int8 *)(v16 + v10 + 9);
                    v3 = *v8;
                    v4 = *v9;
LABEL_12:
                    v5 = a2;
                    break;
                  }
                }
                else if ( v16 + 56 <= v15 )
                {
LABEL_10:
                  v18 = v10 + 16;
                  goto LABEL_11;
                }
              }
            }
          }
          if ( ++v13 >= v12 )
            goto LABEL_12;
        }
      }
LABEL_13:
      v19 = *(_BYTE *)(v10 + 3);
      if ( v19 < 0 )
      {
        if ( (v11 & 0x200000) != 0 && v4 )
        {
          v20 = v4;
          Pool = RaidAllocatePool(NonPagedPoolNx, v4, 0x49536152u, v5);
          v22 = Pool;
          if ( Pool )
          {
            result = memmove(Pool, v3, v20);
            *v8 = v22;
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
            *(_BYTE *)(v10 + 3) = v19 & 0x7F;
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
