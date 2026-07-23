/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x1400F5958
 * Callers:
 *     VfAvlReserveNode @ 0x1400F58D0 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x14016C478 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C530 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
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
