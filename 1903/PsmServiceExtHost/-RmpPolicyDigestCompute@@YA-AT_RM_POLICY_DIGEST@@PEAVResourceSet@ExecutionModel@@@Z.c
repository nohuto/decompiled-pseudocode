/*
 * XREFs of ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180022CD0
 * Callers:
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001DAA0 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180022DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestCompute(__int64 a1)
{
  char v1; // r10
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int16 v5; // cx
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int16 v8; // r8
  __int16 v9; // ax
  int v10; // eax
  char v11; // al

  v1 = *(_BYTE *)(a1 + 1378);
  if ( (v1 & 8) != 0
    || (v3 = *(int *)(a1 + 1336), (unsigned int)v3 <= 0x27) && (v4 = 0x8800001000LL, _bittest64(&v4, v3)) )
  {
    v9 = *(_WORD *)(a1 + 1376);
    v8 = 2;
    LOBYTE(v5) = v9;
  }
  else
  {
    v5 = *(_WORD *)(a1 + 1376);
    if ( (v5 & 0x10) != 0 || (unsigned int)v3 <= 0x28 && (v6 = v3, v7 = 0x11000002000LL, _bittest64(&v7, v6)) )
    {
      v8 = 4;
      LOBYTE(v9) = *(_WORD *)(a1 + 1376);
    }
    else
    {
      v8 = 1;
      LOBYTE(v9) = *(_WORD *)(a1 + 1376);
    }
  }
  if ( (v9 & 0x10) == 0 && (v10 = *(_DWORD *)(a1 + 1336), v10 != 13) && v10 != 36 && v10 != 40
    || (v11 = v5, (v1 & 0x40) != 0) )
  {
    v8 |= 8u;
    v11 = v5;
  }
  return v8 | (8 * ((2 * (v11 & 3 | (8 * ((*(_DWORD *)(a1 + 1332) >> 3) & 1 | 2)))) | v11 & 8));
}
