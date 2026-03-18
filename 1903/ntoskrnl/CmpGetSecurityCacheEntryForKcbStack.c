/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x140631AE8
 * Callers:
 *     CmpCheckKeyOwnerForPca @ 0x1405B0664 (CmpCheckKeyOwnerForPca.c)
 *     CmpCheckNotifyAccess @ 0x14062DA60 (CmpCheckNotifyAccess.c)
 *     CmpQueryKeySecurity @ 0x14064F450 (CmpQueryKeySecurity.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406D52D0 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F6808 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckKcbStackAccess @ 0x14082D7A8 (CmpCheckKcbStackAccess.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14082DBB8 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x14082E29C (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14082E5A0 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x140631B4C (CmGetKCBCacheSecurity.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int16 v3; // dx
  __int64 v4; // r9
  __int64 i; // r8
  __int64 KcbAtLayerHeight; // rax
  __int16 v7; // dx
  char v8; // r11
  __int16 v9; // cx

  v2 = a2;
  v3 = *(_WORD *)(a1 + 2);
  v4 = a1;
  for ( i = 0LL; v3 >= 0; v3 = v7 - 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v4, v3);
    v9 = *(_WORD *)(KcbAtLayerHeight + 66);
    if ( v9 && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
      break;
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
    {
      i = KcbAtLayerHeight;
      if ( v9 )
      {
        if ( *(_BYTE *)(KcbAtLayerHeight + 65) != v8 )
          break;
      }
    }
  }
  return CmGetKCBCacheSecurity(i, v2);
}
