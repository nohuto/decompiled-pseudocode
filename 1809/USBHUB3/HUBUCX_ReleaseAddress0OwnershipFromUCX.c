/*
 * XREFs of HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x1C0021D20
 * Callers:
 *     HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure @ 0x1C001B9B0 (HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_ReleaseAddress0OwnershipFromUCX(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*a1 + 440LL))(*(_QWORD *)(*a1 + 248LL), a1[3]);
}
