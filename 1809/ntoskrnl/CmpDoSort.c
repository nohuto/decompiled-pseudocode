/*
 * XREFs of CmpDoSort @ 0x1409CE210
 * Callers:
 *     CmpSortDriverList @ 0x1409CE05C (CmpSortDriverList.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     CmpSortByTag @ 0x1409CE350 (CmpSortByTag.c)
 */

char __fastcall CmpDoSort(_QWORD *a1)
{
  unsigned __int16 *v2; // r11
  wchar_t *v3; // r15
  wchar_t *v4; // rbp
  _QWORD *v5; // r12
  wchar_t *i; // rbx
  wchar_t *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r13
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp+18h]

  if ( !(unsigned __int8)CmpSortByTag() )
    return 0;
  v3 = (wchar_t *)*((_QWORD *)v2 + 1);
  v4 = 0LL;
  v5 = a1;
  for ( i = &v3[((unsigned __int64)*v2 >> 1) - 1]; i > v3; --i )
  {
    do
    {
      v7 = i;
      if ( *i )
        v7 = v4;
      --i;
      v4 = v7;
    }
    while ( i != v3 && *(i - 1) );
    v8 = (_QWORD *)a1[1];
    String1.Length = (_WORD)v7 - (_WORD)i;
    String1.MaximumLength = (_WORD)v7 - (_WORD)i;
    String1.Buffer = i;
    while ( v8 != v5 )
    {
      v11 = v8;
      if ( v8 == a1 )
        break;
      v12 = v8;
      v13 = v8 + 1;
      v8 = (_QWORD *)v8[1];
      v16 = v13;
      if ( v12[14] && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v12 + 13), 1u) )
      {
        v9 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12
          || (_QWORD *)*v8 != v12
          || (*v8 = v9, *(_QWORD *)(v9 + 8) = v8, v10 = *a1, *(_QWORD **)(*a1 + 8LL) != a1) )
        {
          __fastfail(3u);
        }
        *v12 = v10;
        if ( v5 != a1 )
          v11 = v5;
        v5 = v11;
        *v16 = a1;
        *(_QWORD *)(v10 + 8) = v12;
        *a1 = v12;
      }
    }
  }
  return 1;
}
