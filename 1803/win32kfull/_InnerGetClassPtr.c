/*
 * XREFs of _InnerGetClassPtr @ 0x1C0030F30
 * Callers:
 *     InternalRegisterClassEx @ 0x1C001B870 (InternalRegisterClassEx.c)
 *     _UnregisterClass @ 0x1C0030D3C (_UnregisterClass.c)
 *     GetClassPtr @ 0x1C0030EA0 (GetClassPtr.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall InnerGetClassPtr(__int16 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rdx
  __int64 v6; // r8

  v4 = a2;
  if ( !a1 )
    return 0LL;
  v5 = (_QWORD *)*a2;
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    v6 = v5[1];
    if ( *(_WORD *)v6 == a1 && (!a3 || HIWORD(*(_DWORD *)(v6 + 64)) == WORD1(a3)) && (*(_BYTE *)(v6 + 6) & 4) == 0 )
      break;
    v4 = v5;
    v5 = (_QWORD *)*v5;
    if ( !v5 )
      return 0LL;
  }
  return v4;
}
