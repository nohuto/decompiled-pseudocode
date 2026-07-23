/*
 * XREFs of wcstok_s @ 0x18009BB90
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *String, const wchar_t *Delimiter, wchar_t **Context)
{
  wchar_t v4; // ax
  wchar_t v5; // r11
  const wchar_t *v6; // rbx
  wchar_t v7; // dx
  wchar_t v8; // r10
  wchar_t *result; // rax
  const wchar_t *v10; // rbx
  wchar_t v11; // dx
  wchar_t v12; // r10
  wchar_t *v13; // r10

  if ( !Context || !Delimiter )
    goto LABEL_26;
  if ( !String )
  {
    if ( *Context )
    {
      String = *Context;
      goto LABEL_6;
    }
LABEL_26:
    invalid_parameter();
    return 0LL;
  }
LABEL_6:
  v4 = *String;
  if ( *String )
  {
    v5 = *Delimiter;
    do
    {
      v6 = Delimiter;
      v7 = v5;
      if ( v5 )
      {
        v8 = v5;
        do
        {
          v7 = v8;
          if ( v8 == v4 )
            break;
          v7 = *++v6;
          v8 = *v6;
        }
        while ( *v6 );
      }
      if ( !v7 )
        break;
      v4 = *++String;
    }
    while ( *String );
  }
  result = String;
  if ( *String )
  {
    while ( 1 )
    {
      v10 = Delimiter;
      v11 = *Delimiter;
      if ( *Delimiter )
      {
        v12 = *Delimiter;
        do
        {
          v11 = v12;
          if ( v12 == *String )
            break;
          v11 = *++v10;
          v12 = *v10;
        }
        while ( *v10 );
      }
      v13 = String + 1;
      if ( v11 )
        break;
      ++String;
      if ( !*v13 )
        goto LABEL_23;
    }
    *String++ = 0;
  }
LABEL_23:
  *Context = String;
  if ( result == String )
    return 0LL;
  return result;
}
