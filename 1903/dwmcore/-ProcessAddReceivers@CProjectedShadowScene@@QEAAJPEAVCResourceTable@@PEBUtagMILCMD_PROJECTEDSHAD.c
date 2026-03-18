/*
 * XREFs of ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x180003B74
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x180003A68 (--$_Insert@AEAPEAVCProjectedShadowReceiver@@@-$list@UReceiverEntry@CProjectedShadowScene@@V-$all.c)
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180006AF4 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180008208 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18001FCB0 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAddReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS *a3,
        _DWORD *a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  struct CResource *ResourceWithoutType; // rax
  unsigned int v11; // ecx
  CProjectedShadowScene *v12; // rbx
  _QWORD *v13; // rdx
  CProjectedShadowScene *v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, a4[v5]);
      v12 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              129LL) )
      {
        break;
      }
      v15 = v12;
      if ( !CProjectedShadowScene::FindReceiverEntry(this, v12) )
      {
        std::list<CProjectedShadowScene::ReceiverEntry>::_Insert<CProjectedShadowReceiver * &>(
          (__int64)this + 72,
          *((_QWORD *)this + 9),
          (__int64 *)&v15);
        v15 = this;
        v13 = (_QWORD *)*((_QWORD *)v12 + 9);
        if ( *((_QWORD **)v12 + 10) == v13 )
        {
          std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(
            (char *)v12 + 64,
            v13,
            &v15);
        }
        else
        {
          *v13 = this;
          *((_QWORD *)v12 + 9) += 8LL;
        }
        CProjectedShadowReceiver::RequestRedraw(v12);
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)a3 + 2) )
        return v4;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x4Cu, 0LL);
  }
  return v4;
}
