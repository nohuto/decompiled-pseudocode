/*
 * XREFs of CmpDoSort @ 0x140A12524
 * Callers:
 *     CmpSortDriverList @ 0x140A12368 (CmpSortDriverList.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     CmpSortByTag @ 0x140A12670 (CmpSortByTag.c)
 */

char __fastcall CmpDoSort(_QWORD *a1, __int64 a2)
{
  unsigned __int16 *v3; // r11
  wchar_t *v4; // r15
  wchar_t *v5; // rbp
  _QWORD *v6; // r12
  wchar_t *i; // rbx
  wchar_t *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r13
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v17; // [rsp+70h] [rbp+18h]

  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  if ( !(unsigned __int8)CmpSortByTag(a1, a2) )
    return 0;
  v4 = (wchar_t *)*((_QWORD *)v3 + 1);
  v5 = 0LL;
  v6 = a1;
  for ( i = &v4[((unsigned __int64)*v3 >> 1) - 1]; i > v4; --i )
  {
    do
    {
      v8 = i;
      if ( *i )
        v8 = v5;
      --i;
      v5 = v8;
    }
    while ( i != v4 && *(i - 1) );
    v9 = (_QWORD *)a1[1];
    String1.Length = (_WORD)v8 - (_WORD)i;
    String1.MaximumLength = (_WORD)v8 - (_WORD)i;
    String1.Buffer = i;
    while ( v9 != v6 )
    {
      v12 = v9;
      if ( v9 == a1 )
        break;
      v13 = v9;
      v14 = v9 + 1;
      v9 = (_QWORD *)v9[1];
      v17 = v14;
      if ( v13[14] && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v13 + 13), 1u) )
      {
        v10 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13
          || (_QWORD *)*v9 != v13
          || (*v9 = v10, *(_QWORD *)(v10 + 8) = v9, v11 = *a1, *(_QWORD **)(*a1 + 8LL) != a1) )
        {
          __fastfail(3u);
        }
        *v13 = v11;
        if ( v6 != a1 )
          v12 = v6;
        v6 = v12;
        *v17 = a1;
        *(_QWORD *)(v11 + 8) = v13;
        *a1 = v13;
      }
    }
  }
  return 1;
}
