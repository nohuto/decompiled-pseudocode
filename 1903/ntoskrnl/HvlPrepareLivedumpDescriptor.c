/*
 * XREFs of HvlPrepareLivedumpDescriptor @ 0x14028BD98
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140859728 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     HvlSetupLiveDumpBuffer @ 0x14028EAAC (HvlSetupLiveDumpBuffer.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1402907E4 (VslSetupLiveDumpBufferInSk.c)
 */

__int64 __fastcall HvlPrepareLivedumpDescriptor(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  if ( VslVsmEnabled )
    return VslSetupLiveDumpBufferInSk(a1, a2, 64, a4, a5, a6);
  else
    return HvlSetupLiveDumpBuffer(a1, a2, 64, a4, a5, a6);
}
