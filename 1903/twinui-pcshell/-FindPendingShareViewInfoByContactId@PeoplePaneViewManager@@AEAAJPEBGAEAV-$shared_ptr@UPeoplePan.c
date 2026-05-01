/*
 * XREFs of ?FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180220314
 * Callers:
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x180222980 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x180167658 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801C52E4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180223CF4 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindPendingShareViewInfoByContactId(
        RTL_SRWLOCK *a1,
        unsigned __int16 *a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rdi
  __int64 **Ptr; // rsi
  __int64 **i; // rbx
  __int64 *v9; // rcx
  unsigned int v10; // ebx

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  v6 = a1 + 16;
  AcquireSRWLockShared(a1 + 16);
  Ptr = (__int64 **)a1[18].Ptr;
  for ( i = (__int64 **)a1[17].Ptr; i != Ptr; i += 2 )
  {
    v9 = *i;
    if ( *((_DWORD *)*i + 15) == 1 && !v9[6] && !(unsigned int)std::wstring::compare(v9, a2) )
      break;
  }
  if ( i == Ptr )
  {
    v10 = -2147023728;
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, i);
    v10 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v10;
}
