/*
 * XREFs of WmipDereferenceEvent @ 0x1408B45F8
 * Callers:
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipSendWmiIrp @ 0x1405FCEA0 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140613C30 (WmipReferenceEntry.c)
 */

char *__fastcall WmipDereferenceEvent(__int64 a1)
{
  int v1; // ebp
  char *v3; // rdi
  ULONG_PTR i; // rbx
  unsigned int v5; // edx
  int v6; // r13d
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // r15d
  unsigned int v10; // ecx
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  char *PoolWithTag; // rax
  int v14; // ecx
  __int128 v16[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+8h]
  unsigned int v18; // [rsp+88h] [rbp+10h]
  int v19; // [rsp+90h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 4);
  v3 = 0LL;
  v18 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD *)WmipDSHeadPtr; ; i = *(_QWORD *)i )
  {
    if ( i == WmipDSHeadPtr )
    {
      i = 0LL;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(i + 56) == v1 )
      break;
  }
  WmipReferenceEntry(i);
LABEL_6:
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( i )
  {
    v5 = 64;
    v6 = *(_DWORD *)(a1 + 44) & 0x80;
    if ( v6 )
    {
      v7 = 0;
      v17 = 0;
    }
    else
    {
      v7 = *(unsigned __int16 *)(a1 + 68) + 2;
      v17 = 64;
      v5 = *(unsigned __int16 *)(a1 + 68) + 66;
    }
    v8 = (v5 + 7) & 0xFFFFFFF8;
    if ( v5 + 7 >= v5 )
    {
      v9 = (v5 + 7) & 0xFFFFFFF8;
      v10 = *(_DWORD *)(a1 + 64);
      if ( v10 <= ~v8 )
      {
        v11 = v8 + v10;
        v12 = 0;
        while ( 1 )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x70696D57u);
          v3 = PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, v11);
          *(_DWORD *)v3 = v11;
          *((_DWORD *)v3 + 1) = *(_DWORD *)(a1 + 4);
          *(_OWORD *)(v3 + 24) = *(_OWORD *)(a1 + 48);
          *((_DWORD *)v3 + 2) = *(_DWORD *)(a1 + 8);
          *((_DWORD *)v3 + 11) = v6 | 2;
          *((_DWORD *)v3 + 14) = v9;
          if ( v6 )
          {
            *((_DWORD *)v3 + 13) = *(_DWORD *)(a1 + 68);
          }
          else
          {
            v7 -= 2;
            *((_DWORD *)v3 + 12) = v17;
            *(_WORD *)&v3[v17] = v7;
            memmove(&v3[v17 + 2], (const void *)(a1 + 70), v7);
          }
          v19 = WmipSendWmiIrp(1u, *(_DWORD *)(i + 56), (UNICODE_STRING *)(v3 + 24), v11, (__int64)v3, v16);
          if ( v19 >= 0 )
          {
            v14 = *((_DWORD *)v3 + 11);
            if ( (v14 & 0x20) == 0 )
            {
              *((_DWORD *)v3 + 11) = v14 | *(_DWORD *)(a1 + 44) & 0xFF000008 | 8;
              break;
            }
            v18 = *((_DWORD *)v3 + 12);
          }
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          if ( v19 >= 0 && v18 > v11 )
          {
            ++v12;
            v11 = v18;
            if ( v12 < 2 )
              continue;
          }
          break;
        }
      }
    }
    WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)i);
  }
  return v3;
}
