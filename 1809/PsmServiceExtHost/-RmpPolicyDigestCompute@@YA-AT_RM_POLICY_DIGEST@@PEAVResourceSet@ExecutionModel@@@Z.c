/*
 * XREFs of ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180020930
 * Callers:
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B140 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180020A10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestCompute(__int64 a1)
{
  char v1; // r9
  __int64 v3; // r11
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int16 v6; // r8
  __int16 v7; // r10
  unsigned __int64 v8; // rcx
  bool v9; // r8
  __int16 v10; // cx
  __int16 v11; // ax

  v1 = *(_BYTE *)(a1 + 1498);
  v3 = 0x11000002000LL;
  if ( (v1 & 8) != 0
    || (v4 = *(int *)(a1 + 1456), (unsigned int)v4 <= 0x27) && (v5 = 0x8800001000LL, _bittest64(&v5, v4)) )
  {
    v6 = *(_WORD *)(a1 + 1496);
    v7 = 2;
  }
  else
  {
    v6 = *(_WORD *)(a1 + 1496);
    if ( (v6 & 0x10) != 0 || (unsigned int)v4 <= 0x28 && _bittest64(&v3, v4) )
      v7 = 4;
    else
      v7 = 1;
  }
  v9 = ((v6 & 0x10) != 0 || (v8 = *(int *)(a1 + 1456), (unsigned int)v8 <= 0x28) && _bittest64(&v3, v8))
    && (v1 & 0x40) == 0;
  v10 = v7 | 8;
  v11 = 8
      * (*(_WORD *)(a1 + 1496) & 8 | (2 * (*(_WORD *)(a1 + 1496) & 3 | (8 * ((*(_DWORD *)(a1 + 1452) >> 3) & 1 | 2)))));
  if ( v9 )
    v10 = v7;
  return v10 | v11;
}
