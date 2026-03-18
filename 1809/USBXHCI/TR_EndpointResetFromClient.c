/*
 * XREFs of TR_EndpointResetFromClient @ 0x1C0024560
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointResetFromClient @ 0x1C0040770 (ESM_NotifyingTransferRingsEndpointResetFromClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_EndpointResetFromClient(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 128LL))();
}
