/*
 * XREFs of ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180006F90
 * Callers:
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180006F4C (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000AD04 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x180084604 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowSnapshot::HasCVIOfCompatibleSize(CWindowSnapshot *this, const struct tagRECT *a2)
{
  char v2; // r9
  _DWORD *v5; // rdx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 6) && *((_QWORD *)this + 5) )
  {
    v5 = (_DWORD *)*((_QWORD *)this + 4);
    v6 = 0;
    if ( a2->right - a2->left >= 0 )
      v6 = a2->right - a2->left;
    v7 = 0;
    if ( v5[14] - v5[12] >= 0 )
      v7 = v5[14] - v5[12];
    if ( v7 == v6 )
    {
      v8 = 0;
      if ( v5[15] - v5[13] >= 0 )
        v8 = v5[15] - v5[13];
      v9 = 0;
      if ( a2->bottom - a2->top >= 0 )
        v9 = a2->bottom - a2->top;
      if ( v8 == v9 )
        return 1;
    }
  }
  return v2;
}
