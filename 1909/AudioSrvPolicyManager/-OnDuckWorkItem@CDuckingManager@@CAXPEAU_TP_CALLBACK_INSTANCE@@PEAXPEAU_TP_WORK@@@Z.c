/*
 * XREFs of ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000AED4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000B2A8 (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAVCDuckWorkItem@@XZ @ 0x18000C770 (-RemoveHead@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAP.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDuckingManager::OnDuckWorkItem(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct CDuckWorkItem *v4; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 208);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = (struct CDuckWorkItem *)ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::RemoveHead(a2 + 248);
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !*((_DWORD *)a2 + 78) )
  {
    if ( *((_DWORD *)v4 + 3) == 1 )
    {
      CDuckingManager::OnAutoDuckWorkItem((CDuckingManager *)a2, v4);
    }
    else if ( *((_DWORD *)v4 + 3) == 2 )
    {
      CDuckingManager::OnAutoUnduckWorkItem((CDuckingManager *)a2, v4);
    }
  }
  if ( v4 )
  {
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 16LL))(*(_QWORD *)v4);
    operator delete(v4, (const struct std::nothrow_t *)0x18);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)a2 + 32LL))(a2);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  }
}
