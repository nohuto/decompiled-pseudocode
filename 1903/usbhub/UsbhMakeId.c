/*
 * XREFs of UsbhMakeId @ 0x1C0025250
 * Callers:
 *     UsbhBuildUnknownIds @ 0x1C0058BF0 (UsbhBuildUnknownIds.c)
 * Callees:
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

char *__fastcall UsbhMakeId(
        int a1,
        _WORD *a2,
        void *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int16 a6,
        unsigned __int16 a7,
        _BYTE *a8)
{
  __int64 v9; // r8
  __int64 v11; // rbx
  size_t v14; // rbx
  SIZE_T v15; // r15
  char *PoolWithTag; // rax
  char *v17; // r14
  __int64 v18; // rdi
  char *v19; // rdi
  bool v20; // zf
  int v22; // r13d
  _BYTE *v23; // rdx
  unsigned int i; // ecx

  v9 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( a2[v11] );
  v14 = 2 * v11;
  v15 = v14 + *(unsigned __int16 *)a4 + 2LL * a5;
  if ( a1 == 2 && a8 )
  {
    do
      v20 = a8[++v9] == 0;
    while ( !v20 );
    v15 = v15 + 2 * v9 - 2;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v15, 0x42554855u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v15);
    v18 = (unsigned int)*a4;
    memmove(v17, a3, (unsigned int)v18);
    v19 = &v17[v18];
    memmove(v19, a2, v14);
    v20 = *(_WORD *)v19 == 110;
    *a4 = v15;
    if ( !v20 )
    {
      do
      {
        if ( !a6 )
          break;
        v19 += 2;
      }
      while ( *(_WORD *)v19 != 110 );
    }
    if ( a1 )
    {
      v22 = a1 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v23 = a8;
          if ( a8 )
          {
            for ( i = 0; i < 8; ++i )
            {
              if ( !*v23 )
                break;
              *(_WORD *)v19 = (unsigned __int8)*v23++;
              v19 += 2;
            }
          }
        }
      }
      else if ( a6 == 2 )
      {
        *(_WORD *)v19 = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v19 + 1) = (a7 & 0xF) + 48;
      }
      else if ( a6 == 4 )
      {
        *(_WORD *)v19 = (a7 >> 12) + 48;
        *((_WORD *)v19 + 1) = (HIBYTE(a7) & 0xF) + 48;
        *((_WORD *)v19 + 2) = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v19 + 3) = (a7 & 0xF) + 48;
      }
    }
    else if ( a6 == 2 )
    {
      *(_WORD *)v19 = (unsigned __int8)Nibble[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v19 + 1) = (unsigned __int8)Nibble[a7 & 0xF];
    }
    else if ( a6 == 4 )
    {
      *(_WORD *)v19 = (unsigned __int8)Nibble[(unsigned __int64)a7 >> 12];
      *((_WORD *)v19 + 1) = (unsigned __int8)Nibble[HIBYTE(a7) & 0xF];
      *((_WORD *)v19 + 2) = (unsigned __int8)Nibble[(unsigned __int8)a7 >> 4];
      *((_WORD *)v19 + 3) = (unsigned __int8)Nibble[a7 & 0xF];
    }
  }
  else
  {
    *a4 = 0;
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
  return v17;
}
