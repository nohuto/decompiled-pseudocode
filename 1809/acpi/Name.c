/*
 * XREFs of Name @ 0x1C00038D0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall Name(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned int NameSpaceObject; // ebx
  _OWORD *v5; // rcx
  __int64 v6; // rax

  v2 = (_QWORD *)(a2 + 64);
  NameSpaceObject = CreateNameSpaceObject(a1[40], *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), a1[10], a1[11], a2 + 64, 0);
  if ( !NameSpaceObject )
  {
    v5 = (_OWORD *)(*(_QWORD *)(a2 + 80) + 40LL);
    v6 = *v2 + 64LL;
    if ( (_OWORD *)v6 == v5 )
      return NameSpaceObject;
    *(_OWORD *)v6 = *v5;
    *(_OWORD *)(v6 + 16) = v5[1];
    *(_QWORD *)(v6 + 32) = *((_QWORD *)v5 + 4);
    memset(v5, 0, 0x28uLL);
  }
  if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
    return 0;
  return NameSpaceObject;
}
