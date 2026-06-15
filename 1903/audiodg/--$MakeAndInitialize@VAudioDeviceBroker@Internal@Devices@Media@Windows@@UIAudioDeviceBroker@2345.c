/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140002E10
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14000136C (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x1400013E0 (--0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x1400014E4 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140003D18 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140014320 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModul.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140046EF0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
        RTL_SRWLOCK **a1,
        HANDLE *a2)
{
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rbx
  int CanCastTo; // edi
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // r9
  __int64 v10; // rdx

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = Windows::Media::Devices::Internal::AudioDeviceBroker::AudioDeviceBroker(v4);
  CanCastTo = Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(
                (Windows::Media::Devices::Internal::AudioDeviceBroker *)v5,
                *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( (unsigned int)InlineIsEqualGUID(
                         &GUID_57334b0d_4eb7_46ad_b19d_e41a029e3674,
                         &GUID_00000000_0000_0000_c000_000000000046)
      || (unsigned int)InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v5;
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
      CanCastTo = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v8, v9) )
      {
        *a1 = v5;
        CanCastTo = 0;
LABEL_7:
        (*((void (__fastcall **)(RTL_SRWLOCK *))(*a1)->Ptr + 1))(*a1);
        goto LABEL_8;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    &v5[1],
                    v10);
      if ( CanCastTo >= 0 )
        goto LABEL_7;
    }
  }
LABEL_8:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)CanCastTo;
}
