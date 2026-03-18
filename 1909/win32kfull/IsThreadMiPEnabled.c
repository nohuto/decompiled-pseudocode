/*
 * XREFs of IsThreadMiPEnabled @ 0x1C00E5898
 * Callers:
 *     IsMouseInPointerActive @ 0x1C00E5854 (IsMouseInPointerActive.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0210820 (xxxMNEndMenuStateInternal.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C0229680 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C0232C00 (NtUserPromoteMouseInPointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsThreadMiPEnabled(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 416) + 812LL) & 4) != 0 || (*(_DWORD *)(a1 + 1224) & 0x2000000) != 0;
}
