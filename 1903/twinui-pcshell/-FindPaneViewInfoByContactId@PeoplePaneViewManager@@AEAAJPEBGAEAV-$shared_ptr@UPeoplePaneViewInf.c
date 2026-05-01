/*
 * XREFs of ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180220260
 * Callers:
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x18021FE80 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x180221510 (-IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180221C90 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1802228E0 (-PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x180167658 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801C52E4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180223CF4 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindPaneViewInfoByContactId(
        RTL_SRWLOCK *a1,
        unsigned __int16 *a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rdi
  __int64 **Ptr; // rsi
  __int64 **i; // rbx
  unsigned int v9; // ebx

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  v6 = a1 + 16;
  AcquireSRWLockShared(a1 + 16);
  Ptr = (__int64 **)a1[18].Ptr;
  for ( i = (__int64 **)a1[17].Ptr;
        i != Ptr && (*((_DWORD *)*i + 15) || (unsigned int)std::wstring::compare(*i, a2));
        i += 2 )
  {
    ;
  }
  if ( i == Ptr )
  {
    v9 = -2147023728;
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, i);
    v9 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
