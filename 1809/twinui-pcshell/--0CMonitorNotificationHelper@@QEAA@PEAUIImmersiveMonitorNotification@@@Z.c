/*
 * XREFs of ??0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z @ 0x1800FB10C
 * Callers:
 *     ?s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FBFB4 (-s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB03C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@M.c)
 */

CMonitorNotificationHelper *__fastcall CMonitorNotificationHelper::CMonitorNotificationHelper(
        CMonitorNotificationHelper *this,
        struct IImmersiveMonitorNotification *a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>((__int64)this);
  *(_QWORD *)this = &CMonitorNotificationHelper::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveMonitorNotification *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
  return this;
}
