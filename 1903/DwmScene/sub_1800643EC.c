/*
 * XREFs of sub_1800643EC @ 0x1800643EC
 * Callers:
 *     sub_18000D9E0 @ 0x18000D9E0 (sub_18000D9E0.c)
 *     sub_1800159D4 @ 0x1800159D4 (sub_1800159D4.c)
 *     sub_18001D544 @ 0x18001D544 (sub_18001D544.c)
 *     sub_1800390B0 @ 0x1800390B0 (sub_1800390B0.c)
 *     sub_180039340 @ 0x180039340 (sub_180039340.c)
 *     sub_18006ADB8 @ 0x18006ADB8 (sub_18006ADB8.c)
 *     sub_1800CBAE8 @ 0x1800CBAE8 (sub_1800CBAE8.c)
 *     sub_1800CC458 @ 0x1800CC458 (sub_1800CC458.c)
 *     sub_1800CC6E8 @ 0x1800CC6E8 (sub_1800CC6E8.c)
 *     sub_1800CC978 @ 0x1800CC978 (sub_1800CC978.c)
 *     sub_1800CCC08 @ 0x1800CCC08 (sub_1800CCC08.c)
 *     sub_1800CCE98 @ 0x1800CCE98 (sub_1800CCE98.c)
 *     sub_1800CEBA4 @ 0x1800CEBA4 (sub_1800CEBA4.c)
 *     sub_1800CF044 @ 0x1800CF044 (sub_1800CF044.c)
 *     sub_1800D0DB8 @ 0x1800D0DB8 (sub_1800D0DB8.c)
 *     sub_1800F3DF4 @ 0x1800F3DF4 (sub_1800F3DF4.c)
 *     sub_1800F6620 @ 0x1800F6620 (sub_1800F6620.c)
 * Callees:
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800643EC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v2 = a2[1];
  }
  *(_QWORD *)(a1 + 72) = *a2;
  v5 = *(volatile signed __int32 **)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v2;
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  result = sub_18006CDB8(*a2);
  *(_DWORD *)(a1 + 88) = result;
  return result;
}
