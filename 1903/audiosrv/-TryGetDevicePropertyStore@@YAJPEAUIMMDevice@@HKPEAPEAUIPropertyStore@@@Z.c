/*
 * XREFs of ?TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x1800E152C
 * Callers:
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800E0FC0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18000A1A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TryGetDevicePropertyStore(struct IUnknown *a1, int a2, unsigned int a3, struct IPropertyStore **a4)
{
  int v7; // ebx
  struct IUnknown *v8; // rcx
  struct IUnknown *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[1] = (struct IUnknown *)-2LL;
  v7 = 0;
  if ( !a2 )
  {
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))a1->lpVtbl[1].AddRef)(a1, a3, a4);
LABEL_9:
    if ( v7 < 0 )
      AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 2348, v7);
    return (unsigned int)v7;
  }
  v8 = 0LL;
  v10[0] = 0LL;
  if ( a1 )
  {
    ATL::AtlComQIPtrAssign(v10, a1, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e);
    v8 = v10[0];
    if ( v10[0] )
    {
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))v10[0]->lpVtbl[1].Release)(
             v10[0],
             a3,
             a4);
      if ( v10[0] )
        ((void (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *))v10[0]->lpVtbl->Release)(v10[0], v10[0]->lpVtbl);
      goto LABEL_9;
    }
  }
  *a4 = 0LL;
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v7;
}
