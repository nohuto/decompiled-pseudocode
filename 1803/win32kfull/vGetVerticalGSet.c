/*
 * XREFs of vGetVerticalGSet @ 0x1C021D258
 * Callers:
 *     bLoadTTF @ 0x1C021995C (bLoadTTF.c)
 *     bReloadGlyphSet @ 0x1C021A0A4 (bReloadGlyphSet.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall vGetVerticalGSet(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 *v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rsi
  _DWORD *v9; // rsi
  __int64 v10; // r14

  result = *(_QWORD *)(a2 + 96);
  v5 = (unsigned __int16 *)(result + 16);
  v6 = result + 16 * (*(unsigned int *)(result + 12) + 1LL);
  while ( (unsigned __int64)v5 < v6 )
  {
    v7 = *v5;
    result = v5[1];
    v8 = *((_QWORD *)v5 + 1);
    if ( v8 )
    {
      v9 = (_DWORD *)(*(_QWORD *)(a2 + 96) + v8 - a1);
      *((_QWORD *)v5 + 1) = v9;
      if ( v7 <= (unsigned int)result + v7 - 1 )
      {
        v10 = (unsigned int)result;
        do
        {
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 8))(a2, (unsigned int)*v9);
          *v9++ = result;
          --v10;
        }
        while ( v10 );
      }
    }
    v5 += 8;
  }
  return result;
}
