/*
 * XREFs of RaidAdapterRequestDirectComplete @ 0x1C0038D70
 * Callers:
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C0005F9C (RaidLogMiniportCompletion.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterRequestDirectComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // rax
  bool v6; // zf

  v2 = *(_QWORD *)(a1 + 216);
  if ( (*(_BYTE *)(v2 + 560) & 2) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 5280));
  if ( (qword_1C00612B0 & 8) != 0 )
    RaidLogMiniportCompletion(a1, a2);
  if ( (*(_BYTE *)(v2 + 540) & 0x10) == 0
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 776), 4), (_DWORD)result != 1) )
  {
    v5 = *(_QWORD *)(a1 + 160);
    if ( v5 )
      *(_BYTE *)(v5 + 141) = -85;
    v6 = (*(_BYTE *)(a1 + 17) & 1) == 0;
    *(_BYTE *)(a1 + 16) = *(_BYTE *)(a1 + 16) & 0xE3 | 0x10;
    if ( !v6 )
    {
      RaidAdapterPoFxIdleComponent(v2, *(unsigned int *)(a1 + 748), 0LL);
      *(_BYTE *)(a1 + 17) &= ~1u;
    }
    result = *(_QWORD *)(a1 + 656);
    if ( result )
      return ((__int64 (__fastcall *)(__int64))result)(a1);
  }
  return result;
}
