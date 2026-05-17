/*
 * XREFs of RtlDuplicateUnicodeString @ 0x180077A90
 * Callers:
 *     sub_18010FC5C @ 0x18010FC5C (sub_18010FC5C.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlValidateUnicodeString @ 0x180077BD0 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlDuplicateUnicodeString(int a1, __int16 *a2, __int64 a3)
{
  char v5; // r12
  unsigned __int16 v6; // di
  _WORD *v7; // r14
  __int64 result; // rax
  unsigned __int16 v9; // bx
  _WORD *v10; // rax

  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a3 || (a1 & 3) == 2 )
    return 3221225485LL;
  result = RtlValidateUnicodeString(0LL);
  if ( (int)result < 0 )
    return result;
  if ( a2 )
    v6 = *a2;
  if ( (v5 & 1) != 0 && v6 == 0xFFFE )
    return 3221225734LL;
  if ( (v5 & 1) != 0 )
    v9 = v6 + 2;
  else
    v9 = v6;
  if ( (v5 & 2) == 0 && !v6 )
    v9 = 0;
  if ( !v9 )
    goto LABEL_20;
  v10 = (_WORD *)sub_18006D6B8(v9);
  v7 = v10;
  if ( v10 )
  {
    if ( v6 )
      memmove(v10, *((const void **)a2 + 1), v6);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)v6 >> 1] = 0;
LABEL_20:
    *(_WORD *)(a3 + 2) = v9;
    *(_WORD *)a3 = v6;
    *(_QWORD *)(a3 + 8) = v7;
    return 0LL;
  }
  return 3221225495LL;
}
