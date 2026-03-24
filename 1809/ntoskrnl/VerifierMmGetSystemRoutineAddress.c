/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x140944880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     VfThunkAdjustExportAddressIfHooked @ 0x1409368E8 (VfThunkAdjustExportAddressIfHooked.c)
 */

__int64 __fastcall VerifierMmGetSystemRoutineAddress(__int64 a1)
{
  __int64 result; // rax

  result = ((__int64 (*)(void))pXdvMmGetSystemRoutineAddress)();
  if ( result )
    return VfThunkAdjustExportAddressIfHooked(result, a1);
  return result;
}
