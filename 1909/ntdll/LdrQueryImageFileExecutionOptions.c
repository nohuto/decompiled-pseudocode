/*
 * XREFs of LdrQueryImageFileExecutionOptions @ 0x180079E20
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlQueryImageFileExecutionOptions @ 0x180079E60 (RtlQueryImageFileExecutionOptions.c)
 */

__int64 __fastcall LdrQueryImageFileExecutionOptions(int a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  if ( LdrpIsSecureProcess )
    return 3221225524LL;
  else
    return RtlQueryImageFileExecutionOptions(a1, a2, a3, a4, a5, a6);
}
