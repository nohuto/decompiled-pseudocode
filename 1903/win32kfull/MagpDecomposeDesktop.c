/*
 * XREFs of MagpDecomposeDesktop @ 0x1C015EC84
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C015E4AC (zzzDecomposeDesktop.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1C015ED00 (MagpRevokeInputTransfrom.c)
 *     DwmAsyncMagnDestroy @ 0x1C0271B24 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0271BE0 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C0271E4C (DwmAsyncMagnSetDesktopTransform.c)
 */

__int64 __fastcall MagpDecomposeDesktop(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *i; // rsi
  void *v9; // rax
  void *v10; // rax
  __int64 *j; // rdi
  void *v12; // rax

  result = MagpRevokeInputTransfrom();
  if ( *(_QWORD *)(a2 + 232) )
  {
    v9 = (void *)ReferenceDwmApiPort(v6, v5, **(_QWORD **)(a2 + 8));
    result = DwmAsyncMagnSetDesktopColorTransform(v9);
  }
  if ( *(_QWORD *)(a2 + 224) )
  {
    v10 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v5, v7);
    result = DwmAsyncMagnSetDesktopTransform(v10, 0);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      *((_DWORD *)j + 4) |= 0x20u;
      result = j[3];
      if ( result != -1 )
      {
        v12 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v5, v7);
        result = DwmAsyncMagnDestroy(v12);
      }
    }
  }
  return result;
}
