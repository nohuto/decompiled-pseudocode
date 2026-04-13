/*
 * XREFs of ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18008C220
 * Callers:
 *     ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008B390 (-MakeLaunchUriService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Creat.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800905D4 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x180090D34 (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009A840 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::operator==<wchar_t>(_QWORD *a1, _WORD *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  bool i; // zf
  int v6; // ecx
  int v7; // eax

  if ( *a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
  }
  else
  {
    v2 = 0LL;
  }
  v3 = a1[2];
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  v4 = v2;
  if ( v3 < v2 )
    v4 = v3;
  for ( i = v4 == 0; ; i = v4 == 0 )
  {
    if ( i )
    {
      v6 = 0;
      goto LABEL_14;
    }
    if ( *(_WORD *)a1 != *a2 )
      break;
    a1 = (_QWORD *)((char *)a1 + 2);
    ++a2;
    --v4;
  }
  v6 = *(_WORD *)a1 < *a2 ? -1 : 1;
LABEL_14:
  v7 = v3 != v2;
  if ( v3 < v2 )
    v7 = -1;
  if ( v6 )
    v7 = v6;
  return v7 == 0;
}
