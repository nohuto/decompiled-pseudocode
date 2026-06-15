/*
 * XREFs of ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800190E4
 * Callers:
 *     PbmRegisterAppClosureNotification @ 0x180020CD0 (PbmRegisterAppClosureNotification.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x1800191B0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterAppClosureNotificationClient(
        CApplicationManager *this,
        struct CProcess *a2)
{
  CApplicationManager *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // ebx

  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = CApplicationManager::Register(v3, a2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v5);
    }
    AudPolicyLogError("CApplicationManager::RegisterAppClosureNotificationClient", 742, v5);
  }
  else
  {
    *((_DWORD *)a2 + 124) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v5;
}
