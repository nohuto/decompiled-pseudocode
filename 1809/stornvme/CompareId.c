/*
 * XREFs of CompareId @ 0x1C00056C0
 * Callers:
 *     IoctlToNVMe @ 0x1C0002698 (IoctlToNVMe.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0019168 (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     StringToULONG @ 0x1C00192D0 (StringToULONG.c)
 */

bool __fastcall CompareId(__int64 a1, unsigned int a2, char *a3, unsigned int a4, __int64 a5)
{
  char *v7; // rcx
  unsigned int v8; // eax
  char *v9; // rdx
  unsigned int v10; // eax
  char *v11; // rdx
  int v12; // r10d
  char v13; // bl
  __int64 v14; // rdi
  char v15; // dl
  char v16; // r11
  unsigned int v18; // eax
  char *v19; // rcx

  v7 = a3;
  if ( !a1 || !a3 )
    return 1;
  while ( 1 )
  {
    if ( !*a3 )
    {
      v13 = 0;
      if ( !a3[1] )
        break;
    }
    v8 = 0;
    if ( !a4 )
      goto LABEL_9;
    v9 = a3;
    do
    {
      if ( !*v9 )
        break;
      ++v8;
      ++v9;
    }
    while ( v8 < a4 );
    if ( v8 >= a4 )
LABEL_9:
      v8 = a4;
    if ( a2 < v8 )
    {
      v10 = a2;
    }
    else
    {
      v10 = 0;
      if ( !a4 )
        goto LABEL_16;
      v11 = a3;
      do
      {
        if ( !*v11 )
          break;
        ++v10;
        ++v11;
      }
      while ( v10 < a4 );
      if ( v10 >= a4 )
LABEL_16:
        v10 = a4;
    }
    if ( !v10 )
      return 0;
    v12 = 0;
    v13 = 1;
    v14 = a1 - (_QWORD)v7;
    while ( 1 )
    {
      v15 = *v7;
      if ( *v7 == 42 )
      {
        ++v7;
        goto LABEL_26;
      }
      v16 = v7[v14];
      if ( !v16 || !v15 || v16 != v15 && v15 != 63 )
        break;
      ++v7;
      if ( ++v12 >= v10 )
        goto LABEL_26;
    }
    v18 = 0;
    if ( !a4 )
      goto LABEL_34;
    v19 = a3;
    do
    {
      if ( !*v19 )
        break;
      ++v18;
      ++v19;
    }
    while ( v18 < a4 );
    if ( v18 >= a4 )
LABEL_34:
      v18 = a4;
    a3 += v18 + 1;
    v7 = a3;
  }
LABEL_26:
  if ( a5 && v13 == 1 && *v7 == 32 )
    return (unsigned __int8)StringToULONG(v7 + 1) != 0;
  return v13;
}
