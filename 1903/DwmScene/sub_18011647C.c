/*
 * XREFs of sub_18011647C @ 0x18011647C
 * Callers:
 *     sub_18011735C @ 0x18011735C (sub_18011735C.c)
 * Callees:
 *     sub_1801165C0 @ 0x1801165C0 (sub_1801165C0.c)
 *     sub_180117B2C @ 0x180117B2C (sub_180117B2C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011647C(int a1, int a2, int a3, int a4, _QWORD *a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; // r10d
  int v10; // r11d
  int v11; // r13d
  __int64 result; // rax
  unsigned int v13; // ebp
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  char v16; // si

  v8 = a1;
  v10 = a3;
  v11 = 3;
  if ( a4 == 1 )
    v11 = 1;
  result = 0LL;
  v13 = 0;
  v14 = 0;
  if ( a4 == 1 )
    result = 2LL;
  v15 = a2 - result;
  if ( a2 != (_DWORD)result )
  {
    do
    {
      if ( *a5 && v14 == 100 * (v14 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a5 + 40LL))(*a5);
        v8 = a1;
        v10 = a3;
      }
      v16 = a4 == 1 && (v13 & 1) != 0;
      sub_180117B2C(v8, v10, v13, v13 + 1, v13 + 2, v16, a7, a8);
      result = sub_1801165C0(a1, v13, v13 + 1, v13 + 2, v16, a6);
      v8 = a1;
      v10 = a3;
      ++v14;
      v13 += v11;
    }
    while ( v13 < v15 );
  }
  return result;
}
