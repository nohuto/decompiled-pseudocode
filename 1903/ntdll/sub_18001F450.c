/*
 * XREFs of sub_18001F450 @ 0x18001F450
 * Callers:
 *     sub_180020454 @ 0x180020454 (sub_180020454.c)
 *     sub_180020F00 @ 0x180020F00 (sub_180020F00.c)
 *     sub_180055358 @ 0x180055358 (sub_180055358.c)
 *     sub_1800555A8 @ 0x1800555A8 (sub_1800555A8.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180078390 (RtlGuardCheckLongJumpTarget.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800F7544 @ 0x1800F7544 (sub_1800F7544.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall sub_18001F450(void *a1)
{
  NTSTATUS v2; // eax
  _DWORD *v3; // r8
  WORD Machine; // dx
  DWORD v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1u, a1, 0LL, &OutHeaders);
  if ( !a1 )
    return 0LL;
  v2 = sub_18001C4DC((unsigned __int64)a1, 1, 0xAu, &v6, &v7);
  v3 = (_DWORD *)v7;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( !v3 || !v6 || v6 != *v3 )
    return 0LL;
  Machine = OutHeaders->FileHeader.Machine;
  if ( Machine == 14948 )
    Machine = 332;
  if ( Machine == 0x8664 )
    return v3;
  else
    return 0LL;
}
