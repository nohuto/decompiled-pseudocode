/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0021F00
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0075BF0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0108BB8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00210C0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0023780 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C00237F0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023928 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00F8F28 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(struct HOBJ__ **a1)
{
  struct OBJECT *EntryObject; // rsi
  struct HOBJ__ *v3; // r15
  int v4; // eax
  unsigned int v5; // edx
  int v6; // ebp
  unsigned __int16 *v7; // rdi
  char v8; // al
  unsigned int v9; // ebx
  GdiHandleManager *v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // r9
  _DWORD *v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r10
  GdiHandleManager *v21; // rbx
  unsigned int v22; // eax
  GdiHandleEntryDirectory *v23; // rcx
  char v24; // bl
  struct HOBJ__ *v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 *v27; // [rsp+30h] [rbp-48h] BYREF
  int v28; // [rsp+38h] [rbp-40h]
  unsigned int v29; // [rsp+80h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v30; // [rsp+88h] [rbp+10h] BYREF

  if ( !a1 )
    return;
  EntryObject = 0LL;
  v3 = *a1;
  v4 = (unsigned __int16)*a1;
  v5 = (unsigned int)*a1 >> 8;
  v27 = 0LL;
  v28 = 0;
  LOWORD(v6) = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, v4 | v5 & 0xFF0000, 0, 0, 1);
  if ( v28 )
  {
    v7 = v27;
    v8 = *((_BYTE *)v27 + 14);
    if ( v8 == 5 )
    {
      v8 = 5;
      if ( gbGdiHmgrAltStacks )
      {
        if ( gpentHmgrAltStacks )
        {
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)a1);
          v8 = *((_BYTE *)v7 + 14);
        }
      }
    }
    v6 = *((_DWORD *)a1 + 2);
    if ( v8 == 5 )
    {
      v25 = a1[85];
      v26 = 0LL;
    }
    else
    {
      if ( v8 != 16 )
      {
LABEL_6:
        --*((_DWORD *)a1 + 2);
        v9 = *(_DWORD *)v7 & 0xFFFFFF;
        if ( v9 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v7,
                                        1)
                 + 13) == HIWORD(v9) )
              v9 = (unsigned __int16)v9;
          }
          else
          {
            v9 = *v7;
          }
        }
        v10 = gpHandleManager;
        v11 = *((_QWORD *)gpHandleManager + 2);
        v12 = *(_DWORD *)(v11 + 2056);
        if ( v9 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
          goto LABEL_44;
        v13 = ((v9 - v12) >> 16) + 1;
        if ( v9 < v12 )
          v13 = 0LL;
        v14 = *(_QWORD *)(v11 + 8 * v13 + 8);
        if ( (_DWORD)v13 )
          v9 += ((1 - (_DWORD)v13) << 16) - v12;
        if ( v9 >= *(_DWORD *)(v14 + 20) )
LABEL_44:
          v15 = 0LL;
        else
          v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                           + 16LL * (unsigned __int8)v9
                           + 8);
        v16 = (unsigned __int16)*v15 | (*v15 >> 8) & 0xFF0000;
        if ( v16 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v15,
                                        1)
                 + 13) == HIWORD(v16) )
              v16 = (unsigned __int16)v16;
          }
          else
          {
            v16 = (unsigned __int16)*v15;
          }
        }
        v17 = *((_QWORD *)v10 + 2);
        v18 = *(_DWORD *)(v17 + 2056);
        if ( v16 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
        {
          v19 = ((v16 - v18) >> 16) + 1;
          if ( v16 < v18 )
            v19 = 0LL;
          v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
          if ( (_DWORD)v19 )
            v16 += ((1 - (_DWORD)v19) << 16) - v18;
          *(_DWORD *)(*(_QWORD *)v20 + 24LL * v16 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_26;
      }
      v25 = a1[17];
      v26 = 2LL;
    }
    TrackObjectReferenceDecrement(v26, v25);
    goto LABEL_6;
  }
LABEL_26:
  if ( (unsigned __int16)v6 == 1 )
  {
    v27 = 0LL;
    v28 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v27, v3, 10);
    if ( v28 )
    {
      v21 = gpHandleManager;
      v22 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v27 & 0xFFFFFF);
      v23 = (GdiHandleEntryDirectory *)*((_QWORD *)v21 + 2);
      v30 = 0LL;
      v29 = 0;
      if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v23, v22, &v30, &v29) )
        EntryObject = GdiHandleEntryTable::GetEntryObject(v30, v29);
      v24 = *((_BYTE *)GdiHandleManager::GetEntryFromObject(v21, EntryObject) + 15);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
      if ( (v24 & 2) != 0 )
        bDeleteFont(v3, 0LL);
      if ( v28 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
    }
  }
}
