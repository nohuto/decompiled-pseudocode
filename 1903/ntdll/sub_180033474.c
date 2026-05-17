/*
 * XREFs of sub_180033474 @ 0x180033474
 * Callers:
 *     sub_180030488 @ 0x180030488 (sub_180030488.c)
 *     sub_1800332A0 @ 0x1800332A0 (sub_1800332A0.c)
 *     sub_18007FC20 @ 0x18007FC20 (sub_18007FC20.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlSetThreadSubProcessTag @ 0x180035BB0 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x1800705F0 (TpCallbackMayRunLong.c)
 */

__int64 __fastcall sub_180033474(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v4 = *(_QWORD *)(a2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 80) = v4;
    RtlSetThreadSubProcessTag(v4);
  }
  NtCurrentTeb()->ActivityId = *(struct _GUID *)(a2 + 112);
  return RtlSetThreadWorkOnBehalfTicket(a2 + 128);
}
