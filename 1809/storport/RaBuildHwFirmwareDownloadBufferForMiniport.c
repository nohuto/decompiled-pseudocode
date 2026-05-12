/*
 * XREFs of RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0045150
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0038068 (RaidAdapterHwFirmwareDownloadIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall RaBuildHwFirmwareDownloadBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  int *v6; // r15
  __int64 v7; // rbp
  _DWORD *v8; // rbx
  unsigned __int64 v9; // r14
  int v10; // eax
  __int64 v11; // r13
  bool v12; // zf
  int v13; // eax
  __int64 v14; // r14
  _DWORD *Pool; // rax
  int v16; // eax
  BOOL v17; // ecx
  int v18; // eax
  int v19; // eax
  const void *v20; // rdx
  void *v21; // rcx
  size_t v22; // r8

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v6 = *(int **)(a1 + 64);
  v7 = v4;
  v8 = 0LL;
  LODWORD(v9) = 0;
  v10 = *v6;
  if ( *(_DWORD *)v4 != 48 )
    v7 = 0LL;
  if ( v10 == 1 )
    v11 = *((_QWORD *)v6 + 3);
  else
    v11 = *(_QWORD *)(a1 + 64);
  v12 = v10 == 1;
  v13 = *(_DWORD *)(v11 + 5528);
  if ( !v12 )
    v6 = 0LL;
  switch ( v13 )
  {
    case 0:
      goto LABEL_34;
    case 1:
      v9 = *(_QWORD *)(v4 + 24) + 80LL;
      goto LABEL_16;
    case 2:
      if ( v7 )
        v14 = *(_QWORD *)(v7 + 24);
      else
        v14 = *(_QWORD *)(v4 + 24);
      v9 = v14 + 88;
LABEL_16:
      if ( v9 > 0xFFFFFFFF )
      {
        v5 = -1073741811;
        goto LABEL_34;
      }
      break;
  }
  Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v9, 0x72536152u, a1);
  v8 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, (unsigned int)v9);
    *v8 = 28;
    v8[4] = 1771392;
    memmove(v8 + 1, "FIRMWARE", 8uLL);
    if ( v6 )
      v16 = v6[316];
    else
      v16 = *(_DWORD *)(v11 + 4268);
    v8[3] = v16;
    v8[6] = v9 - 28;
    v17 = v6 == 0LL;
    v8[7] = 1;
    v8[8] = 24;
    v8[9] = 2;
    v8[10] = v17;
    v8[11] = 56;
    v8[12] = v9 - 56;
    if ( v7 )
      v18 = *(_DWORD *)(v7 + 8);
    else
      v18 = *(_DWORD *)(v4 + 8);
    v8[10] = v18 | v17;
    v19 = *(_DWORD *)(v11 + 5528);
    if ( v19 == 1 )
    {
      v8[14] = 1;
      v20 = (const void *)(v4 + 32);
      v21 = v8 + 20;
      v8[15] = *(_DWORD *)(v4 + 24) + 24;
      *((_QWORD *)v8 + 8) = *(_QWORD *)(v4 + 16);
      *((_QWORD *)v8 + 9) = *(_QWORD *)(v4 + 24);
      v22 = *(unsigned int *)(v4 + 24);
    }
    else
    {
      if ( v19 != 2 )
        goto LABEL_34;
      v8[14] = 2;
      if ( v7 )
      {
        v20 = (const void *)(v7 + 40);
        *((_QWORD *)v8 + 8) = *(_QWORD *)(v7 + 16);
        *((_BYTE *)v8 + 80) = *(_BYTE *)(v7 + 12);
        v22 = (unsigned int)*(_QWORD *)(v7 + 24);
        *((_QWORD *)v8 + 9) = *(_QWORD *)(v7 + 24);
        v8[15] = v22 + 32;
        v8[21] = *(_DWORD *)(v7 + 32);
      }
      else
      {
        v20 = (const void *)(v4 + 32);
        *((_QWORD *)v8 + 8) = *(_QWORD *)(v4 + 16);
        *((_BYTE *)v8 + 80) = *(_BYTE *)(v4 + 12);
        v22 = (unsigned int)*(_QWORD *)(v4 + 24);
        *((_QWORD *)v8 + 9) = *(_QWORD *)(v4 + 24);
        v8[21] = 0;
        v8[15] = v22 + 32;
      }
      v21 = v8 + 22;
    }
    memmove(v21, v20, v22);
    goto LABEL_34;
  }
  v5 = -1073741670;
LABEL_34:
  *a3 = v8;
  *a4 = v9;
  return v5;
}
