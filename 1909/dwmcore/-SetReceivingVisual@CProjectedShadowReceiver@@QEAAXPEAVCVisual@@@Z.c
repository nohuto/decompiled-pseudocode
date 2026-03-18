/*
 * XREFs of ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180003690
 * Callers:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x180003500 (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ?ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL@@@Z @ 0x18000356C (-ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJ.c)
 * Callees:
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x1800035C0 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180005100 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180006968 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180006E98 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180006FD4 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

void __fastcall CProjectedShadowReceiver::SetReceivingVisual(CProjectedShadowScene ***this, CProjectedShadowScene **a2)
{
  CProjectedShadowScene **v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax
  CProjectedShadowScene **v8; // rcx
  __int64 ProjectedShadowReceivers; // rsi
  CProjectedShadowReceiver **v10; // r8
  CProjectedShadowReceiver **i; // rcx

  if ( a2 != this[7] )
  {
    if ( this[7] )
    {
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
      v4 = this[8];
      v5 = 0LL;
      v6 = (unsigned __int64)((char *)this[9] - (char *)v4 + 7) >> 3;
      if ( v4 > this[9] )
        v6 = 0LL;
      if ( v6 )
      {
        do
        {
          ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(*v4, (const struct CProjectedShadowReceiver *)this);
          *((_QWORD *)ReceiverEntry + 3) = 0LL;
          std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear((char *)ReceiverEntry + 8);
          ++v5;
          ++v4;
        }
        while ( v5 != v6 );
      }
      v8 = this[7];
      if ( (*(_DWORD *)v8[28] & 0x10000) != 0 )
      {
        ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers(v8);
        v10 = *(CProjectedShadowReceiver ***)(ProjectedShadowReceivers + 8);
        for ( i = *(CProjectedShadowReceiver ***)ProjectedShadowReceivers;
              i != v10 && *i != (CProjectedShadowReceiver *)this;
              ++i )
        {
          ;
        }
        if ( i != v10 )
        {
          memmove_0(i, i + 1, (char *)v10 - (char *)(i + 1));
          *(_QWORD *)(ProjectedShadowReceivers + 8) -= 8LL;
        }
      }
    }
    this[7] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowReceiver((CVisual *)a2, (struct CProjectedShadowReceiver *)this);
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
    }
  }
}
