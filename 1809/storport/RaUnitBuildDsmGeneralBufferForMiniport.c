/*
 * XREFs of RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C00468AC
 * Callers:
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006AF84 (RaUnitStorageDataSetManagementIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall RaUnitBuildDsmGeneralBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  const void *v4; // r13
  unsigned int v5; // ebx
  _DWORD *v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  _DWORD *Pool; // rax
  __int64 result; // rax

  v4 = *(const void **)(a2 + 24);
  v5 = 0;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v5 = -1073741637;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 184);
    v9 = *(unsigned int *)(v10 + 16) + 32LL;
    if ( v9 <= 0xFFFFFFFF )
    {
      Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v9, 0x72536152u, *(_QWORD *)(a1 + 8));
      v8 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, (unsigned int)v9);
        v8[4] = 1771297;
        memmove(v8 + 1, "MPDSMGEN", 8uLL);
        *v8 = 28;
        v8[6] = v9 - 28;
        v8[5] = 0;
        memmove(v8 + 8, v4, *(unsigned int *)(v10 + 16));
      }
      else
      {
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  result = v5;
  *a3 = v8;
  *a4 = v9;
  return result;
}
