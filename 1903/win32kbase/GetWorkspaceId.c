/*
 * XREFs of GetWorkspaceId @ 0x1C01123E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetWorkspaceId(unsigned __int64 a1)
{
  __int64 result; // rax

  result = HMValidateHandleNoSecure(a1, 19);
  if ( result )
    return *(unsigned int *)(result + 1308);
  return result;
}
