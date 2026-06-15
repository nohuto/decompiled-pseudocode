/*
 * XREFs of ?AddTail@?$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z @ 0x180054E00
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x180054E84 (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall TList<CKsNotificationsMonitor>::AddTail(__int64 a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rcx

  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v5[2] = a2;
    v5[1] = qword_1801B8470;
    *v5 = 0LL;
    if ( qword_1801B8470 )
      *(_QWORD *)qword_1801B8470 = v5;
    else
      g_lstKsNotificationMonitors = v5;
    ++dword_1801B8478;
    qword_1801B8470 = (__int64)v5;
  }
  return v5;
}
