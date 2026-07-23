/*
 * XREFs of _splitpath_s @ 0x18009A910
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     strncpy_s @ 0x18009B4F0 (strncpy_s.c)
 */

errno_t __cdecl splitpath_s(
        const char *FullPath,
        char *Drive,
        size_t DriveCount,
        char *Dir,
        size_t DirCount,
        char *Filename,
        size_t FilenameCount,
        char *Ext,
        size_t ExtCount)
{
  const char *v9; // rdi
  size_t v11; // rsi
  int v13; // r9d
  __int64 v14; // rax
  const char *v15; // rbx
  char v16; // al
  const char *v17; // rbp
  const char *v18; // rsi
  const char *v19; // rbx
  size_t v20; // rbx
  size_t v21; // rbx

  v9 = FullPath;
  v11 = DriveCount;
  v13 = 0;
  if ( !FullPath )
    goto LABEL_4;
  if ( Drive )
  {
    if ( !DriveCount )
      goto LABEL_4;
  }
  else if ( DriveCount )
  {
LABEL_4:
    v13 = 1;
    goto LABEL_57;
  }
  if ( Dir )
  {
    if ( !DirCount )
      goto LABEL_4;
  }
  else if ( DirCount )
  {
    goto LABEL_4;
  }
  if ( Filename )
  {
    if ( !FilenameCount )
      goto LABEL_4;
  }
  else if ( FilenameCount )
  {
    goto LABEL_4;
  }
  if ( Ext )
  {
    if ( !ExtCount )
      goto LABEL_4;
  }
  else if ( ExtCount )
  {
    goto LABEL_4;
  }
  v14 = 1LL;
  v15 = FullPath;
  do
  {
    if ( !*v15 )
      break;
    ++v15;
    --v14;
  }
  while ( v14 );
  if ( *v15 == 58 )
  {
    if ( Drive )
    {
      if ( DriveCount < 3 )
        goto LABEL_57;
      strncpy_s(Drive, DriveCount, FullPath, 2uLL);
    }
    v9 = v15 + 1;
  }
  else if ( Drive )
  {
    *Drive = 0;
  }
  v16 = *v9;
  v17 = 0LL;
  v18 = 0LL;
  v19 = v9;
  if ( !*v9 )
    goto LABEL_40;
  do
  {
    if ( v16 == 47 || v16 == 92 )
    {
      v17 = v19 + 1;
    }
    else if ( v16 == 46 )
    {
      v18 = v19;
    }
    v16 = *++v19;
  }
  while ( *v19 );
  if ( v17 )
  {
    if ( Dir )
    {
      if ( DirCount <= v17 - v9 )
        goto LABEL_56;
      strncpy_s(Dir, DirCount, v9, v17 - v9);
    }
    v9 = v17;
  }
  else
  {
LABEL_40:
    if ( Dir )
      *Dir = 0;
  }
  if ( !v18 || v18 < v9 )
  {
    if ( Filename )
    {
      v21 = v19 - v9;
      if ( FilenameCount <= v21 )
        goto LABEL_56;
      strncpy_s(Filename, FilenameCount, v9, v21);
    }
    if ( Ext )
      *Ext = 0;
    return 0;
  }
  if ( !Filename )
  {
LABEL_47:
    if ( !Ext )
      return 0;
    v20 = v19 - v18;
    if ( ExtCount > v20 )
    {
      strncpy_s(Ext, ExtCount, v18, v20);
      return 0;
    }
    goto LABEL_56;
  }
  if ( FilenameCount > v18 - v9 )
  {
    strncpy_s(Filename, FilenameCount, v9, v18 - v9);
    goto LABEL_47;
  }
LABEL_56:
  v13 = 0;
  v11 = DriveCount;
LABEL_57:
  if ( Drive && v11 )
    *Drive = 0;
  if ( Dir && DirCount )
    *Dir = 0;
  if ( Filename && FilenameCount )
    *Filename = 0;
  if ( Ext && ExtCount )
    *Ext = 0;
  if ( v9 && !v13 )
    return 34;
  invalid_parameter();
  return 22;
}
