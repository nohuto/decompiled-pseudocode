/*
 * XREFs of _lambda_1b237cfa226cb7a358646b393456f6b8_::operator() @ 0x1802DEAC4
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___::InternalResumeRT @ 0x1802DF040 (shell--TaskScheduler--CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___--InternalR.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180019450 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_1b237cfa226cb7a358646b393456f6b8_::operator()(CMarshaledInterface *this)
{
  void *v3; // [rsp+30h] [rbp+8h] BYREF
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
  if ( (int)CMarshaledInterface::_Unmarshal(this, &GUID_0d1b8579_c52e_4207_89b3_9726ce949410, &v4, 0) >= 0 )
  {
    v3 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v3);
    if ( (int)CMarshaledInterface::_Unmarshal(
                (CMarshaledInterface *)((char *)this + 8),
                &GUID_537b455d_1240_433b_82af_10929138b8be,
                &v3,
                0) >= 0 )
      (*(void (__fastcall **)(void *, void *))(*(_QWORD *)v4 + 24LL))(v4, v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v3);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
}
