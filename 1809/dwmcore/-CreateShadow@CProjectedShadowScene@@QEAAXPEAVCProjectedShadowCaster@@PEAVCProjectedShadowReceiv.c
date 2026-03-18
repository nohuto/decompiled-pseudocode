/*
 * XREFs of ?CreateShadow@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801AFC78
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x1801AFE00 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCE.c)
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1801AFF98 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWS.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??2CProjectedShadow@@SAPEAX_K@Z @ 0x180173B38 (--2CProjectedShadow@@SAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801AC680 (--$_Emplace_reallocate@AEBV-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPro.c)
 *     ?AddShadow@CProjectedShadowReceiver@@QEAAXV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@Z @ 0x1801AEA68 (-AddShadow@CProjectedShadowReceiver@@QEAAXV-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x1801C8224 (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 */

void __fastcall CProjectedShadowScene::CreateShadow(
        struct CComposition **this,
        struct CProjectedShadowCaster *a2,
        struct CProjectedShadowReceiver *a3)
{
  CProjectedShadow *v6; // rax
  CProjectedShadow *v7; // rbx
  CProjectedShadow **v8; // rdx
  __int64 *v9; // rcx
  CProjectedShadow *v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = (CProjectedShadow *)CProjectedShadow::operator new();
  v7 = 0LL;
  if ( v6 )
    v7 = CProjectedShadow::CProjectedShadow(v6, this[2]);
  v10 = v7;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v10);
  *((_QWORD *)v7 + 11) = this;
  v10 = v7;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v10);
  *((_QWORD *)v7 + 9) = a2;
  v8 = (CProjectedShadow **)*((_QWORD *)a2 + 9);
  if ( *((CProjectedShadow ***)a2 + 10) == v8 )
  {
    std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CProjectedShadow> const &>(
      (_QWORD *)a2 + 8,
      v8,
      (__int64 *)&v10);
  }
  else
  {
    v9 = (__int64 *)*((_QWORD *)a2 + 9);
    *v8 = v7;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v9);
    *((_QWORD *)a2 + 9) += 8LL;
  }
  (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v7 + 16LL))(v7);
  v10 = v7;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v10);
  CProjectedShadowReceiver::AddShadow(a3, (__int64 *)&v10);
  (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v7 + 16LL))(v7);
}
