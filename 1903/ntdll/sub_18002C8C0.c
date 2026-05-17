/*
 * XREFs of sub_18002C8C0 @ 0x18002C8C0
 * Callers:
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 *     sub_18002C8C0 @ 0x18002C8C0 (sub_18002C8C0.c)
 * Callees:
 *     sub_18002C8C0 @ 0x18002C8C0 (sub_18002C8C0.c)
 *     sub_18002C944 @ 0x18002C944 (sub_18002C944.c)
 */

__int64 __fastcall sub_18002C8C0(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  if ( !v1 )
  {
    result = 0LL;
    goto LABEL_7;
  }
  v3 = *(_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v3 = (_QWORD *)*v3;
    v4 = v3[1];
    if ( *(_DWORD *)(v4 + 56) == 6 )
    {
      result = sub_18002C8C0(v3[1]);
      goto LABEL_12;
    }
    if ( *(int *)(v4 + 56) >= 7 )
    {
      result = 0LL;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(v4 + 56) == -4 )
      break;
    result = 3221225701LL;
LABEL_12:
    if ( (int)result < 0 )
      return result;
LABEL_6:
    if ( v3 == v1 )
      goto LABEL_7;
  }
  result = 3221225794LL;
LABEL_7:
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 56) = 7;
    result = sub_18002C944(a1);
    if ( (int)result < 0 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
