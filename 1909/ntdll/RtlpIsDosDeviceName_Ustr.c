/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x1800285E0
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180027B70 (RtlGetFullPathName_Ustr.c)
 *     RtlIsDosDeviceName_U @ 0x1800292C0 (RtlIsDosDeviceName_U.c)
 *     RtlSetCurrentDirectory_U @ 0x1800769C0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18002891C (RtlDetermineDosPathNameType_Ustr.c)
 *     iswdigit @ 0x180090720 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__int64 a1)
{
  int v1; // ebp
  __int16 v2; // di
  int v3; // eax
  __m128i *v4; // r11
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // dx
  wchar_t *Buffer; // rbx
  wchar_t i; // cx
  wchar_t *v10; // rax
  wchar_t v11; // cx
  wchar_t *v12; // rcx
  __int16 v13; // ax
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  int v17; // ecx
  wchar_t *v18; // rcx
  wchar_t *v19; // rdx
  wchar_t *v20; // rax
  __int64 v21; // rcx
  int v22; // esi
  __int16 v23; // di
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  _UNICODE_STRING *v27; // rdx
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = RtlDetermineDosPathNameType_Ustr(a1);
  if ( (v3 >= 6 || v3 < 2) && v3 >= 0 && (v3 == 6 || v3 <= 1) )
    return 0LL;
  v5 = _mm_cvtsi128_si32(*v4);
  String1 = (_UNICODE_STRING)*v4;
  v6 = v5;
  v7 = v5 >> 1;
  if ( !(v5 >> 1) )
    return 0LL;
  Buffer = String1.Buffer;
  if ( String1.Buffer[v7 - 1] == 58 )
  {
    v5 -= 2;
    --v7;
    v2 = 1;
  }
  if ( !v7 )
    return 0LL;
  for ( i = String1.Buffer[v7 - 1]; i == 46 || i == 32; i = String1.Buffer[v7 - 1] )
  {
    v5 -= 2;
    ++v2;
    if ( !--v7 )
      break;
  }
  if ( v7 )
  {
    v10 = &String1.Buffer[v7 - 1];
    if ( v10 >= String1.Buffer )
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( *v10 == 92 || v11 == 47 || v11 == 58 && v10 == String1.Buffer + 1 )
          break;
        if ( --v10 < String1.Buffer )
          goto LABEL_26;
      }
      v12 = v10 + 1;
      if ( v10 + 1 >= (wchar_t *)((char *)String1.Buffer + (v6 & 0xFFFE)) )
        return 0LL;
      v13 = *v12 | 0x20;
      if ( v13 != 112 && v13 != 99 && v13 != 97 && v13 != 108 && v13 != 110 )
        return 0LL;
      v1 = (_DWORD)v12 - LODWORD(String1.Buffer);
      v15 = v6 + LOWORD(String1.Buffer) - (_WORD)v12;
      String1.Buffer = v12;
      Buffer = v12;
      v7 = (v15 >> 1) - v2;
      String1.Length = v15 - 2 * v2;
    }
LABEL_26:
    v16 = *Buffer;
    LOWORD(v16) = (v16 | 0x20) - 97;
    if ( (unsigned __int16)v16 > 0xFu )
      return 0LL;
    v17 = 43013;
    if ( !_bittest(&v17, v16) )
      return 0LL;
  }
  v18 = Buffer;
  v19 = &Buffer[v7];
  if ( Buffer < v19 )
  {
    do
    {
      if ( *v18 == 46 )
        break;
      if ( *v18 == 58 )
        break;
      ++v18;
    }
    while ( v18 < v19 );
    if ( v18 > Buffer )
    {
      do
      {
        v20 = v18 - 1;
        if ( *(v18 - 1) != 32 )
          break;
        --v18;
      }
      while ( v20 > Buffer );
    }
  }
  v21 = v18 - Buffer;
  v22 = (unsigned __int16)v21;
  v23 = 2 * v21;
  String1.Length = 2 * v21;
  if ( (unsigned __int16)v21 == 5 )
    return 0LL;
  v24 = (unsigned __int16)v21 - 3;
  if ( v22 == 3 )
  {
    if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosPRNDevice, 1u)
      || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosAUXDevice, 1u)
      || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosNULDevice, 1u)
      || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosCONDevice, 1u) )
    {
      return (v1 << 16) | (unsigned int)(2 * v22);
    }
    return 0LL;
  }
  v25 = v24 - 1;
  if ( v25 )
  {
    v26 = v25 - 2;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        v27 = (_UNICODE_STRING *)&RtlpDosCONOUTDevice;
        goto LABEL_40;
      }
      return 0LL;
    }
    v27 = (_UNICODE_STRING *)&RtlpDosCONINDevice;
  }
  else
  {
    if ( !iswdigit(Buffer[3]) || Buffer[3] == 48 )
      return 0LL;
    String1.Length = v23 - 2;
    if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosLPTDevice, 1u) )
      return (v1 << 16) | (unsigned int)(2 * v22);
    v27 = (_UNICODE_STRING *)&RtlpDosCOMDevice;
  }
LABEL_40:
  if ( !RtlEqualUnicodeString(&String1, v27, 1u) )
    return 0LL;
  return (v1 << 16) | (unsigned int)(2 * v22);
}
