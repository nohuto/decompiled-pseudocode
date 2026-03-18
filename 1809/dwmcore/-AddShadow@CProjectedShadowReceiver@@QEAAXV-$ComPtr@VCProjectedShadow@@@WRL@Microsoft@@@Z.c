/*
 * XREFs of ?AddShadow@CProjectedShadowReceiver@@QEAAXV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@Z @ 0x1801AEA68
 * Callers:
 *     ?CreateShadow@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801AFC78 (-CreateShadow@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiv.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801AC680 (--$_Emplace_reallocate@AEBV-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPro.c)
 */

__int64 __fastcall CProjectedShadowReceiver::AddShadow(CResource *this, __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx

  *(_QWORD *)(*a2 + 80) = this;
  v4 = (__int64 *)*((_QWORD *)this + 9);
  if ( *((__int64 **)this + 10) == v4 )
  {
    std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CProjectedShadow> const &>(
      (_QWORD *)this + 8,
      v4,
      a2);
  }
  else
  {
    v5 = (__int64 *)*((_QWORD *)this + 9);
    *v4 = *a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v5);
    *((_QWORD *)this + 9) += 8LL;
  }
  CResource::RegisterNotifier(this, *(struct CResource **)(*a2 + 72));
  result = (*(__int64 (__fastcall **)(CResource *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
