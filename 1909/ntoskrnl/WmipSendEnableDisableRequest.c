/*
 * XREFs of WmipSendEnableDisableRequest @ 0x140738420
 * Callers:
 *     WmipSendEnableRequest @ 0x1406D1A40 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x14072C09C (WmipDoDisableRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipReferenceEntry @ 0x140695CE4 (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x140696B78 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x140713718 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(UCHAR a1, __int64 a2, char a3)
{
  bool v6; // r13
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
  volatile signed __int64 **v17; // rsi
  __int128 v18; // xmm0
  __int64 v19; // rbp
  volatile signed __int64 *v20; // rbx
  __int128 v23; // [rsp+38h] [rbp-290h] BYREF
  _QWORD v24[7]; // [rsp+48h] [rbp-280h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-248h] BYREF

  memset(v24, 0, 0x30uLL);
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    return 0LL;
  v6 = ((a1 - 4) & 0xFD) == 0;
  v7 = *(unsigned int *)(a2 + 36);
  v8 = 0LL;
  v9 = a3 != 0 ? 0x2000 : 0x4000;
  if ( (unsigned int)v7 > 0x40 )
  {
    PoolWithTag = (volatile signed __int64 **)ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
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
    HIDWORD(v24[2]) = 0;
    *(_OWORD *)((char *)v24 + 4) = 0LL;
    v24[5] = 0LL;
    v17 = PoolWithTag;
    v18 = *(_OWORD *)(a2 + 72);
    v19 = (unsigned int)v8;
    *(_OWORD *)&v24[3] = v18;
    LODWORD(v24[0]) = 48;
    do
    {
      v20 = *v17;
      WmipSendWmiIrp(a1, *((_DWORD *)*v17 + 14), (UNICODE_STRING *)&v24[3], 0x30u, (__int64)v24, &v23);
      WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v20);
      ++v17;
      --v19;
    }
    while ( v19 );
  }
  if ( PoolWithTag != (volatile signed __int64 **)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
