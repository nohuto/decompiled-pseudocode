/*
 * XREFs of PopBootLoaderSiData @ 0x1405674E4
 * Callers:
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 * Callees:
 *     BapdRegisterSiData @ 0x14056FBD8 (BapdRegisterSiData.c)
 */

__int64 __fastcall PopBootLoaderSiData(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v2; // ebx
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  if ( *v1 == 1281517896 )
  {
    v2 = 1;
    v3 = v1 + 4;
    do
    {
      v4 = v3[1];
      if ( (_DWORD)v4 )
        result = BapdRegisterSiData((char *)v1 + *v3, v4, v2);
      ++v2;
      v3 += 2;
    }
    while ( v2 <= 2 );
  }
  return result;
}
