/*
 * XREFs of sub_180020D2C @ 0x180020D2C
 * Callers:
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 * Callees:
 *     sub_1800709A4 @ 0x1800709A4 (sub_1800709A4.c)
 */

__int64 __fastcall sub_180020D2C(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _DWORD *v4; // rdx
  __int64 v5; // rcx

  result = *(_QWORD *)(a1 + 152);
  v2 = *(_QWORD **)(result + 48);
  if ( v2 )
  {
    v3 = *(_QWORD **)(result + 48);
    do
    {
      v3 = (_QWORD *)*v3;
      v4 = (_DWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF8uLL);
      result = *(_QWORD *)v4;
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 100))-- == 1 )
        {
          v4[14] = 4;
          result = sub_1800709A4();
        }
      }
    }
    while ( v3 != v2 );
  }
  return result;
}
