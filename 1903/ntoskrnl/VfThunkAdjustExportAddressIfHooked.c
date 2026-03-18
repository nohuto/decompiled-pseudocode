/*
 * XREFs of VfThunkAdjustExportAddressIfHooked @ 0x140975FC8
 * Callers:
 *     VerifierMmGetSystemRoutineAddress @ 0x140984250 (VerifierMmGetSystemRoutineAddress.c)
 * Callees:
 *     ViThunkAdjustExportAddressIfHooked @ 0x140976304 (ViThunkAdjustExportAddressIfHooked.c)
 */

__int64 __fastcall VfThunkAdjustExportAddressIfHooked(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  if ( !(unsigned int)ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfRegularThunks, 48LL)
    && !(unsigned int)ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfOrderDependentThunks, 56LL)
    && !(unsigned int)ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfMandatoryThunks, 48LL)
    && !(unsigned int)ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfPoolThunks, 48LL) )
  {
    ViThunkAdjustExportAddressIfHooked(&v4, a2, &VfXdvThunks, 48LL);
  }
  return v4;
}
