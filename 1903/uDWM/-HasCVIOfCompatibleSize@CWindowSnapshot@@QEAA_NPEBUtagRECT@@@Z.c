/*
 * XREFs of ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x1800939E4
 * Callers:
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180004EA4 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x18008B278 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualIma.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x180093988 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowSnapshot::HasCVIOfCompatibleSize(CWindowSnapshot *this, const struct tagRECT *a2)
{
  char v2; // r9
  _DWORD *v4; // rdx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 6) && *((_QWORD *)this + 5) )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 4);
    v5 = 0;
    if ( a2->right - a2->left >= 0 )
      v5 = a2->right - a2->left;
    v6 = 0;
    if ( v4[14] - v4[12] >= 0 )
      v6 = v4[14] - v4[12];
    if ( v6 == v5 )
    {
      v7 = 0;
      if ( v4[15] - v4[13] >= 0 )
        v7 = v4[15] - v4[13];
      v8 = 0;
      if ( a2->bottom - a2->top >= 0 )
        v8 = a2->bottom - a2->top;
      if ( v7 == v8 )
        return 1;
    }
  }
  return v2;
}
