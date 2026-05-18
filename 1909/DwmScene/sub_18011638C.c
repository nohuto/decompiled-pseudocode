/*
 * XREFs of sub_18011638C @ 0x18011638C
 * Callers:
 *     sub_1801167D4 @ 0x1801167D4 (sub_1801167D4.c)
 * Callees:
 *     sub_1801166D0 @ 0x1801166D0 (sub_1801166D0.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011638C(int a1, int a2, int a3, _QWORD *a4, __int64 a5)
{
  int v5; // r15d
  unsigned int v9; // ebx
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // r14d
  char v13; // al

  v5 = 3;
  if ( a3 == 1 )
    v5 = 1;
  v9 = 0;
  result = 0LL;
  v11 = 0;
  if ( a3 == 1 )
    result = 2LL;
  v12 = a2 - result;
  if ( a2 != (_DWORD)result )
  {
    do
    {
      if ( *a4 && v11 == 100 * (v11 / 0x64) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 40LL))(*a4);
      v13 = a3 == 1 && (v9 & 1) != 0;
      result = sub_1801166D0(a1, v9, v9 + 1, v9 + 2, v13, a5);
      v9 += v5;
      ++v11;
    }
    while ( v9 < v12 );
  }
  return result;
}
