/*
 * XREFs of ??0CDropFeedback@@QEAA@XZ @ 0x1803D4A68
 * Callers:
 *     ??$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedback@@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x1803D49C0 (--$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DR.c)
 * Callees:
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006CC1C (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIDropFeedback@@UIT.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CWRLObjectWithSite@@QEAA@XZ @ 0x180122928 (--0CWRLObjectWithSite@@QEAA@XZ.c)
 */

CDropFeedback *__fastcall CDropFeedback::CDropFeedback(CDropFeedback *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  CDropFeedback *result; // rax

  CWRLObjectWithSite::CWRLObjectWithSite(this);
  v3 = (_QWORD *)(v2 + 24);
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>>(v2 + 24);
  *((_DWORD *)this + 15) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::`vftable';
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::`vftable'{for `IDropFeedback'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::`vftable'{for `IImmersiveApplicationNotification'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITempAppVisualHost>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CDropFeedback::`vftable';
  *v3 = &CDropFeedback::`vftable'{for `IDropFeedback'};
  *((_QWORD *)this + 4) = &CDropFeedback::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>'};
  *((_QWORD *)this + 5) = &CDropFeedback::`vftable'{for `IImmersiveApplicationNotification'};
  *((_QWORD *)this + 6) = &CDropFeedback::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITempAppVisualHost>'};
  *((_DWORD *)this + 28) = -3;
  *((_DWORD *)this + 29) = -3;
  result = this;
  *((_DWORD *)this + 30) = 0;
  *((_BYTE *)this + 124) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
