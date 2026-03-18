/*
 * XREFs of ApiSetSetUserPTPEnabledPreference @ 0x1C0141A98
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C01087F4 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = IsSetUserPTPEnabledPreferenceSupported();
  if ( (int)result >= 0 )
    return SetUserPTPEnabledPreference(a1, a2, a3);
  return result;
}
