/*
 * XREFs of sub_180083AF0 @ 0x180083AF0
 * Callers:
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 */

__int64 __fastcall sub_180083AF0(unsigned __int64 a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  DWORD v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = sub_18001C4DC(a1, 1, 9u, &v4, &v5);
  v2 = v5;
  if ( v1 < 0 )
    v2 = 0LL;
  return v2 != 0 ? 0xC000007B : 0;
}
