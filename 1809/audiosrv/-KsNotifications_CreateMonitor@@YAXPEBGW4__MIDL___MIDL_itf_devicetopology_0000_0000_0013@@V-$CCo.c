/*
 * XREFs of ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x1800502DC
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x1800501A4 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z @ 0x1800504C8 (-AddTail@-$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z.c)
 *     ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x180050550 (-Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void **__fastcall KsNotifications_CreateMonitor(unsigned __int16 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  void **result; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct IPart **); // r10
  struct IPart *v9; // rcx
  CKsNotificationsMonitor *v10; // rbx
  __int64 v11; // rcx
  struct IPart *v12; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v15; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h] BYREF

  result = (void **)&retaddr;
  v13[1] = -2LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IPart **))*a3;
  v9 = 0LL;
  v12 = 0LL;
  if ( v8 )
  {
    result = (void **)(**v8)(v8, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v12);
    v9 = v12;
  }
  if ( v9 )
  {
    result = (void **)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (CKsNotificationsMonitor *)result;
    v13[0] = result;
    if ( result )
    {
      memset_0(result, 0, 0x28uLL);
      *((_DWORD *)v10 + 3) = 0;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_DWORD *)v10 + 6) = 1;
      *((_QWORD *)v10 + 4) = 0LL;
      ++CKsNotificationsMonitor::m_cRefAll;
      result = &CKsSoftwareNotificationsMonitor::`vftable';
      *(_QWORD *)v10 = &CKsSoftwareNotificationsMonitor::`vftable';
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v13[0] = 0LL;
      if ( ((int (__fastcall *)(struct IPart *, __int64, GUID *, _QWORD *))v12->lpVtbl->Activate)(
             v12,
             23LL,
             &GUID_fbe4a6da_1a5e_4633_a491_9a9ff7f97a30,
             v13) < 0
        || (result = (void **)(*(__int64 (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)v13[0] + 24LL))(
                                v13[0],
                                &gConnectorEnablingInfo,
                                2LL),
            (int)result >= 0) )
      {
        if ( CKsNotificationsMonitor::Initialize(v10, v12, a1) >= 0 )
        {
          lpCriticalSection = &g_csKsNotificationMonitors;
          v15 = 0;
          ATL::CCritSecLock::Lock(&lpCriticalSection);
          if ( TList<CKsNotificationsMonitor>::AddTail(v11, v10) )
            (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( v15 )
            LeaveCriticalSection(lpCriticalSection);
        }
        result = (void **)(*(__int64 (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v13[0] )
        result = (void **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    }
    v9 = v12;
  }
  if ( v9 )
    result = (void **)((__int64 (__fastcall *)(struct IPart *))v9->lpVtbl->Release)(v9);
  if ( *a3 )
    result = (void **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  if ( *a4 )
    return (void **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  return result;
}
