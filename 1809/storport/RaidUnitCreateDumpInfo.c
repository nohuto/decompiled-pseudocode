/*
 * XREFs of RaidUnitCreateDumpInfo @ 0x1C00757B8
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0075098 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RaidUnitFreeDumpInfo @ 0x1C0049D50 (RaidUnitFreeDumpInfo.c)
 *     RaidUnitCreateDumpData @ 0x1C007568C (RaidUnitCreateDumpData.c)
 */

__int64 __fastcall RaidUnitCreateDumpInfo(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, _BYTE *a5)
{
  _BYTE *v5; // r11
  int v6; // esi
  bool v9; // zf
  _QWORD *v10; // rcx
  _QWORD *v11; // r10
  _QWORD *v12; // r9
  _QWORD *v13; // rdx
  __int64 v14; // r8
  _BYTE *Pool; // rax
  char *v16; // rbx
  PVOID v17; // rcx
  int v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+44h] [rbp+Ch]
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v20 = HIDWORD(a1);
  v5 = a5;
  v6 = 0;
  *a4 = 0LL;
  P = 0LL;
  v19 = 0;
  v9 = *(_DWORD *)(a3 + 4) == 1;
  *v5 = 0;
  if ( v9 )
    v10 = (_QWORD *)a2[405];
  else
    v10 = (_QWORD *)a2[406];
  if ( v10 )
    goto LABEL_21;
  v11 = (_QWORD *)(a3 + 24);
  v12 = 0LL;
  v13 = *(_QWORD **)(a3 + 24);
  while ( v13 != v11 )
  {
    v10 = v13 - 1;
    v12 = v13 - 1;
    v14 = v13[2] - a2[247];
    if ( !v14 )
      v14 = v10[4] - a2[248];
    if ( !v14 )
      break;
    v13 = (_QWORD *)*v13;
    v10 = 0LL;
    v12 = 0LL;
  }
  if ( v12 )
  {
LABEL_21:
    *a4 = v10;
    *v5 = 1;
  }
  else
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, a2[1]);
    a5 = Pool;
    v16 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, 0x48uLL);
      *((_QWORD *)v16 + 2) = v16 + 8;
      *((_QWORD *)v16 + 1) = v16 + 8;
      *(_DWORD *)v16 = 72;
      *(_OWORD *)(v16 + 24) = *(_OWORD *)(a2 + 247);
      v6 = RaidUnitCreateDumpData((__int64)a2, &P, &v19);
      if ( v6 < 0 )
      {
        v17 = P;
      }
      else
      {
        *((_DWORD *)v16 + 11) = v19;
        *((_QWORD *)v16 + 6) = P;
        v17 = 0LL;
        *a4 = v16;
        v16 = 0LL;
        a5 = 0LL;
      }
      if ( v17 )
        ExFreePoolWithTag(v17, 0x44436152u);
      if ( v16 )
        RaidUnitFreeDumpInfo((PVOID **)&a5);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
