/*
 * XREFs of RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C0043CF4
 * Callers:
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C0038710 (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C00478F4 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

__int64 __fastcall RaBuildSetProtocolSpecificPropertyBufferForMiniport(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4)
{
  _DWORD *v4; // r14
  unsigned int v5; // r15d
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rbp
  unsigned int v9; // esi
  char *Pool; // rax
  char *v11; // rbx
  int v12; // eax
  int v14; // [rsp+60h] [rbp+8h]

  v4 = *(_DWORD **)(a2 + 24);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = v4[6];
  v14 = v4[7];
  if ( *(_DWORD *)v6 == 1 )
    v8 = *(_QWORD *)(v6 + 24);
  else
    v8 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v6 != 1 )
    v6 = 0LL;
  if ( v7 < 0x28 )
    v9 = 80;
  else
    v9 = v4[7] + v7 + 40;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, v9, 0x72536152u, a1);
  v11 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v9);
    *(_DWORD *)v11 = 28;
    *(_QWORD *)(v11 + 4) = 0x4F544F5250544553LL;
    *((_DWORD *)v11 + 4) = 2987020;
    if ( v6 )
      v12 = *(_DWORD *)(v6 + 1288);
    else
      v12 = *(_DWORD *)(v8 + 4204);
    *((_DWORD *)v11 + 3) = v12;
    *((_DWORD *)v11 + 6) = v9 - 28;
    *((_DWORD *)v11 + 7) = 72;
    *((_DWORD *)v11 + 8) = 72;
    *((_DWORD *)v11 + 9) = v4[2];
    *((_DWORD *)v11 + 10) = v4[3];
    *((_DWORD *)v11 + 11) = v4[4];
    *((_DWORD *)v11 + 12) = v4[5];
    *((_DWORD *)v11 + 13) = v7 >= 0x40 ? 0x44 : 0;
    *((_DWORD *)v11 + 14) = v14;
  }
  else
  {
    v9 = 0;
    v5 = -1073741670;
  }
  *a3 = v11;
  *a4 = v9;
  return v5;
}
