/*
 * XREFs of ??1?$list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180027F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  volatile signed __int32 *v5; // rcx

  v2 = *(_QWORD **)*a1;
  *(_QWORD *)*a1 = *a1;
  *(_QWORD *)(*a1 + 8LL) = *a1;
  a1[1] = 0LL;
  v3 = (_QWORD *)*a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      v5 = (volatile signed __int32 *)v2[2];
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd(v5 + 13, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      operator delete(v2, (const struct std::nothrow_t *)0x18);
      v2 = v4;
      v3 = (_QWORD *)*a1;
    }
    while ( v4 != (_QWORD *)*a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x18);
}
