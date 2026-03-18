/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@AEBQEAVCChannelContext@@@Z @ 0x1800B80C0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A63A0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x1800A7D68 (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x1800D2D7C (-ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_A.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r9
  _QWORD **v10; // r11
  _QWORD *i; // rax
  _QWORD *v12; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = a3;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v6 = *v5++;
      v4 = 0x100000001B3LL * (v6 ^ v4);
    }
    while ( v5 - a3 != 8 );
  }
  v7 = a1[3];
  v8 = a1[1];
  v9 = *(_QWORD *)(v7 + 16 * (v4 & a1[6]));
  v10 = (_QWORD **)(v7 + 16 * (v4 & a1[6]));
  for ( i = *v10; ; i = (_QWORD *)*i )
  {
    v12 = (_QWORD *)(v9 == v8 ? a1[1] : *v10[1]);
    if ( i == v12 )
      break;
    if ( i[2] == *(_QWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v8;
  return a2;
}
