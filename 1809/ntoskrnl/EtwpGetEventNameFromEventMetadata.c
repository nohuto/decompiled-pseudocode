/*
 * XREFs of EtwpGetEventNameFromEventMetadata @ 0x140314B38
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x1403143B8 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     strnlen @ 0x1401974E0 (strnlen.c)
 */

const char *__fastcall EtwpGetEventNameFromEventMetadata(__int64 a1, unsigned int a2, _WORD *a3)
{
  const char *v4; // rbx
  const char *v5; // rdi
  __int16 v6; // ax
  unsigned __int16 v7; // di

  if ( a2 >= 3 )
  {
    v4 = (const char *)(a1 + 2);
    v5 = (const char *)(a1 + a2);
    v6 = 0;
    while ( v4 != v5 )
    {
      if ( *v4++ >= 0 )
      {
        if ( v4 != v5 )
        {
          v7 = (_WORD)v5 - (_WORD)v4;
          if ( v4 )
            v6 = strnlen(v4, v7);
          *a3 = v6;
          if ( v6 != v7 )
            return v4;
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
