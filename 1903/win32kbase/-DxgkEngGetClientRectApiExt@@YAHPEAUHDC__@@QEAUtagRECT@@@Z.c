/*
 * XREFs of ?DxgkEngGetClientRectApiExt@@YAHPEAUHDC__@@QEAUtagRECT@@@Z @ 0x1C01223C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetClientRectApiExt(HDC a1, struct tagRECT *const a2)
{
  int ClientRectSupported; // eax
  unsigned int v5; // r8d

  ClientRectSupported = IsDxgkEngGetClientRectSupported();
  v5 = 0;
  if ( ClientRectSupported >= 0 )
    return (unsigned int)DxgkEngGetClientRect(a1, a2, 0LL);
  return v5;
}
