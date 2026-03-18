/*
 * XREFs of mth_MxConcat2x2 @ 0x1C02B38AC
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int64 __fastcall mth_MxConcat2x2(int *a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v7; // rsi
  int v8; // r15d
  int fixed; // eax
  __int64 v10; // r11
  int v11; // r10d
  _DWORD *v12; // rcx
  char *v13; // rbx
  __int16 i; // dx
  __int64 result; // rax
  char v16; // [rsp+20h] [rbp-48h] BYREF

  v3 = &v16;
  v5 = 2LL;
  do
  {
    v6 = a1[1];
    v7 = 0LL;
    v8 = *a1;
    do
    {
      FixMul(v6, *(_DWORD *)(a2 + 4 * v7 + 12));
      fixed = FixMul(v8, *(_DWORD *)(a2 + 4 * v7++));
      *(_DWORD *)v3 = fixed + v11;
      v3 += 4;
    }
    while ( v7 < 3 );
    a1 = (int *)(v10 + 12);
    --v5;
  }
  while ( v5 );
  v12 = (_DWORD *)(a2 + 24);
  v13 = &v3[-a2 - 24];
  for ( i = 5; i >= 0; --i )
  {
    result = *(unsigned int *)((char *)--v12 + (_QWORD)v13);
    *v12 = result;
  }
  return result;
}
