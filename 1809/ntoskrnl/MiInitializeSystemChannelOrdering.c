/*
 * XREFs of MiInitializeSystemChannelOrdering @ 0x1409F8AD0
 * Callers:
 *     MiInitializeNuma @ 0x14072C368 (MiInitializeNuma.c)
 * Callees:
 *     MiPageToChannel @ 0x14009CF2C (MiPageToChannel.c)
 */

void __fastcall MiInitializeSystemChannelOrdering(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r10
  unsigned __int64 *v4; // rcx
  unsigned int v5; // eax
  __int64 i; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  _BYTE *v11; // r9
  unsigned int v12; // r8d
  _BYTE *v13; // r9
  unsigned int v14; // r8d
  _BYTE *v15; // r9

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 16) + 1984LL * a2;
  v4 = (unsigned __int64 *)MxFreeDescriptor[a2];
  if ( v4[1] )
  {
    v5 = MiPageToChannel(*v4);
    *(_BYTE *)(v5 + v3 + 1922) = 2;
  }
  for ( i = qword_14043B128; *(_QWORD *)i != -1LL; i += 16LL )
  {
    if ( *(unsigned __int16 *)(i + 10) == v2 )
    {
      v7 = *(unsigned __int16 *)(i + 12);
      if ( *(_BYTE *)(i + 14) )
      {
        if ( *(_BYTE *)(v7 + v3 + 1922) != 2 )
          *(_BYTE *)(v7 + v3 + 1922) = 1;
      }
      else
      {
        *(_BYTE *)(v7 + v3 + 1922) = 2;
      }
    }
  }
  v8 = MmNumberOfChannels;
  v9 = 0LL;
  v10 = 0;
  if ( MmNumberOfChannels )
  {
    v11 = (_BYTE *)(v3 + 1922);
    do
    {
      if ( *v11 == 2 )
      {
        *(_BYTE *)(v9 + v3 + 1914) = v10;
        *(_BYTE *)(v9 + v3 + 1918) = v10;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v10;
      ++v11;
    }
    while ( v10 < v8 );
  }
  v12 = 0;
  if ( v8 )
  {
    v13 = (_BYTE *)(v3 + 1922);
    do
    {
      if ( *v13 == 1 )
      {
        *(_BYTE *)(v9 + v3 + 1914) = v12;
        *(_BYTE *)(v9 + v3 + 1918) = v12;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < v8 );
  }
  v14 = 0;
  if ( v8 )
  {
    v15 = (_BYTE *)(v3 + 1922);
    do
    {
      if ( !*v15 )
      {
        *(_BYTE *)(v9 + v3 + 1914) = v14;
        *(_BYTE *)(v9 + v3 + 1918) = v14;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v14;
      ++v15;
    }
    while ( v14 < v8 );
  }
}
