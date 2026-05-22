/*
 * XREFs of ?BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSystemContextClient@@@Z @ 0x18007AD74
 * Callers:
 *     ?OnSystemContextNotification@ISMHeatFrameworkHost@@UEAAJPEAUSystemContextMessage@@@Z @ 0x18007B150 (-OnSystemContextNotification@ISMHeatFrameworkHost@@UEAAJPEAUSystemContextMessage@@@Z.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18007B2E0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::BroadcastInputConfigMessage(
        ISMHeatFrameworkHost *this,
        struct SystemContextMessage *a2,
        struct IHeatSystemContextClient *a3)
{
  __int64 ***v3; // rdi
  __int64 **i; // rbx
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6[1] = 0;
  v6[3] = 0;
  v6[0] = 1;
  v6[2] = *((_DWORD *)a2 + 2);
  v7 = *((_QWORD *)a2 + 2);
  if ( a3 )
  {
    (**(void (__fastcall ***)(struct IHeatSystemContextClient *, _DWORD *))a3)(a3, v6);
  }
  else
  {
    v3 = (__int64 ***)*((_QWORD *)this + 8);
    for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
      (*(void (__fastcall **)(__int64 *, _DWORD *))*i[2])(i[2], v6);
  }
  return 0LL;
}
