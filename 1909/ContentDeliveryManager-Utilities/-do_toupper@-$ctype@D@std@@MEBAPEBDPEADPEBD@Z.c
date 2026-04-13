/*
 * XREFs of ?do_toupper@?$ctype@D@std@@MEBAPEBDPEADPEBD@Z @ 0x1800B5380
 * Callers:
 *     <none>
 * Callees:
 *     _Toupper @ 0x1800B8128 (_Toupper.c)
 */

_BYTE *__fastcall std::ctype<char>::do_toupper(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  _BYTE *v5; // rbx
  const _Ctypevec *v6; // rbp

  v3 = 0LL;
  v4 = a3 - (_QWORD)a2;
  v5 = a2;
  if ( (unsigned __int64)a2 > a3 )
    v4 = 0LL;
  if ( v4 )
  {
    v6 = (const _Ctypevec *)(a1 + 16);
    do
    {
      *v5 = Toupper((unsigned __int8)*v5, v6);
      ++v3;
      ++v5;
    }
    while ( v3 != v4 );
  }
  return v5;
}
