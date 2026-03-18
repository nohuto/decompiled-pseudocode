/*
 * XREFs of CmpGetSecurityCellForKeyNodeStack @ 0x14082E08C
 * Callers:
 *     CmpCheckKeyNodeStackAccess @ 0x14082D6FC (CmpCheckKeyNodeStackAccess.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835384 (CmpCopyMergeOfLayeredKeyNode.c)
 * Callees:
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1408327FC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpGetSecurityCellForKeyNodeStack(unsigned __int16 *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rbx
  unsigned __int16 *v6; // r11
  _QWORD *i; // r10
  _QWORD *EntryAtLayerHeight; // rax
  int EffectiveKeyNodeSemantics; // eax
  __int64 result; // rax

  v3 = *a1;
  v4 = a3;
  v6 = a1;
  for ( i = 0LL; (v3 & 0x8000u) == 0LL; LOWORD(v3) = v3 - 1 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(v6, (unsigned __int16)v3, a3, v3);
    a3 = EntryAtLayerHeight;
    if ( EntryAtLayerHeight[2] )
    {
      EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight);
      if ( EffectiveKeyNodeSemantics == 1 )
        break;
      i = a3;
      if ( EffectiveKeyNodeSemantics )
        break;
    }
  }
  *a2 = *i;
  result = i[2];
  *v4 = *(_DWORD *)(result + 44);
  return result;
}
