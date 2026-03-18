/*
 * XREFs of IsThreadMiPEnabled @ 0x1C00D5D30
 * Callers:
 *     IsMouseInPointerActive @ 0x1C00D5CEC (IsMouseInPointerActive.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FA0A0 (xxxMNEndMenuStateInternal.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C0211C60 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C021B140 (NtUserPromoteMouseInPointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsThreadMiPEnabled(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 820LL) & 4) != 0 || (*(_DWORD *)(a1 + 1208) & 0x2000000) != 0;
}
