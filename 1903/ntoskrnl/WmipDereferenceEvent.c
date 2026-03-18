/*
 * XREFs of WmipDereferenceEvent @ 0x1408F0874
 * Callers:
 *     WmipProcessEvent @ 0x14071A5BC (WmipProcessEvent.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipReferenceEntry @ 0x1406688C4 (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x140669758 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x140711938 (WmipSendWmiIrp.c)
 */

char *__fastcall WmipDereferenceEvent(__int64 a1)
{
  int v1; // esi
  unsigned int v2; // r15d
  char *v4; // rdi
  ULONG_PTR i; // rbx
  unsigned int v6; // eax
  int v7; // r12d
  unsigned int v8; // r14d
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // esi
  char *PoolWithTag; // rax
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // r13d
  __int128 v17[5]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+8h]
  unsigned int v19; // [rsp+98h] [rbp+10h]
  unsigned int v20; // [rsp+A0h] [rbp+18h]
  int v21; // [rsp+A8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  v19 = 0;
  v4 = 0LL;
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
    v6 = 64;
    v7 = *(_DWORD *)(a1 + 44) & 0x80;
    if ( v7 )
    {
      v8 = 0;
      v18 = 0;
    }
    else
    {
      v8 = *(unsigned __int16 *)(a1 + 68) + 2;
      v18 = 64;
      v6 = *(unsigned __int16 *)(a1 + 68) + 66;
    }
    if ( v6 + 7 >= v6 )
    {
      v9 = *(_DWORD *)(a1 + 64);
      v10 = (v6 + 7) & 0xFFFFFFF8;
      v20 = v10;
      if ( v9 <= ~v10 )
      {
        v11 = v9 + v10;
        while ( 1 )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x70696D57u);
          v4 = PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, v11);
          *(_DWORD *)v4 = v11;
          *((_DWORD *)v4 + 1) = *(_DWORD *)(a1 + 4);
          *(_OWORD *)(v4 + 24) = *(_OWORD *)(a1 + 48);
          v13 = *(_DWORD *)(a1 + 8);
          *((_DWORD *)v4 + 11) = v7 | 2;
          *((_DWORD *)v4 + 14) = v20;
          *((_DWORD *)v4 + 2) = v13;
          if ( v7 )
          {
            *((_DWORD *)v4 + 13) = *(_DWORD *)(a1 + 68);
          }
          else
          {
            v8 -= 2;
            *((_DWORD *)v4 + 12) = v18;
            *(_WORD *)&v4[v18] = v8;
            memmove(&v4[v18 + 2], (const void *)(a1 + 70), v8);
          }
          v21 = WmipSendWmiIrp(1u, *(_DWORD *)(i + 56), (UNICODE_STRING *)(v4 + 24), v11, (__int64)v4, v17);
          if ( v21 < 0 )
          {
            v15 = v19;
          }
          else
          {
            v14 = *((_DWORD *)v4 + 11);
            if ( (v14 & 0x20) == 0 )
            {
              *((_DWORD *)v4 + 11) = v14 | *(_DWORD *)(a1 + 44) & 0xFF000008 | 8;
              break;
            }
            v15 = *((_DWORD *)v4 + 12);
            v19 = v15;
          }
          ExFreePoolWithTag(v4, 0);
          v4 = 0LL;
          if ( v21 >= 0 && v15 > v11 )
          {
            ++v2;
            v11 = v15;
            if ( v2 < 2 )
              continue;
          }
          break;
        }
      }
    }
    WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)i);
  }
  return v4;
}
