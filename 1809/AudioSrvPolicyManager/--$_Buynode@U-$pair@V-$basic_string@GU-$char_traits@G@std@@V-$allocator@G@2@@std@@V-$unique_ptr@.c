/*
 * XREFs of ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@1@PEAU21@0$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@1@@Z @ 0x18002FCBC
 * Callers:
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002EB00 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@PEAU32@0@Z @ 0x18002FC38 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::_Buynode<std::pair<std::wstring,std::unique_ptr<CEndpointVolumeState>>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = std::_List_alloc<std::_List_base_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>::_Buynode0(
         a1,
         a2,
         a3);
  v7[4] = 0LL;
  v7[5] = 0LL;
  *((_OWORD *)v7 + 1) = *(_OWORD *)a4;
  *((_OWORD *)v7 + 2) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 7LL;
  *(_WORD *)a4 = 0;
  v5 = *(_QWORD *)(a4 + 32);
  *(_QWORD *)(a4 + 32) = 0LL;
  v7[6] = v5;
  return v7;
}
