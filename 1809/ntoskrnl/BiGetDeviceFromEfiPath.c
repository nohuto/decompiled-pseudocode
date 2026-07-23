/*
 * XREFs of BiGetDeviceFromEfiPath @ 0x1408F4DBC
 * Callers:
 *     BiCreateMergedBootEntry @ 0x1408F4238 (BiCreateMergedBootEntry.c)
 *     BiUpdateBcdObject @ 0x1408F5BA8 (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiTranslateFilePath @ 0x1408F5A48 (BiTranslateFilePath.c)
 */

__int64 __fastcall BiGetDeviceFromEfiPath(char *Src, _QWORD *a2, unsigned int *a3)
{
  int v5; // ebx
  char *i; // rbx
  unsigned int v7; // ebx
  _FILE_PATH *PoolWithTag; // rax
  _FILE_PATH *v9; // rsi
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  _DWORD *v12; // rax
  _DWORD *v13; // r14

  if ( (*Src & 0x7F) == 0x7F )
  {
    return (unsigned int)-1073741766;
  }
  else
  {
    for ( i = &Src[*((unsigned __int16 *)Src + 1)];
          (*i & 0x7F) != 0x7F && (*i != 4 || i[1] != 4);
          i += *((unsigned __int16 *)i + 1) )
    {
      ;
    }
    v7 = (_DWORD)i - (_DWORD)Src;
    PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v7 + 16, 0x4B444342u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->Version = 1;
      PoolWithTag->Length = v7 + 16;
      PoolWithTag->Type = 4;
      memmove(PoolWithTag->FilePath, Src, v7);
      v9->FilePath[v7] = 127;
      *(_WORD *)&v9->FilePath[v7 + 1] = 1279;
      v9->FilePath[v7 + 3] = 0;
      v5 = BiTranslateFilePath(v9, 3u);
      if ( v5 >= 0 )
      {
        v10 = MEMORY[4] - 12;
        v11 = MEMORY[4] - 12 + 20;
        v12 = ExAllocatePoolWithTag(PagedPool, v11, 0x4B444342u);
        v13 = v12;
        if ( v12 )
        {
          memset(v12, 0, v10 + 20);
          *v13 = 2;
          memmove(v13 + 5, (const void *)0xC, v10);
          *a3 = v11;
          *a2 = v13;
        }
        else
        {
          v5 = -1073741670;
        }
      }
      ExFreePoolWithTag(v9, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
