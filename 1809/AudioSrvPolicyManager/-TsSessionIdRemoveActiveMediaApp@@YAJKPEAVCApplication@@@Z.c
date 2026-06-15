/*
 * XREFs of ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180028F38
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180011EB0 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180011F40 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001FABC (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001FD50 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800187A4 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180028D9C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdRemoveActiveMediaApp(DWORD a1, struct CApplication *a2)
{
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v6; // eax
  struct TSSession *v7; // rbx
  __int64 i; // rdx
  struct TSSession *v10; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = v5;
  v6 = TsSessionFromSessionId(a1, 0, 0LL, &v10);
  if ( v6 )
  {
    v4 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 <= 0 )
      v4 = v6;
  }
  else
  {
    v7 = v10;
    for ( i = *((_QWORD *)v10 + 13); i && *(struct CApplication **)(i + 16) != a2; i = *(_QWORD *)i )
      ;
    if ( i )
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((__int64 **)v10 + 13, (__int64 *)i);
      TsSessionSendAppManagerNotification(v7);
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v4;
}
