/*
 * XREFs of ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x180054BFC
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x180054E84 (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180036D2C (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180054D20 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180054D80 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CKsNotificationsMonitor::Initialize(
        CKsNotificationsMonitor *this,
        struct IUnknown *a2,
        const unsigned __int16 *a3)
{
  struct IUnknown **v6; // rcx
  __int64 v7; // rax
  SIZE_T v8; // rbp
  unsigned __int16 *v9; // rax
  struct IUnknown *v10; // rcx
  int v11; // ebx
  struct IUnknown *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v6 = (struct IUnknown **)((char *)this + 32);
  if ( *v6 != a2 )
    ATL::AtlComPtrAssign(v6, a2);
  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v8 = 2 * v7 + 2;
  v9 = (unsigned __int16 *)CoTaskMemAlloc(v8);
  *((_QWORD *)this + 2) = v9;
  if ( v9 )
  {
    StringCbCopyW(v9, v8, a3);
    v10 = v13;
    if ( v13 != a2 )
    {
      ATL::AtlComQIPtrAssign(&v13, a2, &GUID_9c2c4058_23f5_41de_877a_df3af236a09e);
      v10 = v13;
    }
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v10->lpVtbl[1].AddRef)(v10, (char *)this + 8);
    if ( v11 >= 0 )
    {
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v13->lpVtbl[1].QueryInterface)(v13, (char *)this + 28);
      if ( v11 >= 0 )
      {
        v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CKsNotificationsMonitor *))a2->lpVtbl[4].Release)(
                a2,
                &CKsNotificationsMonitor::m_ctx,
                this);
        if ( v11 >= 0 )
          *((_DWORD *)this + 3) = 1;
      }
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v13 )
    ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
  return (unsigned int)v11;
}
