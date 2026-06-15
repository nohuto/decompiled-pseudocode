/*
 * XREFs of ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18000A91C
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000AED4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x1800087E4 (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000BD1C (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000D240 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoDuck(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  SIZE_T v9; // r15
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v11; // rax
  ATL::CAtlException *v12; // rbx
  HANDLE v13; // rax
  ATL::CAtlException *v15[4]; // [rsp+28h] [rbp-50h] BYREF
  __int16 v16; // [rsp+48h] [rbp-30h]
  ATL::CAtlException *v17; // [rsp+80h] [rbp+8h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v6 = *(_QWORD *)&v5[1].LockCount;
  LeaveCriticalSection(v5);
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, a2);
    }
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
    v8 = 2 * v7 + 2;
    v9 = 2 * v7 + 74;
    ProcessHeap = GetProcessHeap();
    v11 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v9);
    v12 = (ATL::CAtlException *)v11;
    v17 = (ATL::CAtlException *)v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = v9;
      *((_DWORD *)v11 + 1) = 512;
      *((_DWORD *)v11 + 6) = v8;
      *((_BYTE *)v11 + 60) = 1;
      *((_DWORD *)v11 + 14) = a3;
      StringCbCopyW(v11 + 36, v8, a2);
      try
      {
        v15[1] = (ATL::CAtlException *)&CGenerateDuckingNotification::`vftable';
        v15[2] = v12;
        v15[3] = 0LL;
        v16 = 1;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v5);
      }
      catch ( ATL::CAtlException *v15 )
      {
        if ( *(_DWORD *)v15[0] == -1073741571 )
          _o__resetstkoflw();
        v12 = v17;
      }
    }
    v13 = GetProcessHeap();
    HeapFree(v13, 0, v12);
  }
  return 0LL;
}
