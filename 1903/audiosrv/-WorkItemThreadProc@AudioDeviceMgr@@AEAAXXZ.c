/*
 * XREFs of ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x180062FDC
 * Callers:
 *     ?s_WorkItemThreadProc@AudioDeviceMgr@@CAKPEAX@Z @ 0x180062FC0 (-s_WorkItemThreadProc@AudioDeviceMgr@@CAKPEAX@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAA?AV?$CAutoPtr@VWorkItemBase@@@2@XZ @ 0x180146764 (-RemoveHead@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AudioDeviceMgr::WorkItemThreadProc(AudioDeviceMgr *this)
{
  DWORD v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 *v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-28h] BYREF
  char v7; // [rsp+30h] [rbp-20h]
  HANDLE Handles[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h]

  Handles[0] = *((HANDLE *)this + 27);
  Handles[1] = *((HANDLE *)this + 26);
  while ( 1 )
  {
    v2 = WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( !v2 )
      break;
    if ( v2 == 1 )
    {
      do
      {
        v3 = 0LL;
        v10 = 0LL;
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          (__int64)&lpCriticalSection,
          (struct _RTL_CRITICAL_SECTION *)((char *)this + 168));
        v4 = *((_QWORD *)this + 17);
        if ( v4 )
        {
          v5 = (__int64 *)ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveHead(
                            (char *)this + 120,
                            &v9);
          v3 = *v5;
          *v5 = 0LL;
          v10 = v3;
          if ( v9 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
          v9 = 0LL;
        }
        if ( v7 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v7 = 0;
        }
        if ( v4 )
          (**(void (__fastcall ***)(__int64, AudioDeviceMgr *))v3)(v3, this);
        if ( v3 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
      }
      while ( v4 );
    }
  }
}
