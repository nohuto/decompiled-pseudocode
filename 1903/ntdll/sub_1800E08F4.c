/*
 * XREFs of sub_1800E08F4 @ 0x1800E08F4
 * Callers:
 *     RtlCreateUserFiberShadowStack @ 0x1800E09A0 (RtlCreateUserFiberShadowStack.c)
 * Callees:
 *     sub_180058928 @ 0x180058928 (sub_180058928.c)
 */

__int64 __fastcall sub_1800E08F4(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r10
  unsigned __int64 *v6; // r11
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  result = sub_180058928(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), (__int64 *)&v9);
  if ( (int)result >= 0 )
  {
    result = sub_180058928(v4, *(_QWORD *)(v5 + 24), (__int64 *)&v10);
    if ( (int)result >= 0 )
    {
      v7 = v9;
      if ( v9 < 0x1000 )
        return 3221225485LL;
      if ( (v9 & 0xFFF) != 0 )
        return 3221225485LL;
      v8 = v10;
      if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 || v10 > v9 )
      {
        return 3221225485LL;
      }
      else
      {
        if ( v9 < 0x3000 )
          v7 = 12288LL;
        *a2 = v7;
        result = (unsigned int)result;
        *v6 = (v8 / 5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      }
    }
  }
  return result;
}
