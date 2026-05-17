/*
 * XREFs of RtlpFreeAllAtom @ 0x18005C10C
 * Callers:
 *     RtlpDereferenceAtom @ 0x18005B168 (RtlpDereferenceAtom.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpHashStringToAtom @ 0x18005B720 (RtlpHashStringToAtom.c)
 *     RtlpFreeHandleForAtom @ 0x18005C074 (RtlpFreeHandleForAtom.c)
 */

__int64 __fastcall RtlpFreeAllAtom(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v5; // rdx
  __int64 *v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = a1;
  result = RtlpHashStringToAtom(a2, (wchar_t *)a1 + 9, a3, &v7, 0LL, &v8, (__int64 *)&v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    if ( v6 )
    {
      if ( v7 )
        *v7 = *v6;
      RtlpFreeHandleForAtom(a2, (__int64)v5);
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v6);
    }
  }
  return result;
}
