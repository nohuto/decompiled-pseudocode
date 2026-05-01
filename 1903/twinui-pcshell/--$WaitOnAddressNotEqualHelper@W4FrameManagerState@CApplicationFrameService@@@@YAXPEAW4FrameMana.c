/*
 * XREFs of ??$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameManagerState@CApplicationFrameService@@W401@@Z @ 0x18013B13C
 * Callers:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180013C38 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ @ 0x18013ED70 (-_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitOnAddressNotEqualHelper<enum CApplicationFrameService::FrameManagerState>(
        unsigned int *Address,
        int a2)
{
  __int64 result; // rax
  int CompareAddress; // [rsp+38h] [rbp+10h] BYREF

  CompareAddress = a2;
  for ( result = *Address; ; result = *Address )
  {
    CompareAddress = result;
    if ( (_DWORD)result != 1 )
      break;
    WaitOnAddress(Address, &CompareAddress, 4uLL, 0xFFFFFFFF);
  }
  return result;
}
