/*
 * XREFs of WmipGenerateRegistrationNotification @ 0x140732D48
 * Callers:
 *     WmipRemoveDS @ 0x1407324EC (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140732528 (WmipAddDataSource.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipReferenceEntry @ 0x1406688C4 (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x140669758 (WmipUnreferenceEntry.c)
 *     WmipCachePtrs @ 0x140732E28 (WmipCachePtrs.c)
 *     WmipEnableCollectionForNewGuid @ 0x140732EF4 (WmipEnableCollectionForNewGuid.c)
 *     WmipSendGuidUpdateNotifications @ 0x140732F98 (WmipSendGuidUpdateNotifications.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407334D8 (WmipDisableCollectionForRemovedGuid.c)
 */

__int64 __fastcall WmipGenerateRegistrationNotification(ULONG_PTR a1, unsigned int a2)
{
  __int64 v4; // rdx
  void *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  WmipReferenceEntry(a1);
  v4 = 0LL;
  v11 = 0;
  v5 = 0LL;
  v6 = *(_QWORD **)(a1 + 40);
  v10 = 0;
  v12 = 0LL;
  if ( v6 != (_QWORD *)(a1 + 40) )
  {
    do
    {
      v7 = v6 - 5;
      if ( (*(_DWORD *)(v6 - 3) & 8) == 0 )
      {
        v8 = v7[7] + 72LL;
        WmipCachePtrs(*((_DWORD *)v7 + 14) + 72, (_DWORD)v6 - 40, (unsigned int)&v10, (unsigned int)&v11, (__int64)&v12);
        if ( a2 == 1 )
        {
          WmipEnableCollectionForNewGuid(v8, v6 - 5);
        }
        else if ( a2 == 2 )
        {
          WmipDisableCollectionForRemovedGuid(v8, v6 - 5);
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)(a1 + 40) );
    v4 = v10;
    v5 = v12;
  }
  WmipSendGuidUpdateNotifications(a2, v4, v5);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)a1);
}
