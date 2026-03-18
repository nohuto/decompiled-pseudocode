/*
 * XREFs of MiControlAreaUsingCopyExtents @ 0x1400BF880
 * Callers:
 *     MiDeleteFileExtents @ 0x14064E8E0 (MiDeleteFileExtents.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingCopyExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x20) != 0 && (*(_QWORD *)(*(_QWORD *)(a1 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL) != 0;
}
