/*
 * XREFs of sub_1800902A0 @ 0x1800902A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     sub_1800642C0 @ 0x1800642C0 (sub_1800642C0.c)
 *     sub_1800644BC @ 0x1800644BC (sub_1800644BC.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_1800F5030 @ 0x1800F5030 (sub_1800F5030.c)
 */

__int64 __fastcall sub_1800902A0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  result = sub_1800642C0(a1, a2);
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_1800635BC(*a2 + 24, v5);
    v6 = a2[1];
    v10 = 0LL;
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = a2[1];
    }
    v7 = *a2;
    *((_QWORD *)&v10 + 1) = v6;
    v8 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)&v10 = v7;
    sub_1800F5030(v8, &v10);
    v9 = sub_18006CEC8(*a2);
    return sub_1800644BC(a1, v9);
  }
  return result;
}
