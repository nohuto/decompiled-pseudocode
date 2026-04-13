/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180022110
 * Callers:
 *     <none>
 * Callees:
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180022B08 (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJXZ @ 0x18005BF08 (-RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v3; // rax
  int v4; // edi
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v5; // rbx

  *a2 = 0LL;
  v3 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)operator new(
                                                                                     0xC8uLL,
                                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v5 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl(v3);
    v4 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(v5);
    if ( v4 >= 0 )
    {
      v4 = (**(__int64 (__fastcall ***)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a2);
    }
    else if ( !v5 )
    {
      return (unsigned int)v4;
    }
    (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v5 + 16LL))(v5);
    return (unsigned int)v4;
  }
  return (unsigned int)-2147024882;
}
