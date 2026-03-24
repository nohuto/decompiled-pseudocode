/*
 * XREFs of HvlEnableVsmCalls @ 0x1409DF548
 * Callers:
 *     KiInitializeBootStructures @ 0x14056FE10 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x14017C368 (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x14032BA6C (HvlpGetVtlCallVa.c)
 *     VslBindNtIum @ 0x1409F44C4 (VslBindNtIum.c)
 */

__int64 __fastcall HvlEnableVsmCalls(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 0x100) != 0 )
  {
    result = HvlpTryConfigureInterface(a1);
    if ( (int)result >= 0 )
    {
      HvlpGetVtlCallVa();
      return VslBindNtIum();
    }
  }
  return result;
}
