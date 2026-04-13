/*
 * XREFs of ?QueryNotificationsBlockingState@NotificationManager@ContentManagement@@UEAAJPEAW4NotificationsBlockingStateFlags@2@@Z @ 0x18000C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::NotificationManager::QueryNotificationsBlockingState(
        ContentManagement::NotificationManager *this,
        enum ContentManagement::NotificationsBlockingStateFlags *a2)
{
  int v3; // ebx
  HRESULT v4; // edi
  __int64 v5; // rdx
  bool v7; // si
  HRESULT v8; // eax
  __int64 v9; // rdx
  LPVOID v10; // rcx
  LPVOID v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  QUERY_USER_NOTIFICATION_STATE pquns; // [rsp+78h] [rbp+38h] BYREF
  int v14; // [rsp+80h] [rbp+40h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+48h] BYREF

  *(_DWORD *)a2 = 0;
  v3 = 0;
  v4 = SHQueryUserNotificationState(&pquns);
  if ( v4 < 0 )
  {
    v5 = 203LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  switch ( pquns )
  {
    case QUNS_BUSY:
      v3 = 1;
      break;
    case QUNS_PRESENTATION_MODE:
      v3 = 4;
      break;
    case QUNS_QUIET_TIME:
      v3 = 2;
      break;
  }
  v7 = 0;
  ppv = 0LL;
  v8 = CoCreateInstance(
         &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
         0LL,
         0x17u,
         &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
         &ppv);
  v4 = v8;
  if ( v8 < 0 )
  {
    v9 = 284LL;
    goto LABEL_12;
  }
  v8 = (*(__int64 (__fastcall **)(LPVOID, __int64, int *))(*(_QWORD *)ppv + 32LL))(ppv, 7LL, &v14);
  v4 = v8;
  if ( v8 < 0 )
  {
    v9 = 287LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
    v10 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_19;
  }
  v7 = v14 == 0;
  v11 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v4 = 0;
LABEL_19:
  if ( v4 < 0 )
  {
    v5 = 221LL;
    goto LABEL_3;
  }
  if ( v7 )
    v3 |= 8u;
  *(_DWORD *)a2 = v3;
  return 0LL;
}
