/*
 * XREFs of ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x1801009D4
 * Callers:
 *     ?DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1801007C0 (-DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801035AC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180103E10 (-Stop@CMonitor@@QEAAXXZ.c)
 *     WPP_SF_gd @ 0x180104420 (WPP_SF_gd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::HandleSimpleVolumeChanged(CMonitor *this, float a2, int a3, const struct _GUID *a4)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v7; // [rsp+40h] [rbp-28h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_gd(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL);
  }
  if ( a3 )
  {
    if ( *((_DWORD *)this + 14) == 3 )
      CMonitor::Stop(this);
  }
  else if ( *((_DWORD *)this + 14) == 4 )
  {
    CMonitor::Start(this);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
