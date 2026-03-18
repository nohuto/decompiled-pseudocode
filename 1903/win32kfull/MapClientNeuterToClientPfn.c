/*
 * XREFs of MapClientNeuterToClientPfn @ 0x1C001F124
 * Callers:
 *     _GetClassInfoEx @ 0x1C001ECF4 (_GetClassInfoEx.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C0134CC8 (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapClientNeuterToClientPfn(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned __int16 v5; // cx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  if ( !a2 )
    v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_WORD *)(v3 + 4);
  if ( (unsigned __int16)(v5 - 673) > 9u )
    return v4;
  if ( !a3 )
  {
    if ( *(_QWORD *)(gpsi + 8LL * v5 - 4936) == v4 )
      return *(_QWORD *)(gpsi + 8LL * v5 - 4744);
    return v4;
  }
  if ( *(_QWORD *)(gpsi + 8LL * v5 - 4744) != v4 )
    return v4;
  return *(_QWORD *)(gpsi + 8LL * v5 - 4936);
}
