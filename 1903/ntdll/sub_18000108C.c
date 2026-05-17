/*
 * XREFs of sub_18000108C @ 0x18000108C
 * Callers:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 * Callees:
 *     sub_1800010F0 @ 0x1800010F0 (sub_1800010F0.c)
 *     sub_1800202C0 @ 0x1800202C0 (sub_1800202C0.c)
 */

_DWORD *__fastcall sub_18000108C(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)((__int64 (*)(void))sub_1800010F0)();
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = sub_1800202C0(a3, &v7);
  if ( v5 && *v4 == *(_DWORD *)sub_1800010F0(v5, v8) )
    return v4;
  else
    return 0LL;
}
