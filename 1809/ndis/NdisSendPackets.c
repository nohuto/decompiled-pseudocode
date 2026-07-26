/*
 * XREFs of NdisSendPackets @ 0x1C005F6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisSendPackets(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 168))();
}
