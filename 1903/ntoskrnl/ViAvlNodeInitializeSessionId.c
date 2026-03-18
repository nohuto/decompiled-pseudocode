/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x14015486C
 * Callers:
 *     VfAvlReserveNode @ 0x1401547E4 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x14017E808 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 */

__int64 __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) && (LOBYTE(v3) = MmIsSessionAddress(*(_QWORD *)a2), v3) )
    result = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
