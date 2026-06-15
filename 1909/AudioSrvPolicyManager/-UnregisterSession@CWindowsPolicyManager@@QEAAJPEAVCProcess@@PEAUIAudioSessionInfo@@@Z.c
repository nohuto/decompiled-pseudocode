/*
 * XREFs of ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x1800064B8
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800125F0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180006480 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000C54C (-RemoveAt@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012A90 (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019318 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowsPolicyManager::UnregisterSession(
        struct _RTL_CRITICAL_SECTION *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  CWindowsPolicyManager *v5; // rbp
  CApplicationManager *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v14; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+78h] [rbp+20h]

  v14 = this;
  v5 = g_PolicyManager;
  CWindowsPolicyManager::Lock((__int64)g_PolicyManager, &v14);
  v6 = g_ApplicationManager;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15 = v7;
  CProcess::RemoveSession(a2, a3);
  CApplicationManager::Unregister(v6, a2);
  if ( v7 )
    LeaveCriticalSection(v7);
  v8 = *((_QWORD *)v5 + 5);
  lpCriticalSection = (LPCRITICAL_SECTION)(v8 + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v9 = 0LL;
  if ( *(_QWORD *)(v8 + 80) )
  {
    v10 = (_QWORD *)(v8 + 72);
    while ( a3 != **(struct IAudioSessionInfo ***)(*v10 + 8 * v9) )
    {
      if ( (unsigned __int64)++v9 >= *(_QWORD *)(v8 + 80) )
        goto LABEL_7;
    }
    ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt(v10);
  }
LABEL_7:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v14 )
    LeaveCriticalSection(v14);
  return 0LL;
}
