/*
 * XREFs of ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000D830
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000E1E4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000BAF4 (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x18000EE58 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000F02C (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x18000FBCC (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18001019C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180010550 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoDuck(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  CDuckingManager *v5; // r13
  unsigned int v6; // esi
  int DuckableSessionsList; // r14d
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  const wchar_t *v16; // rax
  HANDLE v18; // rax
  int *v20; // rbx
  unsigned __int16 *v21; // [rsp+28h] [rbp-A0h]
  __int128 v23; // [rsp+50h] [rbp-78h] BYREF
  __int64 v24; // [rsp+60h] [rbp-68h]
  __int128 v25; // [rsp+68h] [rbp-60h]
  int v26; // [rsp+78h] [rbp-50h]
  __int64 v27; // [rsp+80h] [rbp-48h]
  ATL::CAtlException *v28; // [rsp+88h] [rbp-40h] BYREF

  v27 = -2LL;
  v5 = this;
  v6 = 0;
  DuckableSessionsList = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 10;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v8 = *((_QWORD *)v5 + 19);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 104));
  if ( v8 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, a2);
    }
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = 2 * v9 + 2;
    ProcessHeap = GetProcessHeap();
    v12 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v10 + 72);
    v13 = v12;
    v21 = v12;
    if ( v12 )
    {
      *(_DWORD *)v12 = v10 + 72;
      *((_DWORD *)v12 + 1) = 512;
      *((_DWORD *)v12 + 6) = v10;
      *((_BYTE *)v12 + 60) = 1;
      *((_DWORD *)v12 + 14) = a4;
      StringCbCopyW(v12 + 36, v10, a2);
      DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(v5, a3, &v23);
      if ( DuckableSessionsList >= 0 )
      {
        while ( v24 )
        {
          v14 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v23);
          v15 = v14;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v16 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 64LL))(v14);
            WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, v16);
          }
          DuckableSessionsList = 0;
          try
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
            CLockedList<CDuckingNotification,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v5 + 104));
          }
          catch ( ATL::CAtlException *v28 )
          {
            v20 = (int *)v28;
            if ( *(_DWORD *)v28 == -1073741571 )
              _o__resetstkoflw();
            v5 = this;
            DuckableSessionsList = *v20;
            v13 = v21;
            continue;
          }
        }
      }
    }
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v13);
    if ( DuckableSessionsList < 0 )
      AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoDuck", 839, DuckableSessionsList);
    v6 = DuckableSessionsList;
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v23);
  return v6;
}
