/*
 * XREFs of sub_1800644FC @ 0x1800644FC
 * Callers:
 *     sub_18000DA30 @ 0x18000DA30 (sub_18000DA30.c)
 *     sub_180015A44 @ 0x180015A44 (sub_180015A44.c)
 *     sub_18001D654 @ 0x18001D654 (sub_18001D654.c)
 *     sub_1800391C0 @ 0x1800391C0 (sub_1800391C0.c)
 *     sub_180039450 @ 0x180039450 (sub_180039450.c)
 *     sub_18006AEC8 @ 0x18006AEC8 (sub_18006AEC8.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 *     sub_1800CC568 @ 0x1800CC568 (sub_1800CC568.c)
 *     sub_1800CC7F8 @ 0x1800CC7F8 (sub_1800CC7F8.c)
 *     sub_1800CCA88 @ 0x1800CCA88 (sub_1800CCA88.c)
 *     sub_1800CCD18 @ 0x1800CCD18 (sub_1800CCD18.c)
 *     sub_1800CCFA8 @ 0x1800CCFA8 (sub_1800CCFA8.c)
 *     sub_1800CECB4 @ 0x1800CECB4 (sub_1800CECB4.c)
 *     sub_1800CF154 @ 0x1800CF154 (sub_1800CF154.c)
 *     sub_1800D0EC8 @ 0x1800D0EC8 (sub_1800D0EC8.c)
 *     sub_1800F3F04 @ 0x1800F3F04 (sub_1800F3F04.c)
 *     sub_1800F6730 @ 0x1800F6730 (sub_1800F6730.c)
 * Callees:
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800644FC(__int64 a1, _QWORD *a2)
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
  result = sub_18006CEC8(*a2);
  *(_DWORD *)(a1 + 88) = result;
  return result;
}
