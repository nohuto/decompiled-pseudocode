/*
 * XREFs of ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x1C013C9C0
 * Callers:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0089D9C (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLastTopMostWindow(const struct tagWND *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax

  v1 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) != 0 )
  {
    v2 = *((_QWORD *)a1 + 11);
    if ( v2 )
      return (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 24LL) & 8) == 0;
  }
  return v1;
}
