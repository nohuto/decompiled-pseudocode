/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x180103C74
 * Callers:
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180063D90 (RtlpHpHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F3DB0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetHeapInterceptorIndex(__int64 (__fastcall *a1)())
{
  __int64 result; // rax
  unsigned __int16 v2; // dx
  bool v3; // zf

  LOWORD(result) = 0;
  while ( 1 )
  {
    v2 = result + 1;
    v3 = RtlpInterceptorRoutines[(unsigned __int16)result] == a1;
    result = (unsigned __int16)(result + 1);
    if ( v3 )
      break;
    if ( v2 >= 2u )
      return 0LL;
  }
  return result;
}
