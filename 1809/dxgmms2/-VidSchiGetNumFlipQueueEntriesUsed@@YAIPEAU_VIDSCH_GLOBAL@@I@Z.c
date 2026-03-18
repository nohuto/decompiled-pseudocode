/*
 * XREFs of ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003A3E0
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00CAA90 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetNumFlipQueueEntriesUsed(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // r8
  unsigned int v5; // eax
  _QWORD *v6; // rcx
  __int64 v7; // r8
  unsigned int *v8; // r9
  __int64 v9; // r11
  int v10; // r10d
  bool v11; // r10
  unsigned int v12; // eax

  v2 = a2;
  v3 = 0;
  v4 = *((_QWORD *)a1 + v2 + 322);
  v5 = *((_DWORD *)a1 + 35);
  if ( v5 )
  {
    v6 = (_QWORD *)(v4 + 24);
    v7 = v5;
    do
    {
      if ( *v6 )
      {
        v8 = (unsigned int *)(*v6 + 1108LL);
        v9 = 64LL;
        do
        {
          v11 = 0;
          if ( *v8 <= 0xC )
          {
            v10 = 4673;
            if ( _bittest(&v10, *v8) )
              v11 = 1;
          }
          v12 = v3 + 1;
          if ( v11 )
            v12 = v3;
          v8 += 324;
          v3 = v12;
          --v9;
        }
        while ( v9 );
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return v3;
}
