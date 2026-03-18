/*
 * XREFs of READ_PM1_STATUS @ 0x1C0024460
 * Callers:
 *     ACPIInterruptServiceRoutine @ 0x1C00219F0 (ACPIInterruptServiceRoutine.c)
 *     ACPIEnableInitializeACPI @ 0x1C0024350 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0055BC0 (ACPIGpeHalEnableDisableEvents.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 READ_PM1_STATUS()
{
  unsigned __int16 v0; // bx
  unsigned __int16 v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      0LL,
      0LL,
      &v2,
      2LL,
      0LL);
    v0 = v2;
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      3LL,
      0LL,
      &v2,
      2LL,
      0LL);
    v0 |= v2;
  }
  return v0;
}
