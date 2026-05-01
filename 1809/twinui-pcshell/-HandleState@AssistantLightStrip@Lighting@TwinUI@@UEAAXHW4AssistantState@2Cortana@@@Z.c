/*
 * XREFs of ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x18039DC80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800835B0 (-_Tidy@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allo.c)
 *     ??4?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18039D954 (--4-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 *     ?Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@Z @ 0x18039DA08 (-Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV-$vector@V-$vector@UColor@UI@Windows@@V-.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightStrip::HandleState(__int64 a1, int a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 *v8; // rdx
  int v9; // eax
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  v11 = 0LL;
  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          v8 = (__int64 *)&error;
        else
          v8 = (__int64 *)&idle;
      }
      else
      {
        v8 = (__int64 *)&responding;
      }
    }
    else
    {
      v8 = (__int64 *)&thinking;
    }
  }
  else
  {
    v8 = (__int64 *)&listening;
  }
  std::vector<std::vector<Windows::UI::Color>>::operator=((__int64)&v10, v8);
  v9 = TwinUI::Lighting::AssistantLightStrip::Animate(a1, a2, (__int64 *)&v10);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      83LL,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightstrip.cpp",
      (const char *)(unsigned int)v9);
  std::vector<std::vector<Windows::UI::Color>>::_Tidy((char **)&v10);
}
