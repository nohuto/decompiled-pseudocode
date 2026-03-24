/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1405D8920
 * Callers:
 *     CmpCheckKeyOwnerForPca @ 0x140580A4C (CmpCheckKeyOwnerForPca.c)
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x140580AA0 (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpQueryKeySecurity @ 0x1405CB550 (CmpQueryKeySecurity.c)
 *     CmpCheckNotifyAccess @ 0x1405DC224 (CmpCheckNotifyAccess.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406B55B4 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmRenameKey @ 0x1407EDAF4 (CmRenameKey.c)
 *     CmpCheckKcbStackAccess @ 0x1407F47E4 (CmpCheckKcbStackAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F48C0 (CmpCheckKeyBodyAccess.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1407F4E14 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x1407F54C4 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1407F57AC (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmGetKCBCacheSecurity @ 0x1405D8A10 (CmGetKCBCacheSecurity.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D8AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmRmIsKCBVisible @ 0x140699930 (CmRmIsKCBVisible.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rsi
  __int16 i; // di
  __int64 KcbAtLayerHeight; // rax
  __int64 v9; // rbx

  v3 = 0LL;
  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    v9 = KcbAtLayerHeight;
    if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
      break;
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
    {
      if ( (unsigned __int8)CmRmIsKCBVisible(KcbAtLayerHeight, a2) )
      {
        v3 = v9;
        if ( *(_WORD *)(v9 + 58) )
        {
          if ( *(_BYTE *)(v9 + 57) )
            break;
        }
      }
    }
  }
  if ( a3 )
    *a3 = *(_WORD *)(v3 + 58);
  return CmGetKCBCacheSecurity(v3, a2);
}
