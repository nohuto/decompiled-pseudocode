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

_DWORD *__fastcall sub_18001F450(unsigned __int64 a1)
{
  int v2; // eax
  _DWORD *v3; // r8
  __int16 v4; // dx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1, a1, 0LL, &v8);
  if ( !a1 )
    return 0LL;
  v2 = sub_18001C4DC(a1, 1, 0xAu, &v6, (__int64 *)&v7);
  v3 = v7;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( !v3 || !v6 || v6 != *v3 )
    return 0LL;
  v4 = *(_WORD *)(v8 + 4);
  if ( v4 == 14948 )
    v4 = 332;
  if ( v4 == -31132 )
    return v3;
  else
    return 0LL;
}
