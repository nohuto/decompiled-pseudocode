/*
 * XREFs of wcstok_s @ 0x14019C0A8
 * Callers:
 *     GetOperatorIndexByName @ 0x1408A90BC (GetOperatorIndexByName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *Str, const wchar_t *Delim, wchar_t **Context)
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

  if ( !Context || !Delim )
    goto LABEL_26;
  if ( !Str )
  {
    if ( *Context )
    {
      Str = *Context;
      goto LABEL_6;
    }
LABEL_26:
    xHalTimerWatchdogStop();
    return 0LL;
  }
LABEL_6:
  v4 = *Str;
  if ( *Str )
  {
    v5 = *Delim;
    do
    {
      v6 = Delim;
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
      v4 = *++Str;
    }
    while ( *Str );
  }
  result = Str;
  if ( *Str )
  {
    while ( 1 )
    {
      v10 = Delim;
      v11 = *Delim;
      if ( *Delim )
      {
        v12 = *Delim;
        do
        {
          v11 = v12;
          if ( v12 == *Str )
            break;
          v11 = *++v10;
          v12 = *v10;
        }
        while ( *v10 );
      }
      v13 = Str + 1;
      if ( v11 )
        break;
      ++Str;
      if ( !*v13 )
        goto LABEL_23;
    }
    *Str++ = 0;
  }
LABEL_23:
  *Context = Str;
  if ( result == Str )
    return 0LL;
  return result;
}
