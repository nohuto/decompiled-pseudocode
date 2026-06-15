/*
 * XREFs of ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x180022874
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800225F0 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800225B4 (WPP_SF_q.c)
 */

_BOOL8 __fastcall PickerHostContextManager::IsValidPickerHostContext(
        PickerHostContextManager *this,
        struct CPickerHostContext *a2)
{
  __int64 i; // rax
  BOOL v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = PickerHostContextManager::s_PickerHostContextList;
        i && *(PickerHostContextManager **)(i + 16) != this;
        i = *(_QWORD *)i )
  {
    ;
  }
  v4 = i != 0;
  if ( !i
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, this);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
