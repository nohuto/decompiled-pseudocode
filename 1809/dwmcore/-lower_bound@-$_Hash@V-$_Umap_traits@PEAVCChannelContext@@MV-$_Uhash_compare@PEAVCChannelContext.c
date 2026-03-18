/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@AEBQEAVCChannelContext@@@Z @ 0x180058950
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180051970 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x180054104 (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x180073F2C (-ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIM.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // r9
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // r10
  _QWORD *v13; // rcx

  v5 = a3[6] ^ (0x100000001B3LL
              * (a3[5] ^ (0x100000001B3LL
                        * (a3[4] ^ (0x100000001B3LL
                                  * (a3[3] ^ (0x100000001B3LL
                                            * (a3[2] ^ (0x100000001B3LL
                                                      * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL))))))))))));
  v6 = a3[7];
  v7 = a1[3];
  v8 = (0x100000001B3LL * (v6 ^ (0x100000001B3LL * v5))) & a1[6];
  v9 = (_QWORD *)a1[1];
  v8 *= 2LL;
  v10 = *(_QWORD **)(v7 + 8 * v8);
  v11 = v10;
  v12 = v7 + 8 * v8;
  while ( 1 )
  {
    v13 = v11 == v9 ? v9 : **(_QWORD ***)(v12 + 8);
    if ( v10 == v13 )
      break;
    if ( v10[2] == *(_QWORD *)a3 )
    {
      *a2 = v10;
      return a2;
    }
    v10 = (_QWORD *)*v10;
  }
  *a2 = v9;
  return a2;
}
