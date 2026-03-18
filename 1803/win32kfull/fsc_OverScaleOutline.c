/*
 * XREFs of fsc_OverScaleOutline @ 0x1C02B7388
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02B0CCC (fs_FindBitMapSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_OverScaleOutline(__int64 a1, unsigned __int16 a2)
{
  int v2; // edi
  int v4; // edx
  int v5; // edx
  __int16 v6; // r8
  int v7; // edx
  unsigned __int16 i; // bx
  __int64 v9; // r11
  __int16 v10; // dx
  _DWORD *v11; // r9
  _DWORD *v12; // r10
  __int64 v13; // rax
  __int64 v14; // rcx

  v2 = a2;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = 2;
      v7 = v5 - 2;
      if ( v7 )
      {
        if ( v7 == 4 )
          v6 = 3;
        else
          v6 = -1;
      }
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 0;
  }
  for ( i = 0; i < *(_WORD *)a1; ++i )
  {
    v9 = *(__int16 *)(*(_QWORD *)(a1 + 8) + 2LL * i);
    v10 = *(_WORD *)(*(_QWORD *)(a1 + 16) + 2LL * i);
    v11 = (_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v9);
    v12 = (_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v9);
    if ( v6 < 0 )
    {
      if ( (__int16)v9 <= v10 )
      {
        v14 = (unsigned __int16)(v10 - v9 + 1);
        do
        {
          *v11++ *= v2;
          *v12++ *= v2;
          --v14;
        }
        while ( v14 );
      }
    }
    else if ( (__int16)v9 <= v10 )
    {
      v13 = (unsigned __int16)(v10 - v9 + 1);
      do
      {
        *v11++ <<= v6;
        *v12++ <<= v6;
        --v13;
      }
      while ( v13 );
    }
  }
  return 0LL;
}
