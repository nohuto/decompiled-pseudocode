/*
 * XREFs of ?OnReceiverRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801AF2BC
 * Callers:
 *     ?ClearReceivers@CProjectedShadowScene@@QEAAXXZ @ 0x1801AFBC4 (-ClearReceivers@CProjectedShadowScene@@QEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18005B468 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801AE898 (-erase@-$vector@V-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCProjectedS.c)
 */

void __fastcall CProjectedShadowReceiver::OnReceiverRemovedFromScene(
        CProjectedShadowReceiver *this,
        struct CProjectedShadowScene *a2)
{
  _QWORD *v2; // r15
  struct CProjectedShadowScene *v3; // rsi
  int v5; // edi
  __int64 v6; // r12
  __int64 v7; // rbp
  struct CResource *v8; // rbx
  _QWORD *v9; // r13
  int v10; // esi
  __int64 v11; // rbp
  __int64 v12; // r15
  struct CResource *v13; // rcx
  __int64 v14[11]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h]
  struct CResource *v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  v3 = a2;
  v5 = ((__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) >> 3) - 1;
  if ( v5 >= 0 )
  {
    v6 = 8LL * v5;
    v7 = v6;
    v15 = v6;
    do
    {
      v17 = *(struct CResource **)(v6 + *v2);
      v8 = v17;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v17);
      if ( *((struct CProjectedShadowScene **)v8 + 11) == v3 )
      {
        v17 = (struct CResource *)*((_QWORD *)v8 + 9);
        v9 = (_QWORD *)((char *)v17 + 64);
        v10 = ((__int64)(*((_QWORD *)v17 + 9) - *((_QWORD *)v17 + 8)) >> 3) - 1;
        if ( v10 >= 0 )
        {
          v11 = 8LL * v10;
          v12 = v11;
          do
          {
            v13 = *(struct CResource **)(*v9 + v11);
            if ( v13 == v8 )
            {
              *((_QWORD *)v13 + 9) = 0LL;
              std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::erase((__int64)v9, &v18, v12 + *v9);
            }
            v12 -= 8LL;
            v11 -= 8LL;
            --v10;
          }
          while ( v10 >= 0 );
          v7 = v15;
          v2 = (_QWORD *)((char *)this + 64);
        }
        *((_QWORD *)v8 + 10) = 0LL;
        std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::erase((__int64)v2, v14, v7 + *v2);
        CResource::UnRegisterNotifierInternal(this, v17);
        v3 = a2;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v8 + 16LL))(v8);
      v7 -= 8LL;
      v6 -= 8LL;
      --v5;
      v15 = v7;
    }
    while ( v5 >= 0 );
  }
  CPtrArrayBase::Remove((struct CProjectedShadowScene *)((char *)v3 + 24), (__int64)this);
  (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
}
