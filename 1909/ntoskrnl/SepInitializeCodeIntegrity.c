/*
 * XREFs of SepInitializeCodeIntegrity @ 0x14075D250
 * Callers:
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     SepIsOptionPresent @ 0x14075D310 (SepIsOptionPresent.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int *v3; // rdx

  v0 = 6;
  memset(&unk_140436404, 0, 0xC4uLL);
  v1 = 0LL;
  SeCiCallbacks = 208;
  qword_1404364C8 = 167772167LL;
  if ( KeLoaderBlock_0 )
  {
    v2 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    if ( v2 )
    {
      v3 = *(unsigned int **)(v2 + 2856);
      if ( v3 )
        v0 = *v3;
    }
    if ( *(_QWORD *)(KeLoaderBlock_0 + 216) && (unsigned int)SepIsOptionPresent() )
      SeCiDebugOptions |= 1u;
    if ( KeLoaderBlock_0 )
      v1 = KeLoaderBlock_0 + 48;
  }
  return CiInitialize(v0, v1, &SeCiCallbacks, &SeCiPrivateApis);
}
