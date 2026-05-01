/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImeStatusNotificationExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801829C0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImeStatusNotificationExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800B4A20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImeStatusNotific.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImeStatusNotificationExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800B4A30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIIme_ea_1800B4A30.c)
 *     ??$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180182070 (--$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 *     ??1?$ComPtr@VImeNotificationExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180182328 (--1-$ComPtr@VImeNotificationExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@ImeNotificationExperienceManager@@UEAAKXZ @ 0x180182A30 (-Release@ImeNotificationExperienceManager@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Windows::Foundation::IClosable>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 4);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 4, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_6;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_6:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 56))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
