/*
 * XREFs of RaCallMiniportHwInitialize @ 0x1C0019BF4
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C001909C (RaidAdapterStartMiniport.c)
 *     RaidAdapterReInitialize @ 0x1C003466C (RaidAdapterReInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportHwInitialize(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 8LL))(*(_QWORD *)(a1 + 240) + 16LL) == 0
       ? 0xC0000001
       : 0;
}
