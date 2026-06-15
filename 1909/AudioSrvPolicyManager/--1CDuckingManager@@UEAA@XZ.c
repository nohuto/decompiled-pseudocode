/*
 * XREFs of ??1CDuckingManager@@UEAA@XZ @ 0x180008DBC
 * Callers:
 *     ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x180008D80 (--_ECDuckingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x1800087E4 (WPP_SF_S.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000C54C (-RemoveAt@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL@@.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000C680 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?RemoveHead@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAVCDuckWorkItem@@XZ @ 0x18000C770 (-RemoveHead@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAP.c)
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x18000CD8C (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CDF8 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDuckingManager::~CDuckingManager(CDuckingManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  _QWORD *v8; // rdi
  const wchar_t *v9; // rax
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+28h] [rbp-20h]

  *((_DWORD *)this + 78) = 1;
  *(_QWORD *)this = &CDuckingManager::`vftable'{for `CUnknown'};
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *((_QWORD *)this + 2) = &CDuckingManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 3) = &CDuckingManager::`vftable'{for `IAudioDuckingManager'};
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  if ( *((_QWORD *)this + 10) )
  {
    v4 = 0LL;
    v5 = (_QWORD *)((char *)this + 72);
    do
    {
      if ( v4 >= *((_QWORD *)this + 10) )
        goto LABEL_32;
      _mm_lfence();
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v6 = **(_QWORD **)(*v5 + 8 * v4);
        v7 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, v7);
      }
      if ( v4 >= *((_QWORD *)this + 10) )
LABEL_32:
        ATL::AtlThrowImpl(-2147024809);
      operator delete(*(void **)(*v5 + 8 * v4), (const struct std::nothrow_t *)0x10);
      ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt((char *)this + 72);
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 10) );
  }
  LeaveCriticalSection(v1);
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 208);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  while ( *((_QWORD *)this + 33) )
  {
    v8 = (_QWORD *)ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::RemoveHead((char *)this + 248);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      v9 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 64LL))(*v8);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, v9);
    }
    if ( v8 )
    {
      if ( *v8 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
      operator delete(v8, (const struct std::nothrow_t *)0x18);
    }
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((char *)this + 248);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  while ( *((_QWORD *)this + 19) )
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt((char *)this + 144, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v10 = (void *)*((_QWORD *)this + 22);
  if ( v10 )
    free(v10);
  v11 = *((_QWORD *)this + 18);
  if ( v11 )
  {
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
      v11,
      *((_QWORD *)this + 19));
    free(*((void **)this + 18));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v12 = (void *)*((_QWORD *)this + 9);
  if ( v12 )
    free(v12);
  DeleteCriticalSection(v1);
  *(_QWORD *)this = &CUnknown::`vftable';
}
