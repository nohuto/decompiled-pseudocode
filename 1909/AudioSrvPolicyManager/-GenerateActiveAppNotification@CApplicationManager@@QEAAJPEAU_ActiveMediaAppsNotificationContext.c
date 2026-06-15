/*
 * XREFs of ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x18001C800
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18002569C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GenerateActiveAppNotification(
        CApplicationManager *this,
        struct _ActiveMediaAppsNotificationContext *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // eax
  struct TSSession *v7; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+18h]

  v2 = *(_DWORD *)a2;
  v3 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8 = v4;
  v5 = TsSessionFromSessionId(v2, 0, 0LL, &v7);
  if ( v5 )
  {
    v3 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      v3 = v5;
  }
  else
  {
    TsSessionSendAppManagerNotification(v7);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v3;
}
