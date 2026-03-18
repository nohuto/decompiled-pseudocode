/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x140154F0C
 * Callers:
 *     VfAvlReserveNode @ 0x140154E84 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x14017EEF8 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017EFB4 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x1400C6CC0 (MmIsSessionAddress.c)
 */

__int64 __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) && MmIsSessionAddress(*(_QWORD *)a2) )
    result = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
