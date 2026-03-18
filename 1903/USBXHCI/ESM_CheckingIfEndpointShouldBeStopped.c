/*
 * XREFs of ESM_CheckingIfEndpointShouldBeStopped @ 0x1C0045E00
 * Callers:
 *     <none>
 * Callees:
 *     TR_WasDoorbellRungSinceMappingStart @ 0x1C00299C4 (TR_WasDoorbellRungSinceMappingStart.c)
 */

__int64 __fastcall ESM_CheckingIfEndpointShouldBeStopped(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  __int64 v3; // rsi
  unsigned int v4; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 37) )
  {
    v3 = *(_QWORD *)(v1 + 136);
    v4 = 1;
    for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
    {
      v2 = TR_WasDoorbellRungSinceMappingStart(*(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(v1 + 136) + 48));
      if ( v2 )
        break;
    }
  }
  else
  {
    v2 = TR_WasDoorbellRungSinceMappingStart(*(_QWORD *)(v1 + 88));
  }
  return v2 != 0 ? 33 : 21;
}
