/*
 * XREFs of sub_18005C06C @ 0x18005C06C
 * Callers:
 *     sub_18005B0C8 @ 0x18005B0C8 (sub_18005B0C8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005B680 @ 0x18005B680 (sub_18005B680.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 */

__int64 __fastcall sub_18005C06C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v5; // rdx
  __int64 *v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = a1;
  result = sub_18005B680(a2, (wchar_t *)a1 + 9, a3, &v7, 0LL, &v8, (__int64 *)&v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    if ( v6 )
    {
      if ( v7 )
        *v7 = *v6;
      sub_18005BFD4(a2, (__int64)v5);
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v6);
    }
  }
  return result;
}
