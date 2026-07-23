/*
 * XREFs of CmpGetSecurityCellForKeyNodeStack @ 0x1407F6638
 * Callers:
 *     CmpCheckKeyNodeStackAccess @ 0x1407F5CA0 (CmpCheckKeyNodeStackAccess.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FDAA8 (CmpCopyMergeOfLayeredKeyNode.c)
 * Callees:
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407FB0AC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpGetSecurityCellForKeyNodeStack(__int16 *a1, _QWORD *a2, _DWORD *a3)
{
  __int16 v3; // r9
  __int16 *v6; // r11
  _QWORD *i; // r10
  _QWORD *EntryAtLayerHeight; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  int EffectiveKeyNodeSemantics; // eax
  _QWORD *v12; // r8
  __int64 result; // rax

  v3 = *a1;
  v6 = a1;
  for ( i = 0LL; v3 >= 0; v3 = v9 - 1 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(v6, (unsigned __int16)v3);
    v10 = EntryAtLayerHeight[2];
    if ( v10 )
    {
      EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v10, EntryAtLayerHeight, v9);
      if ( EffectiveKeyNodeSemantics == 1 )
        break;
      i = v12;
      if ( EffectiveKeyNodeSemantics )
        break;
    }
  }
  *a2 = *i;
  result = i[2];
  *a3 = *(_DWORD *)(result + 44);
  return result;
}
