/*
 * XREFs of ?OnCasterRemovedFromScene@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801ADB30
 * Callers:
 *     ?ClearCasters@CProjectedShadowScene@@QEAAXXZ @ 0x1801AFB18 (-ClearCasters@CProjectedShadowScene@@QEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801AE898 (-erase@-$vector@V-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCProjectedS.c)
 *     ?OnCasterRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z @ 0x1801AF21C (-OnCasterRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z.c)
 */

void __fastcall CProjectedShadowCaster::OnCasterRemovedFromScene(
        CProjectedShadowCaster *this,
        struct CProjectedShadowScene *a2)
{
  _QWORD *v2; // r14
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  v4 = ((__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) >> 3) - 1;
  if ( v4 >= 0 )
  {
    v5 = 8LL * v4;
    v6 = v5;
    do
    {
      v8 = *(_QWORD *)(v5 + *v2);
      v7 = v8;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v8);
      if ( *(struct CProjectedShadowScene **)(v7 + 88) == a2 )
      {
        CProjectedShadowReceiver::OnCasterRemovedFromScene(
          *(CProjectedShadowReceiver **)(v7 + 80),
          (struct CProjectedShadow *)v7);
        *(_QWORD *)(v7 + 72) = 0LL;
        std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::erase(v2, &v9, v6 + *v2);
      }
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v6 -= 8LL;
      v5 -= 8LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
}
