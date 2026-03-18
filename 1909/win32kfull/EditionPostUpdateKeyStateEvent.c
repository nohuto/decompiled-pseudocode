/*
 * XREFs of EditionPostUpdateKeyStateEvent @ 0x1C0138830
 * Callers:
 *     <none>
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C01388DC (PostUpdateKeyStateEvent.c)
 */

void __fastcall EditionPostUpdateKeyStateEvent(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 104);
    v2 = gObjDummyLock;
    if ( v1 )
      v2 = v1 + 384;
    v3 = *(_QWORD *)(a1 + 96);
    v4 = gObjDummyLock;
    if ( v3 )
      v4 = v3 + 384;
    if ( (*(_DWORD *)(a1 + 396) & 1) != 0 )
      PostUpdateKeyStateEvent(a1, v4, v2);
  }
}
