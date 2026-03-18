/*
 * XREFs of EditionPostUpdateKeyStateEvent @ 0x1C0082A30
 * Callers:
 *     <none>
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C0082ADC (PostUpdateKeyStateEvent.c)
 */

void __fastcall EditionPostUpdateKeyStateEvent(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 96);
    v2 = gObjDummyLock;
    if ( v1 )
      v2 = v1 + 384;
    if ( (*(_DWORD *)(a1 + 396) & 1) != 0 )
      PostUpdateKeyStateEvent(a1, v2);
  }
}
