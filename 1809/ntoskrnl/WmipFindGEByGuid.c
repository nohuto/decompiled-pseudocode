/*
 * XREFs of WmipFindGEByGuid @ 0x1406137A0
 * Callers:
 *     WmipOpenBlock @ 0x140612928 (WmipOpenBlock.c)
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140709020 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x140709294 (WmipEnableCollectionForNewGuid.c)
 *     WmipLinkDataSourceToList @ 0x1407094C4 (WmipLinkDataSourceToList.c)
 *     WmipMangleInstanceName @ 0x1407096A0 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140709890 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipIncludeStaticNames @ 0x1408B4998 (WmipIncludeStaticNames.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x140613C30 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindGEByGuid(_QWORD *a1, char a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = *(_QWORD **)WmipGEHeadPtr;
  if ( *(_QWORD *)WmipGEHeadPtr == WmipGEHeadPtr )
  {
LABEL_6:
    KeReleaseMutex(&WmipSMMutex, 0);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = *a1 - v4[9];
      if ( *a1 == v4[9] )
        v5 = a1[1] - v4[10];
      if ( !v5 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v4 == (_QWORD *)WmipGEHeadPtr )
        goto LABEL_6;
    }
    WmipReferenceEntry((ULONG_PTR)v4);
    if ( a2 )
    {
      v7 = (_QWORD *)*v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4
        || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4)
        || (*v8 = v7,
            v7[1] = v8,
            v9 = (_QWORD *)WmipGEHeadPtr,
            v10 = *(_QWORD *)WmipGEHeadPtr,
            *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) != WmipGEHeadPtr) )
      {
        __fastfail(3u);
      }
      *v4 = v10;
      v4[1] = v9;
      *(_QWORD *)(v10 + 8) = v4;
      *v9 = v4;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    return v4;
  }
}
