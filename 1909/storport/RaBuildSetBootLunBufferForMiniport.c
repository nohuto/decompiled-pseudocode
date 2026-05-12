/*
 * XREFs of RaBuildSetBootLunBufferForMiniport @ 0x1C0043C04
 * Callers:
 *     RaidAdapterSetBootLunIoctl @ 0x1C00373F0 (RaidAdapterSetBootLunIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     RaidAdapterFindUnitByIdentifier @ 0x1C0034C74 (RaidAdapterFindUnitByIdentifier.c)
 */

__int64 __fastcall RaBuildSetBootLunBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // r15
  unsigned int v8; // edi
  _DWORD *Pool; // rax
  _DWORD *v10; // rbx
  _BYTE *UnitByIdentifier; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v8 = 0;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x2CuLL, 0x72536152u, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x2CuLL);
    v10[4] = 3004036;
    *v10 = 28;
    v10[3] = *(_DWORD *)(a1 + 4204);
    v10[6] = 16;
    v10[8] = 16;
    v10[7] = 1;
    v13 = *(_OWORD *)(v4 + 8);
    UnitByIdentifier = RaidAdapterFindUnitByIdentifier(a1, &v13);
    if ( UnitByIdentifier )
    {
      v10[9] = 8;
      *((_BYTE *)v10 + 43) = UnitByIdentifier[98];
      *((_BYTE *)v10 + 41) = UnitByIdentifier[96];
      *((_BYTE *)v10 + 40) = 0;
      *((_BYTE *)v10 + 42) = UnitByIdentifier[97];
    }
    else
    {
      v8 = -1073741632;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  result = v8;
  *a3 = v10;
  *a4 = 44;
  return result;
}
