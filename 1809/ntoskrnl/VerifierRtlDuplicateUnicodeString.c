/*
 * XREFs of VerifierRtlDuplicateUnicodeString @ 0x1409447D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViRtlReplaceStringBuffer @ 0x140944C5C (ViRtlReplaceStringBuffer.c)
 */

__int64 __fastcall VerifierRtlDuplicateUnicodeString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v6; // [rsp+48h] [rbp+20h] BYREF

  result = ((__int64 (*)(void))pXdvRtlDuplicateUnicodeString)();
  v6 = result;
  if ( (int)result >= 0 )
  {
    ViRtlReplaceStringBuffer(a3, &v6, retaddr);
    return v6;
  }
  return result;
}
