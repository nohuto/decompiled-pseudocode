/*
 * XREFs of WmipSendEnableDisableRequest @ 0x14070BB0C
 * Callers:
 *     WmipSendEnableRequest @ 0x1406CF574 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x140703548 (WmipDoDisableRequest.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipSendWmiIrp @ 0x1405FCEA0 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140613C30 (WmipReferenceEntry.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(UCHAR a1, __int64 a2, char a3)
{
  bool v6; // r8
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // esi
  volatile signed __int64 **PoolWithTag; // rdi
  __int64 *i; // rbx
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // eax
  ULONG_PTR v15; // rcx
  int v16; // eax
  __int128 v17; // xmm0
  volatile signed __int64 **v18; // rsi
  __int64 v19; // rbp
  volatile signed __int64 *v20; // rbx
  bool v22; // [rsp+30h] [rbp-298h]
  __int128 v23; // [rsp+38h] [rbp-290h] BYREF
  LARGE_INTEGER v24[7]; // [rsp+48h] [rbp-280h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-248h] BYREF

  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    return 0LL;
  v6 = ((a1 - 4) & 0xFD) == 0;
  v7 = *(unsigned int *)(a2 + 36);
  v22 = v6;
  v8 = 0LL;
  v9 = a3 != 0 ? 0x2000 : 0x4000;
  if ( (unsigned int)v7 > 0x40 )
  {
    PoolWithTag = (volatile signed __int64 **)ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v6 = v22;
  }
  else
  {
    PoolWithTag = (volatile signed __int64 **)P;
  }
  for ( i = *(__int64 **)(a2 + 56); i != (__int64 *)(a2 + 56) && (unsigned int)v8 < *(_DWORD *)(a2 + 36); i = (__int64 *)*i )
  {
    v12 = *((_DWORD *)i + 4);
    if ( (v12 & 0x1000) == 0 && (a3 || (v12 & 4) != 0) )
    {
      v13 = i[8];
      if ( (*(_DWORD *)(v13 + 16) & 0x20000000) == 0 )
      {
        v14 = v12 & v9;
        if ( v6 )
        {
          if ( !v14 )
            goto LABEL_13;
        }
        else if ( v14 )
        {
LABEL_13:
          v15 = i[8];
          PoolWithTag[v8] = (volatile signed __int64 *)v13;
          WmipReferenceEntry(v15);
          v12 = *((_DWORD *)i + 4);
          v8 = (unsigned int)(v8 + 1);
          v6 = v22;
        }
        if ( v6 )
          v16 = v12 | v9;
        else
          v16 = v12 & ~v9;
        *((_DWORD *)i + 4) = v16;
        continue;
      }
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v8 )
  {
    memset(v24, 0, 0x30uLL);
    v17 = *(_OWORD *)(a2 + 72);
    v24[0].LowPart = 48;
    v18 = PoolWithTag;
    v19 = (unsigned int)v8;
    *(_OWORD *)&v24[3].LowPart = v17;
    do
    {
      v20 = *v18;
      WmipSendWmiIrp(a1, *((_DWORD *)*v18 + 14), (UNICODE_STRING *)&v24[3], 0x30u, (__int64)v24, &v23);
      WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v20);
      ++v18;
      --v19;
    }
    while ( v19 );
  }
  if ( PoolWithTag != (volatile signed __int64 **)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
