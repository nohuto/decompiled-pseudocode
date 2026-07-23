/*
 * XREFs of sub_18005C06C @ 0x18005C06C
 * Callers:
 *     sub_18005B0C8 @ 0x18005B0C8 (sub_18005B0C8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005B680 @ 0x18005B680 (sub_18005B680.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 */

signed int __fastcall sub_18005C06C(wchar_t *a1, __int64 a2, __int64 a3)
{
  signed int result; // eax
  PVOID v5; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = a1;
  result = sub_18005B680(a2, a1 + 9, a3, &v7, 0LL, &v8, (__int64 *)&BaseAddress);
  if ( result >= 0 )
  {
    v5 = BaseAddress;
    if ( BaseAddress )
    {
      if ( v7 )
        *v7 = *(_QWORD *)BaseAddress;
      sub_18005BFD4(a2, (__int64)v5);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
  }
  return result;
}
