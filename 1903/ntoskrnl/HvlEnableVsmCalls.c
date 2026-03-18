/*
 * XREFs of HvlEnableVsmCalls @ 0x140A22E78
 * Callers:
 *     KiInitializeBootStructures @ 0x14059FFC0 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x14019C588 (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x14034D254 (HvlpGetVtlCallVa.c)
 *     VslBindNtIum @ 0x140A399D4 (VslBindNtIum.c)
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
