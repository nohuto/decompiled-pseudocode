/*
 * XREFs of KiBugCheckConvertProgressValueToUnicodeString @ 0x1402A8CF4
 * Callers:
 *     KiBugCheckProgress @ 0x1402A8E70 (KiBugCheckProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiBugCheckConvertProgressValueToUnicodeString(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rdi
  _WORD *v6; // r11
  __int64 result; // rax
  __int64 v8; // rcx
  _WORD *v9; // rdi

  v2 = *(_QWORD *)(a2 + 8);
  v3 = a1;
  v4 = (*(unsigned __int16 *)(a2 + 2) >> 1) - 1;
  if ( a1 > 0x64 )
  {
    if ( *(unsigned __int16 *)(a2 + 2) >> 1 != 1 )
    {
      v8 = (unsigned int)v4;
      result = 45LL;
      v9 = *(_WORD **)(a2 + 8);
      while ( v8 )
      {
        *v9++ = 45;
        --v8;
      }
    }
  }
  else
  {
    LODWORD(v5) = (*(unsigned __int16 *)(a2 + 2) >> 1) - 1;
    do
    {
      v5 = (unsigned int)(v5 - 1);
      v6 = (_WORD *)(v2 + 2 * v5);
      result = (unsigned __int16)(4 * (v3 / 0xA));
      *v6 = v3 % 0xA + 48;
      v3 /= 0xAu;
    }
    while ( v3 && (_DWORD)v5 );
    for ( ; (_DWORD)v5; LODWORD(v5) = v5 - 1 )
    {
      --v6;
      result = 32LL;
      *v6 = 32;
    }
  }
  *(_WORD *)(v2 + 2 * v4) = 0;
  return result;
}
