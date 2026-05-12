/*
 * XREFs of RaidAdapterRequestDirectComplete @ 0x1C0034968
 * Callers:
 *     StorPortNotification @ 0x1C0005250 (StorPortNotification.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C0005970 (RaidLogMiniportCompletion.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001ED44 (RaidAdapterPoFxIdleComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterRequestDirectComplete(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v4; // rax
  bool v5; // zf

  v1 = *(_QWORD *)(a1 + 216);
  if ( (*(_BYTE *)(v1 + 544) & 2) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 5144));
  if ( (qword_1C00612B0 & 8) != 0 )
    RaidLogMiniportCompletion((_QWORD *)a1);
  if ( (*(_BYTE *)(v1 + 524) & 0x10) == 0
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 776), 4), (_DWORD)result != 1) )
  {
    v4 = *(_QWORD *)(a1 + 160);
    if ( v4 )
      *(_BYTE *)(v4 + 141) = -85;
    v5 = (*(_BYTE *)(a1 + 17) & 1) == 0;
    *(_BYTE *)(a1 + 16) = *(_BYTE *)(a1 + 16) & 0xE3 | 0x10;
    if ( !v5 )
    {
      RaidAdapterPoFxIdleComponent(v1, *(unsigned int *)(a1 + 748), 0LL);
      *(_BYTE *)(a1 + 17) &= ~1u;
    }
    result = *(_QWORD *)(a1 + 656);
    if ( result )
      return ((__int64 (__fastcall *)(__int64))result)(a1);
  }
  return result;
}
