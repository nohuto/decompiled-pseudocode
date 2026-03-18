/*
 * XREFs of ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C0022178
 * Callers:
 *     HmgReplaceObject @ 0x1C0017040 (HmgReplaceObject.c)
 *     HmgSwapLockedHandleContents @ 0x1C01231D0 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C001FFB0 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall GdiHandleManager::SetEntryObject(GdiHandleManager *this, unsigned int a2, struct OBJECT *a3)
{
  GdiHandleManager *v3; // rbx
  unsigned int v5; // eax
  GdiHandleEntryDirectory *v6; // rcx
  GdiHandleManager *v7; // [rsp+30h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = this;
  v3 = gpHandleManager;
  v5 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, a2);
  v6 = (GdiHandleEntryDirectory *)*((_QWORD *)v3 + 2);
  v8 = 0LL;
  LODWORD(v7) = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v6, v5, &v8, (unsigned int *)&v7)
    && (unsigned int)v7 < *((_DWORD *)v8 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v8 + 3) + 8 * ((unsigned __int64)(unsigned int)v7 >> 8))
              + 16LL * (unsigned __int8)v7
              + 8) = a3;
  }
}
