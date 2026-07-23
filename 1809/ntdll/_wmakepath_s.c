/*
 * XREFs of _wmakepath_s @ 0x18009ACA0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 */

errno_t __cdecl wmakepath_s(
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Drive,
        const wchar_t *Dir,
        const wchar_t *Filename,
        const wchar_t *Ext)
{
  __int64 v7; // r11
  wchar_t *v8; // r10
  wchar_t v9; // ax
  __int16 v10; // ax
  const wchar_t *v11; // rcx
  const wchar_t *v12; // rcx
  wchar_t v13; // r8
  wchar_t v14; // ax
  errno_t v15; // ebx

  if ( !Buffer || !BufferCount )
  {
    v15 = 22;
    goto LABEL_32;
  }
  v7 = 0LL;
  v8 = Buffer;
  if ( Drive && *Drive )
  {
    v7 = 2LL;
    if ( BufferCount <= 2 )
      goto LABEL_29;
    *Buffer = *Drive;
    Buffer[1] = 58;
    v8 = Buffer + 2;
  }
  if ( Dir && *Dir )
  {
    while ( ++v7 < BufferCount )
    {
      v9 = *Dir++;
      *v8++ = v9;
      if ( !*Dir )
      {
        v10 = *(Dir - 1);
        if ( v10 != 47 && v10 != 92 )
        {
          if ( ++v7 >= BufferCount )
            goto LABEL_29;
          *v8++ = 92;
        }
        goto LABEL_15;
      }
    }
    goto LABEL_29;
  }
LABEL_15:
  v11 = Filename;
  if ( Filename )
  {
    while ( *v11 )
    {
      if ( ++v7 >= BufferCount )
        goto LABEL_29;
      *v8++ = *v11++;
    }
  }
  v12 = Ext;
  if ( !Ext )
    goto LABEL_28;
  v13 = *Ext;
  if ( !*Ext || *Ext == 46 )
  {
LABEL_25:
    if ( v13 )
    {
      while ( ++v7 < BufferCount )
      {
        v14 = *v12++;
        *v8++ = v14;
        if ( !*v12 )
          goto LABEL_28;
      }
      goto LABEL_29;
    }
LABEL_28:
    if ( v7 + 1 <= BufferCount )
    {
      *v8 = 0;
      return 0;
    }
    goto LABEL_29;
  }
  if ( ++v7 < BufferCount )
  {
    *v8++ = 46;
    v13 = *Ext;
    goto LABEL_25;
  }
LABEL_29:
  *Buffer = 0;
  v15 = 34;
LABEL_32:
  invalid_parameter();
  return v15;
}
