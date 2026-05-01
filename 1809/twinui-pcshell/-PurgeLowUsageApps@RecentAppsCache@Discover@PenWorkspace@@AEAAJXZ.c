/*
 * XREFs of ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019B624
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800DD46C (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@@Z @ 0x18019CEF0 (-erase@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$share.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  _QWORD *Ptr; // rbx
  _QWORD *i; // r11
  const unsigned __int8 *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r11
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v12; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v13, this + 21);
  v2 = this + 3;
  Ptr = this[3].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    if ( *(int *)(i[6] + 32LL) < 3 )
    {
      v5 = (const unsigned __int8 *)(i + 2);
      if ( i[5] >= 8uLL )
        v5 = *(const unsigned __int8 **)v5;
      v6 = std::_Hash_bytes(v5, 2LL * i[4]);
      v8 = this[5].Ptr;
      v9 = 2 * ((__int64)this[8].Ptr & v6);
      if ( (_QWORD *)v8[2 * ((__int64)this[8].Ptr & v6) + 1] == v7 )
      {
        if ( (_QWORD *)v8[2 * ((__int64)this[8].Ptr & v6)] == v7 )
        {
          v8[2 * ((__int64)this[8].Ptr & v6)] = Ptr;
          v8 = this[5].Ptr;
          v10 = v2->Ptr;
        }
        else
        {
          v10 = (_QWORD *)v7[1];
        }
        v8[v9 + 1] = v10;
      }
      else if ( (_QWORD *)v8[2 * ((__int64)this[8].Ptr & v6)] == v7 )
      {
        v8[2 * ((__int64)this[8].Ptr & v6)] = *v7;
      }
      std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::erase(
        &this[3],
        &v12,
        v7);
      i = v12;
      Ptr = v2->Ptr;
      if ( v12 == v2->Ptr )
        break;
    }
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return 0LL;
}
