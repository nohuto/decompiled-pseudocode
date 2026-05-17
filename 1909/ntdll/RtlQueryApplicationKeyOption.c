/*
 * XREFs of RtlQueryApplicationKeyOption @ 0x180079D7C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D4804 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x180079F00 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall RtlQueryApplicationKeyOption(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  __int64 result; // rax

  if ( a1
    && ((result = RtlQueryImageFileKeyOption(a1, a3, a4, a5, a6, 0LL), (((_DWORD)result + 0x80000000) & 0x80000000) != 0)
     || (_DWORD)result == -2147483643) )
  {
    if ( a8 )
      *a8 = a1;
  }
  else if ( a2
         && ((result = RtlQueryImageFileKeyOption(a2, a3, a4, a5, a6, 0LL),
              (((_DWORD)result + 0x80000000) & 0x80000000) != 0)
          || (_DWORD)result == -2147483643) )
  {
    if ( a8 )
      *a8 = a2;
  }
  else
  {
    return 3221225485LL;
  }
  return result;
}
