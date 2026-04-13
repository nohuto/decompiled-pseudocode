/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18007647C
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x18007280C (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x18007AED4 (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x180087564 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009611C (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009ACF8 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x18009B104 (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180014C08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180068044 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800766D4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     memcpy_0 @ 0x1800CB1E8 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, char *a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  char *v6; // rax
  char *v7; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  _WORD *v11; // rax
  _WORD *v12; // rcx
  _WORD *v13; // rax

  v5 = Src;
  if ( !a2 )
    goto LABEL_13;
  v6 = Src[3] < 8uLL ? (char *)Src : (char *)*Src;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( Src[3] >= 8uLL )
    Src = (_QWORD *)*Src;
  if ( (char *)Src + 2 * v5[2] <= a2 )
  {
LABEL_13:
    v9 = v5[2];
    if ( ~v9 > a3 )
    {
      if ( !a3 )
        return v5;
      v10 = v9 + a3;
      if ( v9 + a3 <= 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v5[3] >= v10 )
        {
          if ( v10 )
          {
LABEL_24:
            if ( v5[3] < 8uLL )
              v12 = v5;
            else
              v12 = (_WORD *)*v5;
            memcpy_0(&v12[v5[2]], a2, 2 * a3);
            if ( v5[3] < 8uLL )
              v13 = v5;
            else
              v13 = (_WORD *)*v5;
            v5[2] = v10;
            v13[v10] = 0;
            return v5;
          }
          if ( v5[3] < 8uLL )
            v11 = v5;
          else
            v11 = (_WORD *)*v5;
          v5[2] = 0LL;
          *v11 = 0;
        }
        else
        {
          std::wstring::_Copy((const void **)v5, v9 + a3, v9);
        }
        if ( v10 )
          goto LABEL_24;
        return v5;
      }
    }
    std::wstring::_Xlen();
  }
  if ( v5[3] < 8uLL )
    v7 = (char *)v5;
  else
    v7 = (char *)*v5;
  return (_QWORD *)std::wstring::append(v5, v5, (a2 - v7) >> 1, a3);
}
