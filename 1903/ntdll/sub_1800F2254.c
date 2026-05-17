/*
 * XREFs of sub_1800F2254 @ 0x1800F2254
 * Callers:
 *     RtlCopyExtendedContext @ 0x1800F21C0 (RtlCopyExtendedContext.c)
 * Callees:
 *     sub_18001ED88 @ 0x18001ED88 (sub_18001ED88.c)
 *     sub_1800665B4 @ 0x1800665B4 (sub_1800665B4.c)
 *     sub_1800667F8 @ 0x1800667F8 (sub_1800667F8.c)
 */

__int64 __fastcall sub_1800F2254(char a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v11) = a1;
  result = sub_18001ED88(a4, &v11);
  if ( (int)result >= 0 )
  {
    v9 = a5;
    if ( (v11 & 1) != 0 )
    {
      v10 = *(int *)(a5 + 8);
      if ( *(_DWORD *)(a2 + 8) != (_DWORD)v10 || *(_DWORD *)(a2 + 12) < *(_DWORD *)(a5 + 12) )
        return 3221225485LL;
      sub_1800665B4(v10, a2 + *(int *)(a2 + 8), v8);
    }
    if ( (v11 & 2) == 0 )
      return 0LL;
    result = sub_1800667F8(v7, a2, a2, v9, v9);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
