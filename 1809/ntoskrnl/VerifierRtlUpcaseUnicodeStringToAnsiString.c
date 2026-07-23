/*
 * XREFs of VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x140944B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViRtlReplaceStringBuffer @ 0x140944C5C (ViRtlReplaceStringBuffer.c)
 */

__int64 __fastcall VerifierRtlUpcaseUnicodeStringToAnsiString(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  result = ((__int64 (*)(void))pXdvRtlUpcaseUnicodeStringToAnsiString)();
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      ViRtlReplaceStringBuffer(a1, &v7, retaddr);
      return v7;
    }
  }
  return result;
}
