/*
 * XREFs of VfFailDeviceNode @ 0x140177F10
 * Callers:
 *     <none>
 * Callees:
 *     VfIsVerificationEnabled @ 0x140177F50 (VfIsVerificationEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfFailDeviceNode(ULONG_PTR BugCheckParameter2, ULONG BugCheckCode, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v4; // rdi
  __int64 result; // rax

  v4 = (unsigned int)BugCheckParameter1;
  result = VfIsVerificationEnabled(1LL, BugCheckParameter2);
  if ( (_DWORD)result )
    return VerifierBugCheckIfAppropriate(BugCheckCode, v4, BugCheckParameter2, 0LL, 0LL);
  return result;
}
