/*
 * XREFs of sub_18011646C @ 0x18011646C
 * Callers:
 *     sub_180116CF8 @ 0x180116CF8 (sub_180116CF8.c)
 * Callees:
 *     sub_180117C3C @ 0x180117C3C (sub_180117C3C.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011646C(int a1, int a2, int a3, int a4, _QWORD *a5, __int64 a6, __int64 a7)
{
  int v8; // r13d
  int v9; // r11d
  int v10; // r10d
  unsigned int v11; // ebx
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned int v14; // r12d
  char v15; // cl

  v8 = 3;
  v9 = a1;
  v10 = a3;
  if ( a4 == 1 )
    v8 = 1;
  v11 = 0;
  result = 0LL;
  v13 = 0;
  if ( a4 == 1 )
    result = 2LL;
  v14 = a2 - result;
  if ( a2 != (_DWORD)result )
  {
    do
    {
      if ( *a5 && v13 == 100 * (v13 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a5 + 40LL))(*a5);
        v10 = a3;
        v9 = a1;
      }
      v15 = a4 == 1 && (v11 & 1) != 0;
      result = sub_180117C3C(v9, v10, v11, v11 + 1, v11 + 2, v15, a6, a7);
      v10 = a3;
      v9 = a1;
      ++v13;
      v11 += v8;
    }
    while ( v11 < v14 );
  }
  return result;
}
