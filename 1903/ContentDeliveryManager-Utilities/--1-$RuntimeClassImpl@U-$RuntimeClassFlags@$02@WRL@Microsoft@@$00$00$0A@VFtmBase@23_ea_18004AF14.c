/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004AF14
 * Callers:
 *     ??_EActivityToastNotificationCallback@ToastNotification@@UEAAPEAXI@Z @ 0x18004BB50 (--_EActivityToastNotificationCallback@ToastNotification@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18004BBE0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UINotificationActivationC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>(
        __int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v3 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
