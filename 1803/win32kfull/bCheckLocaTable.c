/*
 * XREFs of bCheckLocaTable @ 0x1C0217FB4
 * Callers:
 *     bVerifyTTF @ 0x1C021ACCC (bVerifyTTF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckLocaTable(__int16 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned __int64 v4; // r11
  unsigned __int16 v5; // r10
  __int64 v7; // r8
  int v8; // r9d
  int v9; // eax
  __int64 v10; // r8
  int v11; // r9d
  int v12; // eax

  v4 = *(unsigned int *)(a3 + 44);
  v5 = 0;
  if ( a1 )
  {
    if ( 4 * (unsigned __int64)a4 > v4 )
      return 0LL;
    v7 = a2 + *(unsigned int *)(a3 + 40);
    v8 = a4 - 1;
    if ( v8 > 0 )
    {
      v9 = 0;
      while ( _byteswap_ulong(*(_DWORD *)(v7 + 4LL * v5)) <= _byteswap_ulong(*(_DWORD *)(v7
                                                                                       + 4LL * (unsigned int)(v9 + 1))) )
      {
        v9 = ++v5;
        if ( v5 >= v8 )
          return 1LL;
      }
      return 0LL;
    }
  }
  else
  {
    if ( 2 * (unsigned __int64)a4 > v4 )
      return 0LL;
    v10 = a2 + *(unsigned int *)(a3 + 40);
    v11 = a4 - 1;
    if ( v11 > 0 )
    {
      v12 = 0;
      while ( __ROR2__(*(_WORD *)(v10 + 2LL * v5), 8) <= __ROR2__(*(_WORD *)(v10 + 2LL * (unsigned int)(v12 + 1)), 8) )
      {
        v12 = ++v5;
        if ( v5 >= v11 )
          return 1LL;
      }
      return 0LL;
    }
  }
  return 1LL;
}
