/*
 * XREFs of sub_180090190 @ 0x180090190
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_1800641B0 @ 0x1800641B0 (sub_1800641B0.c)
 *     sub_1800643AC @ 0x1800643AC (sub_1800643AC.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_1800F4F20 @ 0x1800F4F20 (sub_1800F4F20.c)
 */

__int64 __fastcall sub_180090190(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  result = sub_1800641B0(a1, a2);
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_1800634AC(*a2 + 24, v5);
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
    sub_1800F4F20(v8, &v10);
    v9 = sub_18006CDB8(*a2);
    return sub_1800643AC(a1, v9);
  }
  return result;
}
