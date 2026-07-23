/*
 * XREFs of ViFaultsAddAllTags @ 0x140939720
 * Callers:
 *     VfFaultsSetParameters @ 0x1409394A0 (VfFaultsSetParameters.c)
 *     ViFaultsInitializeTagsList @ 0x140939B60 (ViFaultsInitializeTagsList.c)
 * Callees:
 *     ViFaultsAddTagNoDuplicates @ 0x140939910 (ViFaultsAddTagNoDuplicates.c)
 */

__int64 __fastcall ViFaultsAddAllTags(unsigned __int16 *a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned __int16 v5; // dx
  unsigned __int16 *i; // rbx
  unsigned __int16 v7; // dx
  int v8; // eax

  v2 = 0LL;
  v3 = (unsigned __int64)&a1[a2];
  if ( (unsigned __int64)a1 < v3 )
  {
    v4 = 0x100002601LL;
    do
    {
      v5 = *a1;
      if ( *a1 <= 0x20u && _bittest64(&v4, v5) || v5 == 12288 )
      {
        i = a1;
      }
      else
      {
        for ( i = a1; (unsigned __int64)i < v3; ++i )
        {
          v7 = *i;
          if ( *i <= 0x20u && _bittest64(&v4, v7) )
            break;
          if ( v7 == 12288 )
            break;
        }
        v8 = ViFaultsAddTagNoDuplicates(a1, i - a1, v2);
        v2 = (unsigned int)v8;
        if ( v8 < 0 )
          return (unsigned int)v2;
      }
      a1 = i + 1;
    }
    while ( (unsigned __int64)(i + 1) < v3 );
  }
  return (unsigned int)v2;
}
