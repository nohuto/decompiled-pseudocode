/*
 * XREFs of ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0
 * Callers:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     HmgFree @ 0x1C001A3F0 (HmgFree.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C001BC60 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C001D5B0 (GreGetBounds.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C001FCA0 (HmgLockEx.c)
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0021470 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00258B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     HmgNextOwned @ 0x1C006C600 (HmgNextOwned.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AB720 (-vCleanupDCs@@YAXK@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BB020 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00BB290 (HmgNextGarbageCollectible.c)
 *     HmgUnlock @ 0x1C00BB334 (HmgUnlock.c)
 *     HmgSwapLockedHandleContents @ 0x1C01231D0 (HmgSwapLockedHandleContents.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C012375C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct OBJECT *__fastcall GdiHandleManager::GetEntryObject(GdiHandleManager *this, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // r9

  v3 = GdiHandleManager::DecodeIndex(this, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v6 = v3;
  v7 = *(_DWORD *)(v4 + 2056);
  if ( v3 < v7 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    v8 = ((v3 - v7) >> 16) + 1;
    if ( (unsigned int)v6 < v7 )
      v8 = 0LL;
    v9 = *(_QWORD *)(v4 + 8 * v8 + 8);
    if ( (_DWORD)v8 )
      v6 = ((1 - (_DWORD)v8) << 16) - v7 + (unsigned int)v6;
    if ( (unsigned int)v6 < *(_DWORD *)(v9 + 20) )
      return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
  }
  return (struct OBJECT *)v5;
}
