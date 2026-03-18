/*
 * XREFs of ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x18021350C
 * Callers:
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x180212190 (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r9
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_QWORD *)a1;
    v5 = 0;
    if ( v1 != 1 )
    {
      do
      {
        v6 = 32LL * v5++;
        v7 = 32LL * v5;
        v8 = *(_OWORD *)(v7 + v4 + 16);
        *(_OWORD *)(v6 + v4) = *(_OWORD *)(v7 + v4);
        *(_OWORD *)(v6 + v4 + 16) = v8;
        v1 = *(_DWORD *)(a1 + 24);
      }
      while ( v5 < v1 - 1 );
    }
    *(_DWORD *)(a1 + 24) = v1 - 1;
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x19Cu);
  }
  return v2;
}
